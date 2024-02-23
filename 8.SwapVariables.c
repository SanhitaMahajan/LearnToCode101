/*
Problem Statement - 
Implement a program in c to swap the values of two variables. 
*/

/*
Algorithm 1 - using temporary variables
1. Start 
2. Read 2 values num1, num2  
3. Display "Before Swap " num1 , num2 
4. temp = num1
5. num1 = num2 
6. num2 = temp
7. Display "After Swap " num1 , num2
8. End 
*/

/*
Algorithm 2 - without using temporary variables
1. Start 
2. Read 2 values num1, num2  
3. Display "Before Swap " num1 , num2 
4. num1 = num1 + num2 
5. num2 = num1 - num2  
6. num1 = num1 - num2 
7. Display "After Swap " num1 , num2
8. End 
*/

// code 
#include <stdio.h>
int main(){

    int num1, num2; 
    printf("\nEnter two integer numbers to swap");
    scanf("%d %d",&num1,&num2);
    printf("\nBefore swap num1 = %d, num2 = %d", num1, num2);

    // // using temporary variables
    // int temp = num1;
    // num1 = num2;
    // num2 = temp; 
    
    
    // without using temporary variables
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    printf("\nBefore swap num1 = %d, num2 = %d", num1, num2);

    return 0;
}

/*
Flowchart link -- 
https://drive.google.com/file/d/1wszhtYMJEadnqM9RFzsmpxGDV_nspt8P/view?usp=sharing
*/