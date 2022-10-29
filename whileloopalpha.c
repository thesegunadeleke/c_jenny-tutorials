#include <stdio.h>

/**
 * a program to print alphabets a to z using while loop
 */

void main()
{
    //initialize the variable
    char ch='a';
    
    //print the values using while loop
    while(ch <= 'z')
    {
        printf("%c\n", ch);
        ch++;
    }
}
