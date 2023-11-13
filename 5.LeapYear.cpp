/* Problem Statement - Program to Check Whether a Year is a Leap Year or Not in C++
*/

/*
Method 1: Using if-else Statements 1 
Algorithm - For user input year check
Step 1 : If year % 400 == 0, Print Leap Year
Step 2 : Else If year % 4 == 0 && year % 100 != 0, Print Leap Year
Step 3 : Else, year will be not leap
*/

/* Method 2: Using if-else Statements 2
Step 1 : If (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)), Print Leap Year
Step 2 : Else, year will be not leap
*/

/* Method 3 : using ternary operator
1. Using ternary operator check if the year is divisible by 400. Print it’s a leap year.
2. Using Ternary operator check if the year is divisible by 4 but not with 100. Print it’s a leap year.
3. Else print it’s not a leap year.
*/


#include<iostream>
using namespace std;

int main()
{
    int year;
    year=2024;

    //  Method 1 
    // if(year % 400 == 0)
    //     cout << year << " is a Leap Year";  
    // else if(year % 4 == 0  && year % 100 != 0)
    //     cout << year << " is a Leap Year";
    // else
    //     cout << year << " is not a Leap Year";


    //  Method 2
    // if(year % 400 == 0 || (year % 4 == 0  && year % 100 != 0))
    //     cout << year << " is a Leap Year";
    // //not leap year
    // else
    //     cout << year << " is not a Leap Year";


    // Method 3 
    // int flag = (year%400 == 0) || (year%4==0 && year%100!=0 ) ? 1 : 0;
    // if (flag ==1)
    // {
    //     printf("%d is a Leap Year",year);
    // }
    // else
    // {
    //     printf("%d is not a Leap Year",year);
    // }


    //  Method 4 - nested if-else statements
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a Leap Year";
            }
            else {
                cout << year << " is not a Leap Year";
            }
        }
        else {
            cout << year << " is a Leap Year";
        }
    }
    else {
        cout << year << " is not a Leap Year";
    }
    
    return 0;
}