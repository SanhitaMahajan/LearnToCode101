/*
Problem Statement - Given an integer input of N, the objective is to find the sum of all the natural numbers until the given input integer.

Example 1 - 
Input: num = 8
Output: 36
Explanation: Where first 8 number is 1, 2, 3, 4, 5, 6, 7, 8
Sum of numbers = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36

*/

/* 
Different Approches - 
Method 1: Using for Loop
Method 2: Using Formula for the Sum of Nth Term
Method 3: Using Recursion
*/

/* Solution */

#include<iostream>
using namespace std;

int getSum(int n)
{
    if(n==0) 
        return n;
        
    return n + getSum(n-1);
}

int main()
{
    int n;
    cout << "Enter a number : "; 
    cin >> n;
    
    int sum=0;
    
    //  Method 1 - using for loop 
    for(int i=1;i<=n;i++) 
        sum+=i;

    cout << sum<<endl;

    //  Method 2 - using formula 
    /*
    Method 2 - time complexity analysis
    This algorithm uses the formula n(n+1)/2 that can be used to find sum of first N natural numbers. 
    This also reduces the time complexity from O(n) to O(1). 
    */
    // cout << n*(n+1)/2<<endl;


    //  Method 3 - using Recursion 
    // int sum = getSum(n);
    // cout << sum<<endl;



    return 0;
}