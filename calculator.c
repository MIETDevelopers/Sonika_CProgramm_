<<<<<<< HEAD
/* WAP To Make Simple Calculator which performs certian Actions like +,-,*,/,% */
#include <stdio.h> // Preprocessive to include standard input and output header funtions 

int main() // Start of Main body 
{
    int num1,num2; // Variable Declaration 
    float result; // Variable Declaration 
    char var;    //to store operator choice

    printf("Enter first number: "); // Taking 1st  Input 
    scanf("%d",&num1); 
    printf("Enter second number: "); // Taking 2nd Input
    scanf("%d",&num2);

    printf("Choose operation to perform (+,-,*,/,%): "); // Choose the opeartion 
    scanf(" %c",&var);

    result=0; // Null value provoided 
    switch(var)     // Switch case 
    {
        case '+':       // 1st  CAse 
            result=num1+num2; // LOGIC 
            break; // Break statment 

        case '-':        // 2nd  CAse 
            result=num1-num2;   // LOGIC 
            break;   // Break statment 

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=(float)num1/(float)num2;
            break;

        case '%':
            result=num1%num2;
            break;
        default:   // Deafult CAse 
            printf("Invalid operation.\n");
    }

    printf("Result: %d %c %d = %f\n",num1,var,num2,result); // Printing statment 
    return 0; // returning 0 
}
// End of body 
=======
#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); //It will print the operator to be entered by user.
    scanf("%c", &operator); //It will scan the operator entered by user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user.
    switch(operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;
 case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}
>>>>>>> cf86e0d3056168085ded7756f2555237b80f662b
