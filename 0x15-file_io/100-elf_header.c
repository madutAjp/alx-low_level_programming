#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * print_error_and_exit - Print an error message to stderr and exit with code 98.
 * @message: The error message to print.
 */
void print_error_and_exit(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * display_elf_header_info - Display information from the ELF header.
 * @header: A pointer to the ELF header to extract information from.
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
	int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x%c", header->e_ident[i], (i < EI_NIDENT - 1) ? ' ' : '\n');
    }

    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "Unknown");
    printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point, displays information from the ELF header of a specified ELF file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments, including the ELF filename.
 * Return: 0 on success, or appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2) {
        print_error_and_exit("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error_and_exit("Could not open the file");
    }
    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error_and_exit("Could not read the ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error_and_exit("Not an ELF file");
    }

    display_elf_header_info(&header);

    close(fd);
    return 0;
}
