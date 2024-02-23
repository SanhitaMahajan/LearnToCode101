/*
Problem Statement - 
Write a program in C which calculates average of three integer numbers given by user 
*/

/*
Algorithm - 
1. Start 
2. Read 3 interger numbers from user 
3. Store them in num1,num2,num3 
4. Declare double avg variable 
5. calculations - 
avg = num1/3 + num2/3 + num3/3
6. Display avg 
7. End
*/

// code 
#include <stdio.h>
int main(){

    int num1,num2,num3;
    printf("\nEnter three interger numbers - ");
    scanf("%d %d %d",&num1, &num2, &num3);

    double avg = num1/3.0 + num2/3.0 + num3/3.0;
    printf("\nThe average of three numbers %d , %d and %d is %0.2lf",num1,num2,num3, avg);

    return 0;
}