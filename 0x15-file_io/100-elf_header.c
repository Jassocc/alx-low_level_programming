#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_error(const char *msg);
void display_elf(const char *filneame);
int main (int argc, char *argv[]);

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
	case ELFCLASSNONE: printf("None\n");
		break;
	case ELFCLASS32: printf("ELF32\n");
		break;
	case ELFCLASS64: printf("ELF64\n");
		break;
	default: printf("<unknown>\n");
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
		case ELFDATANONE: printf("None\n");
			break;
		case ELFDATA2LSB: printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB: printf("2's complement, big-endian\n");
			break;
		default: printf("<unknown>\n");
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
		case ELFOSABI_SYSV: printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX: printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM: printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE: printf("Standalone (embedded)\n");
			break;
		default: printf("<unknown>\n");
	}
}

