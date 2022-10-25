#include <stdio.h>

/** A Program to check if input character
 * is upper case, lower case or a number
 * using the if elseif condition statements
 */

void main()
{
    //declare the variables
    char character;
    int code;
    
    //scanf collects character from user
    printf("Please, input a character here: ");
    scanf("%c", &character);
    
    //code is assigned ascii code of variable character value.
    code = character;
    
    //the ifelseif conditions.
    if(code > 96 && code < 123)
    printf("This is a lower case character");
    
    else if(code > 64 && code < 91)
    printf("This is upper case");
    
    else if(code > 47 && code < 58)
    printf("This is a number");
    
    else
    printf("Can't identify character");
}
