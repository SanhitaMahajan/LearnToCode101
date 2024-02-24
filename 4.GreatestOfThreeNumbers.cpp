/*
Problem statement -Program to find the Greatest of Three Numbers 
*/

/* Method 1 - using if else statement
Algorithm - For user inputs of numbers as first, second and third.
Step 1: Check if first number is greater than second and third, Print first is the greatest
Step 2: Check if second number is greater than first and third, Print second is the greatest
Step 3: Third number has to be greatest, Print third is the greatest
*/

/*
Algorithm 1 - 
1. Start 
2. Declare variables first, second, third 
3. Read values of first, second, third
4. if first > second 
      
      
*/

/* Method 2 - using ternary operator
Algorithm - 
Step 1: Store the largest between first and second using ternary operator in variable temp
        temp = first > second ? first:second;
Step 2: Store the largest between temp and third using ternary operator in variable result
        result = temp > third ? temp:third;
Step 3: Print value of result
*/

/* Method 3 - using inbulid max function 

*/

#include <iostream>
using namespace std;

int main ()
{
    int first, second, third, result, temp;
    cout<<"Enter three integer numbers - ";
    cin>>first>>second>>third;
    
    // //  using if else statement 
    //comparing first with other numbers
    if ((first >= second) && (first >= third))
        cout << first << " is the greatest "; 
    //comparing Second with other numbers 
    else if ((second >= first) && (second >= third))
        cout << second << " is the greatest";
    else
        cout << third << " is the greatest";


    // // using ternary operator
    // // find the largest bw first and second and store in temp
    // temp = first > second ? first:second;
    
    // // find the largest bw temp and third and finally printing it
    // result = temp > third ? temp:third;
        
    // // the above two ternary statements can be condensed into one ternary statement
    // //result = third > (first > second ? first : second) ? third : ((first > second) ? first : second);
    
    // cout << result << " is the largest";


    // //  using built-in max function 
    // result =  max(first,max(second, third));
    // cout << result << " is the largest";

    // return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)