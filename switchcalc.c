#include <stdio.h>

void main(){
    int a, b, sum, sub, div, mul;
    char operate;
    
    printf("Enter an operator: ");
    scanf("%c", &operate);
    
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    
    switch(operate)
    {
        case '+':
            sum = a + b;
            printf("Sum is %d\n", sum);
            break;
        case '-':
            sub = a - b;
            printf("Difference is %d\n", sub);
            break;
        case '*':
            mul = a * b;
            printf("Product is %d\n", mul);
            break;
        case '/':
            div = a / b;
            printf("Division is %d\n", div);
            break;
    }
}
