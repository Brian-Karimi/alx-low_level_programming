#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _elf_check(unsigned char *e_ident);
void elf_magic_num(unsigned char *e_ident);
void elf_class(unsigned char *e_ident);
void elf_data(unsigned char *e_ident);
void elf_osabi(unsigned char *e_ident);
void elf_file_version(unsigned char *e_ident);
void elf_entry_point (unsigned long int e_entry, unsigned char *e_ident);
void elf_type(unsigned int e_type, unsigned char *e_ident);
void elf_close(int elf);

#endif /** My Header File- File Handling in C*/