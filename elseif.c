// Online C compiler to run C program online
#include <stdio.h>

/**
 * a program to check the score
 * of a student.
*/


void main()
{
    //declare the variable marks
    int marks;
    
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    //if else if statement checks the score to award the grade
    if(marks > 80)
        printf("Grade is A\n");
    else if(marks > 70)
        printf("Grade is B\n");
    else if(marks > 60)
        printf("Grade is C\n");
    else
        printf("Grade is D\n");
        
    printf("End of program");
    
}
