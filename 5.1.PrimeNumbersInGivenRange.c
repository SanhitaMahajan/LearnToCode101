/*
Problem Statement - 
Write a program to find all prime numbers between given interval using functions.
*/

#include<stdio.h>
#include <stdbool.h>
#include<math.h>
// Function to check if a number is prime
bool isPrime(int n){
    // 0 and 1 are not prime numbers
    // negative numbers are not prime
    if (n <= 1)
        return false;

    // special case as 2 is the only even number that is prime
    else if (n == 2)
        return true;

    // Check if n is a multiple of 2 thus all these won't be prime
    else if (n % 2 == 0)
        return false;

    // If not, then just check the odds
    for (int i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0)
            return false;
    }
    
    return true;
}

// function to print prime numbers in a given range 
void printPrimesInRange(int start,int end){
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int strart,end;
    printf("Enter the start and end of the interval: ");
    scanf("%d %d",&strart,&end);

    printPrimesInRange(strart,end);
}