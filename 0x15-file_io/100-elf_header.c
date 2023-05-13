#include "main.h"

/**
 * _elf_check - check if ELF file
 * @e_ident: pointer to array containing ELF magic numbers
 * Return: void
 */
void _elf_check(unsigned char *e_ident)
{
	int i = 0;

	for (; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: No ELF Type\n");
			exit(98);
		}
	}
}
/**
 * elf_magic_num - prints magic numbers of ELF
 * @e_ident: ponter to array of ELF Magic nums
 * Return: void
 */
void elf_magic_num(unsigned char *e_ident)
{
	int i = 0;

	printf("  ELF Magic Num:    ");

	for (; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
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
 * elf_abi - prints the ABI version of the ELF header
 * @e_ident: pointer to an array of magic num
 * Return: void
 */
void elf_abi(unsigned char *e_ident)
{
	printf("  ELF ABI Version:           %d", e_ident[EI_ABIVERSION]);
}
/**
 * elf_class - prints ELF header class
 * @e_ident: pointer to an array of magic num
 * Return: void
 */
void elf_class(unsigned char *e_ident)
{
	printf("  ELF Class:             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			{
				printf("none\n");
				break;
			}
		case ELFCLASS32:
			{
				printf("ELF32\n");
				break;
			}
		case ELFCLASS64:
			{
				printf("ELF64\n");
				break;
			}
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * elf_osabi - prints the ELF header OS/ABI
 * @e_ident: pointer to an array of magic num
 * Return: void
 */
void elf_osabi(unsigned char *e_ident)
{
	printf(" ELF OS/ABI:           ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX- System V\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX- AIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("UNIX - ARM\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX- NetBSD\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standallone Software\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * elf_file_version - prints ELF header version
 * @e_ident:  pointer to an array of magic num
 * Return: void
 */

void elf_file_version(unsigned char *e_ident)
{
	printf(" ELF File Version:              %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			{
				printf(" (current)\n");
				break;
			}
		default:
			{
				printf("\n");
				break;
			}
	}
}
/**
 * elf_data - prints ELF file data
 * @e_ident: pointer to an array of magic num
 * Return: void
 */
void elf_data(unsigned char *e_ident)
{
	printf("  ELF Data:           ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			{
				printf("No Data\n");
				break;
			}
		case ELFDATA2LSB:
			{
				printf("Little Endianness\n");
				break;
			}
		case ELFDATA2MSB:
			{
				printf("Big Endianness\n");
				break;
			}
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * elf_entry_point - prints ELF header entry point
 * @e_entry: ELF entry point- address
 * @e_ident: pointer to an array of magic num
 * Return: void
 */

void elf_entry_point (unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  ELF Entry Point:             ");

	if (e_ident[EI_DATA == ELFDATA2MSB])
	{
		e_entry = ((e_entry) << 8 & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_DATA] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * elf_type - prints the ELF header type
 * @e_type: ELF header type
 * @e_ident: pointer to an array  of magic num
 * Return: void
 */

void elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" ELF Type:           ");
	switch (e_type)
	{
		case ET_NONE:
			{
				printf("No ELF Type\n");
				break;
			}
		case ET_REL:
			{
				printf("Reallocatable File\n");
				break;
			}
		case ET_EXEC:
			{
				printf("Execitable File\n");
				break;
			}
		case ET_DYN:
			{
				printf("DYN Share Object File\n");
				break;
			}
		case ET_CORE:
			{
				printf("Core File\n");
				break;
			}
		default:
			printf("<unknown: %x\n", e_type);
	}
}
/**
 * elf_close - function closes ELF file
 * @elf: ELF file fd
 * Return: void
 */

void elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, " Error: ELF Close  fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - entry point
 * @argc: argument counter
 * @argv: array of pointers to args
 * Return: 0 always success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	Elf64_Ehdr *hdr;
	int open_elf, read_elf;

	open_elf = open(argv[1], O_RDONLY);
	if (open_elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't Open ELF File %s\n", argv[1]);
		exit(98);
	}
	hdr = malloc(sizeof(Elf64_Ehdr));
	if (hdr == NULL)
	{
		elf_close(open_elf);
		dprintf(STDERR_FILENO, "Error: Malloc Failure %s\n", argv[1]);
		exit(98);
	}
	read_elf =  read(open_elf, hdr, sizeof(Elf64_Ehdr));
	if (read_elf == -1)
	{
		free(hdr);
		elf_close(open_elf);
		dprintf(STDERR_FILENO, "Error: `%s` : No such file\n",
		argv[1]);
		exit(98);
	}
	_elf_check(hdr->e_ident);
	printf("ELF Header:  \n");
	elf_magic_num(hdr->e_ident);
	elf_class(hdr->e_ident);
	elf_data(hdr->e_ident);
	elf_file_version(hdr->e_ident);
	elf_osabi(hdr->e_ident);
	elf_abi(hdr->e_ident);
	elf_type(hdr->e_type, hdr->e_ident);
	elf_entry_point(hdr->e_entry, hdr->e_ident);

	free(hdr);
	elf_close(open_elf);
	return (0);
}
