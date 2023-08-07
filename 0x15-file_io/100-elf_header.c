#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error - display error msg
 * @msg: error msg
 */
void check(unsigned char *msg)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (msg[idx] != 127 &&
			msg[idx] != 'E' &&
			msg[idx] != 'L' &&
			msg[idx] != 'F')
		{
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
		}
	}
}
/**
 * print_magic - prints the maghic
 * @ident: identity
 */
void print_magic(unsigned char *ident)
{
	int a;

	printf("  Magic:   ");
	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x", ident[a]);
		if (a == EI_NIDENT -1)
		{
			printf("\n");
		}
		else
		{
		printf(" ");
		}
	}
}
/**
 * print_class - prints the class
 * @class: class to be printed
 */
void print_class(unsigned char *class)
{
	printf("  Class:                              ");
	switch (class[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", class[EI_CLASS]);
	}
}
/**
 * print_data - prints data
 * @data: data to be printed
 */
void print_data(unsigned char *data)
{
	printf("  Data:                               ");
	switch (data[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("<unknown: %x>\n", data[EI_DATA]);
	}
}
/**
 * print_ver - prints ver
 * @versi: vwersion
 */
void print_ver(unsigned char *versi)
{
	printf("  Version:                            %d",
		versi[EI_VERSION]);
	switch (versi[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_os - prints the OS
 * @osabi: osabi
 */
void print_os(unsigned char *osabi)
{
	printf("  OS/ABI:                             ");
	switch (osabi[EI_OSABI])
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
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", osabi[EI_OSABI]);
	}
}
/**
 * print_ABI - print abi version
 * @versio: elf type
 */
void print_ABI(unsigned char *versio)
{
	printf("  ABI Version:                       %d\n",
			versio[EI_ABIVERSION]);
}
/**
 * print_t - prints type
 * @version_type: type
 * @version_a: pointer
 */
void print_t(unsigned int e_type, unsigned char *version_a)
{
	if (version_a[EI_DATA] == ELFDATA2MSB)
	{
	e_type >>= 8;
	}
	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_enter - prints start
 * @addr_e: address
 * @entry_p: pointer
 */
void print_enter(unsigned long int e_entry, unsigned char *entry_p)
{
	printf(" Entry point address:               ");
	if (entry_p[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (entry_p[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}
/**
 * display_elf - displays elf file
 * @filename: file to display
 */
void display_elf(int filename)
{
	if (close(filename) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", filename);
		exit(98);
	}
}
/**
 * main - main function to print all
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header64;
	int orp, run;

	orp = open(argv[1], O_RDONLY);
	if (orp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header64 = malloc(sizeof(Elf64_Ehdr));
	if (header64 == NULL)
	{
		display_elf(orp);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	run = read(orp, header64, sizeof(Elf64_Ehdr));
	if (run == -1)
	{
		free(header64);
		display_elf(orp);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
	check(header64->e_ident);
	printf("ELF Header:\n");
	print_magic(header64->e_ident);
	print_class(header64->e_ident);
	print_data(header64->e_ident);
	print_ver(header64->e_ident);
	print_os(header64->e_ident);
	print_ABI(header64->e_ident);
	print_t(header64->e_type, header64->e_ident);
	print_enter(header64->e_entry, header64->e_ident);

	free(header64);
	display_elf(orp);
	return (0);
}
