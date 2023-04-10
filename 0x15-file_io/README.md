In Unix and Unix-like computer operating systems, a file descriptor (FD, less frequently fildes) is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.
https://en.wikipedia.org/wiki/File_descriptor
File Handling In C
The process of file handling refers to how we store the available data or info in a file with the help of a program. The C language stores all the data available in a program into a file with the help of file handling in C. This data can be fetched/extracted from these files to work again in any program.
Description of Function
used to open an existing file or a new file: fopen()
writing data into an available file: fprintf()
reading the data available in a file: fscanf()
writing any character into the program file: fputc()
reading the character from an available file:fgetc()
used to close the program file: fclose()
used to set the file pointer to the intended file position: fseek()
writing an integer into an available file: fputw()
used to read an integer from the given file: fgetw()
used for reading the current position of a file: ftell()
sets an intended file pointer to the file’s beginning itself: rewind()
