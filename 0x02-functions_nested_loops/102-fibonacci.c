#include <stdio.h>

/**
 * main- entry point 
 * Fibonnaci sequesnce, where new value is the sum of the two preceeding variables
 *
 * return : 0
 */
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
    if (y <= 46)
    {
        putchar(',');
        putchar(' ');
    }
    }
    
    printf("\n");
}
