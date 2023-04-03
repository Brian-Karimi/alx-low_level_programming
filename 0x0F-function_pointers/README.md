Function Pointers Facts 
1) Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.
2) Unlike normal pointers, we do not allocate de-allocate memory using function pointers. 
3) A function’s name can also be used to get functions’ address. 
4) Like normal pointers, we can have an array of function pointers.
5) Function pointer can be used in place of switch case.
6) Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.
7) Many object oriented features in C++ are implemented using function pointers in C.

NB: If we remove bracket, then the expression “void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” which is declaration of a function that returns void pointer.
