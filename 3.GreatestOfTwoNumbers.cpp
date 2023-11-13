/*
Problem statement - Given two integers as input, the objective is to check both numbers for the greatest 
and write a code to find the greatest of the two numbers in C++.
*/

/* Method 1 - using if else statement
Algorithm - For two user inputs num1 and num2.
Step 1: Check if both numbers are equal If true then print “Both are equal”
Step 2: Else if num1 > num2 If true then print num1 greater than num2
Step 3: Else num2 has to be thee greatest Print num2 is greater than num1
*/

/* Method 2 - using ternary operator
Algorithm - 
Step 1: Check if both numbers are equal If true then print “Both are equal”
Step 2: Use ternary operator as largest = num1 > num2? num1 : num2;
Step 3: Print the value of variable largest
*/

/* Method 3 - using inbulid max function 
Use inbuilt function max as max(num1, num2)
*/

#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, largest;
    num1=75,num2=85;
 
    // //  using if else statement 
    // if (num1 == num2)
    //     cout << "both are equal"; else if (num1 > num2)
    //     cout << num1 << " is greater than " << num2;
    // else
    //     cout << num2 << " is greater than " << num1;


//    // using ternary operator
//    if(num1 == num2){
//      cout << "Both are Equal\n"; 
//    }
//    else { largest = num1 > num2? num1 : num2;
//         cout << largest << " is largest";
//     }


    //  uising built-in max function 
    if (num1 == num2)
        cout << "both are equal";
    else
        cout << max(num1,num2) << " is greater";



    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)