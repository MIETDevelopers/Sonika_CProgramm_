#include<stdio.h> //Pre-process directive to include standard input and output functions header file

 int main(){          //Main function
     int number,lastDigit,sum=0;   // variable declaration with datatype int
     
     //printf and scanf function calling
     printf("Enter any number: ");   
     scanf("%d",&number);
        
        // Whileloop to calculate the sum
     while(number!=0)           
     {
         lastDigit=number%10;
         sum += lastDigit;
         number/=10;
     }

     printf("Sum of digits =  %d\n",sum);  //print the sum of the numbers assigned by the user
     return 0;      // return function
<<<<<<< HEAD
 }
=======
 }
>>>>>>> 3d0a6a4a4c40c0b16569e009cebdc7078f5b6e81
