#include <stdio.h>

void main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The character is a vowel");
            break;
        default:
            printf("The character is not a vowel");
    }
}
