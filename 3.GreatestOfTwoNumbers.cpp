/*
Problem statement - Given two integers as input, the objective is to compare two numbers and 
check which one is greater,  or if the two numbers are equal, and write a code to print the greatest of the two numbers in C++.
*/

/* Method 1 - using if else statement
Algorithm - 
1. Start 
2. Read num1 , num2 
3. if num1 == num2 : 
      both are equal 
   else if  num1 > num2 : 
      num1 is greater 
   else : 
      num2 is greater    
4. Stop        
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
    cout<<"\nEnter two integer numbers - ";
    cin>>num1>>num2;
 
    // //  using if else statement 
    // if (num1 == num2){
    //     cout << "both are equal"; 
    // }   
    // else if (num1 > num2){
    //     cout << num1 << " is greater than " << num2;
    // }
    // else{
    //      cout << num2 << " is greater than " << num1;
    // }


    //  using nested if else statement 
    if (num1 == num2){
        cout << "\nBoth are equal"; 
    } 
    else{
        if (num1 > num2){
            cout << num1 << " is greater than " << num2;
        }
        else{
         cout << num2 << " is greater than " << num1;
        }
    }  

//    // using ternary operator
//    if(num1 == num2){
//      cout << "Both are Equal\n"; 
//    }
//    else { largest = num1 > num2? num1 : num2;
//         cout << largest << " is largest";
//     }


    // //  uising built-in max function 
    // if (num1 == num2)
    //     cout << "both are equal";
    // else
    //     cout << max(num1,num2) << " is greater";



    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)

/*
Flowchart link - 
https://drive.google.com/file/d/16f_qIpNIcX6chc0dr-6lt2YqzE1sgkck/view?usp=sharing
*/