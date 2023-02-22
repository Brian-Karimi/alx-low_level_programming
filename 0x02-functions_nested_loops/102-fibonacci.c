#include <stdio.h>

//In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
//#advanced
//Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
//The numbers should be separated by comma, followed by a space ,
//You are allowed to use the standard library
//You are not allowed to use any other library (You can’t use GMP etc…)
//You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
//You are not allowed to hard code any Fibonacci number (except for 1 and 2)
int main(){
    long int i = 1;
    long int x = 2;
    long int y;
    long int new_Value;
    
    printf("%li", i , x);
    
    for ( y = 0; y < 47; y++)
    {
        new_Value = i + x;
        
        i = x;
        x = new_Value;
        
        printf("%li", new_Value);
    if (y <= 94)
    {
        putchar(',');
        putchar(' ');
    }
    }
    
    printf("\n");
}
