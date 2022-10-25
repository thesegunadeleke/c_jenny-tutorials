#include <stdio.h>

/** 
 * a program to check inputed student grade
 * using switch case
 */
 
 void main()
 {
     //declare variable for score storage.
     int marks;
     
     //collect input from the user
     printf("Enter student score here: ");
     scanf("%d", &marks);
     
     //check score and print grade
     switch(marks/10)
     {
         case 10:
         case 9:
         case 8:
            printf("Student grade is A\n");
            break;
         case 7:
            printf("Student grade is B\n");
            break;
         case 6:
            printf("Student grade is C\n");
            break;
         case 5:
            printf("Student grade is D\n");
            break;
         default:
            printf("Student try the exam again\n");
     }
     
     printf("This is the end of the program");
 }
