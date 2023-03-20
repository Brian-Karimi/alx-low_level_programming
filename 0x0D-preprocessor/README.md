You create macros with the ‘#define’ directive.
 ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for,
 which is variously referred to as the macro's body, expansion or replacement list.
All preprocessor commands begin with a hash symbol (#). 
It must be the first nonblank character, and for readability, a preprocessor directive should begin in the first column.
//#define: Substitutes a preprocessor macro.
//#include: Inserts a particular header from another file.	
//#undef: Undefines a preprocessor macro.
//#ifdef: Returns true if this macro is defined.
//#ifndef: Returns true if this macro is not defined.
//#if: Tests if a compile time condition is true.	
//#else: The alternative for #if.	
//#elif: #else and #if in one statement.	
//#endif:Ends preprocessor conditional.	
//#error: Prints error message on stderr.	
//#pragma:Issues special commands to the compiler, using a standardized method.

Predefined Macros
__DATE__: The current date as a character literal in "MMM DD YYYY" format.
__TIME__: The current time as a character literal in "HH:MM:SS" format.
__FILE__: This contains the current filename as a string literal.
__LINE__: This contains the current line number as a decimal constant.
_STDC__: Defined as 1 when the compiler complies with the ANSI standard.
