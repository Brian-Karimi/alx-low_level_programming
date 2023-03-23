ISO C defines a syntax for declaring a function to take a variable number or type of arguments. (Such functions are referred to as varargs functions or variadic functions.) However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.

Macros in stdarg.h:
1: va_list is used in situations in which we need to access optional parameters and it is an argument list : va_list someArgumentPointer;
2: va_start will connect our argument list with someArgumentPointer, and we will need to say how many elements in our function we have.: va_start( someArgumentPoiner, numberOfElements);
3: va_arg is macro that will get our data which is currently connected to the argument list, and in order to achieve that task, we would need to know the type of our data.: va_arg( someArgumentPointer, someType );
4: va_end is used in situations when we would like to stop using someArgumentPointer.: va_end( someArgumentPointer );
5:va_copy is used in situations for which we need to save our current location, something like book marker. In another words, if you are in the situation in which you are advancing through argument list, but later you would need to rewind your current position to some previous state.: va_copy( va_list argumentDestination, va_list argumentSource );

