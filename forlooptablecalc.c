#include <stdio.h>

/**
 * a program to calculate the table up to 12 of a random user input number
 */
 
int main()
{
    //declare variables
    int i, j, num;
    
    //collect random number from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    //use for loop to calculate and print table up to 12 of inputed number
    for(i=1; i<=12; i++)
    {
        j = num * i;
        printf("%d * %d = %d\n",num, i, j);
    }
   
    return 0;
}
