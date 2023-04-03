The calloc() function in C++ allocates a block of memory for an array of objects and initializes all its bits to zero.

The calloc() function returns a pointer to the first byte of the allocated memory block if the allocation succeeds.

If the size is zero, the value returned depends on the implementation of the library. It may or may not be a null pointer.
The C library function void *realloc(void *ptr, size_t size) attempts to resize the memory block pointed to by ptr that was previously allocated with a call to malloc or calloc.
Exit(3): successful program termination

