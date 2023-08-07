#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_error(const char *msg);
void display_elf(const char *filneame);
int main(int argc, char *argv[]);
void print_magic(unsigned char *ident);
void print_class(unsigned char class);
void print_data(unsigned char data);
void print_os(unsigned char osabi);

/**
 * display_error - display error msg
 * @msg: error msg
 */
void display_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}
/**
 * print_magic - prints the maghic
 * @ident: identity
 */
void print_magic(unsigned char *ident)
{
	int a;

	printf("Magic:   ");
	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x ", ident[a]);
	}
	printf("\n");
}
/**
 * print_class - prints the class
 * @class: class to be printed
 */
void print_class(unsigned char class)
{
	printf("Class:                              ");
	switch (class)
	{
	case ELFCLASSNONE:
		printf("None\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown>\n");
	}
}
/**
 * print_data - prints data
 * @data: data to be printed
 */
void print_data(unsigned char data)
{
	printf("Data:                               ");
	switch (data)
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("<unknown>\n");
	}
}
/**
 * print_os - prints the OS
 * @osabi: osabi
 */
void print_os(unsigned char osabi)
{
	printf("OS/ABI:                             ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded)\n");
			break;
		default:
			printf("<unknown>\n");
	}
}
/**
 * display_elf - displays elf file
 * @filename: file to display
 */
void display_elf(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	char *file_t[] = {"None", "REL", "EXEC", "DYN", "CORE"};
	Elf64_Ehdr header64;
	ssize_t n;
	Elf32_Ehdr header32;

	if (fd == -1)
	{
	display_error("Error: Cannot open file");
	}
	n = read(fd, &header64, sizeof(header64));
	if (n == sizeof(header64))
	{
	if (header64.e_ident[EI_MAG0] != ELFMAG0 ||
		header64.e_ident[EI_MAG1] != ELFMAG1 ||
		header64.e_ident[EI_MAG2] != ELFMAG2 ||
		header64.e_ident[EI_MAG3] != ELFMAG3)
	{
	print_magic(header64.e_ident);
	print_class(header64.e_ident[EI_CLASS]);
	print_data(header64.e_ident[EI_DATA]);
	printf("Version:                            %d\n",
			header64.e_ident[EI_VERSION]);
	print_os(header64.e_ident[EI_OSABI]);
	printf("ABI Version:                        %d\n",
			header64.e_ident[EI_ABIVERSION]);
	printf("Type:                               ");
	if (header64.e_type < sizeof(file_t) / sizeof(file_t[0]))
	{
		printf("%s\n", file_t[header64.e_type]);
	}
	else
	{
		printf("<unknown>\n");
	}
	printf("Entry point address:                %#lx\n", header64.e_entry);
	close(fd);
	return;
	}
	}
	lseek(fd, 0, SEEK_SET);
	n = read(fd, &header32, sizeof(header32));
	if (n == sizeof(header32))
	{
	if (header32.e_ident[EI_MAG0] != ELFMAG0 ||
		header32.e_ident[EI_MAG1] != ELFMAG1 ||
		header32.e_ident[EI_MAG2] != ELFMAG2 ||
		header32.e_ident[EI_MAG3] != ELFMAG3)
	{
	print_magic(header32.e_ident);
	print_class(header32.e_ident[EI_CLASS]);
	print_data(header32.e_ident[EI_DATA]);
	printf("Version:                            %d\n",
			header32.e_ident[EI_VERSION]);
	print_os(header32.e_ident[EI_OSABI]);
	printf("ABI Version:                        %d\n",
			header32.e_ident[EI_ABIVERSION]);
	printf("Type:                               ");
	if (header32.e_type < sizeof(file_t) / sizeof(file_t[0]))
	{
		printf("%s\n", file_t[header32.e_type]);
	}
	else
	{
		printf("<unknown>\n");
	}
	printf("Entry point address:                %#x\n", header32.e_entry);
	close(fd);
	return;
	}
	}
	display_error("Error: Not an ELF file");
}
/**
 * main - main function to print all
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	display_elf(argv[1]);
	return (0);
}
