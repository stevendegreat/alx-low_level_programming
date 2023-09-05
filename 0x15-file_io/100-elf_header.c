#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/*Function prototypes*/
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

int main(int argc, char *argv[])
{
    Elf64_Ehdr *header;
    int file_descriptor, read_result;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        exit(1);
    }

    /*Open the file for reading*/
    file_descriptor = open(argv[1], O_RDONLY);
    if (file_descriptor == -1)
    {
        perror("Error: Can't open file");
        exit(98);
    }

    /*Allocate memory for the ELF header*/
    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        close_elf(file_descriptor);
        perror("Error: Can't allocate memory for header");
        exit(98);
    }

    /*Read the ELF header*/
    read_result = read(file_descriptor, header, sizeof(Elf64_Ehdr));
    if (read_result == -1)
    {
        free(header);
        close_elf(file_descriptor);
        perror("Error: Can't read file");
        exit(98);
    }

    /*Check if it's an ELF file*/
    check_elf(header->e_ident);

    /*Print ELF header information*/
    printf("ELF Header:\n");
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_ident);
    print_osabi(header->e_ident);
    print_abi(header->e_ident);
    print_type(header->e_type, header->e_ident);
    print_entry(header->e_entry, header->e_ident);

    /*Clean up and close the file*/
    free(header);
    close_elf(file_descriptor);

    return 0;
}

void check_elf(unsigned char *e_ident)
{
    for (int index = 0; index < 4; index++)
    {
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F')
        {
            fprintf(stderr, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}
