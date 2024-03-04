/*
Problem Statement - Check Whether the Number is a Prime or Not in C++

Method 1: Simple iterative solution
Any prime number would not be divisible by more than 2 numbers (1 and itself). 
We run a loop between [1, n] and check if number of divisors of n are greater than 2 or not.

Method 2: Optimization by break condition
Any prime number n would not be divisible in the range [2, n-1]
1, 0 and negative numbers are not prime

Method 3: Optimization by n/2 iterations
Any Prime number doesn’t have any divisors in range [n/2+1, n-1]
Example – 33 won’t have any divisors in range [19, 32]

Method 4: Optimization by √n
We can check for prime numbers by running iterative loop only b/w [2, sqrt(n)]

Method 5: Optimization by skipping even iteration
2 is the only even prime number
We can skip all even iterations if we check for divisibility with 2 earlier than iterative loop

Method 6: Basic Recursion technique
*/

#include<iostream>
#include<math.h>
using namespace std;


//  Method 5 - 
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
    //Time complexity : O(√N)
    //Space complexity : O(1)
    //This code is better than previous code
    //We skipping all even iterations b/w [3, √num]
}

//  Method 6 - 
bool checkPrime(int n, int i)
{
    // 0, 1 and negative numbers are not prime
    if (n < 2)
        return false;

    // if this satisfies then its prime as we
    // have completed recursion from 2 to n
    if (i == n)
        return true;

    // Base cases
    if (n % i == 0)
        return false;

    i += 1;
    return checkPrime(n, i);
}

int main(){

/*
    //  Method 1 - 
    int a = 0, count = 0;
    int n = 29;
    
    // checking the number of divisors b/w 1 and the number n
    for(int i=1;i < n+1; i++){ 
        if(n % i == 0) count += 1; 
    } 
    //if the number of divisors are > 2 then its not prime else its prime 
    // 0 and 1 are not prime numbers 
     if (n == 0 || n == 1) {
        cout << "The given is number " << n <<" is not prime";
    } 
    else if(count > 2){ 
        cout<<"The given number " << n <<" is not prime";
    } 
    else {
        cout<<"The given number " << n <<" is prime";
    }
    // Time Complexity : O(N) 
    // Space Complexity : O(1)
*/
/*
    //  Method 2 - 
    int i, n=13;
    bool isPrime = true;

    if(n<2){
        isPrime = false;
    }else{
        for(i=2;i<n;i++){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }
    }
    string result = isPrime ? "Prime" : "Not Prime";
    cout<<"The number "<<n<<" is : "<< result;
    // Time Complexity : O(N)
    // Space Complexity : O(1)
    // This program is better than previous version as :
    // Condition for 0, 1 and negative numbers checked earlier
    // Loops runs b/w [2, n-1] rather than [1, n]
    */


/*
    // Method 3 - 
    int i,n=33;
    bool isPrime = true;
    //  0 and 1 are not prime numbers, also negative numbers are not prime numbers
    if(n<2){
        isPrime = false;
    }
    else{
        //  running loop till n is wastefull because for any number n 
        //  the number is the range (n/2+1, n) wont be divisible anyways 
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }
    }
    string result = isPrime ? "Prime" : "Not Prime";
    cout<<"The number "<<n<<" is : "<< result;
    // Time Complexity : O(N)
    // Space Complexity : O(1)
    // This program is better than previous version as :
    // Loops runs b/w [2, n/2] rather than [2, n-1]
    */

/*
    // Method 4 - 
    int i,n = 29;
    bool isprime= true;
    
    // 0 and 1 are not prime numbers also, negative numbers are not prime
    if(n < 2)
    {
        isprime = false;
    }
    else
    {
    // If a number n is not a prime, it can be factored into two factors a and b:
    // n = a * b

    // Now a and b can't be both greater than the square root of n, 
    // since then the product a * b would be greater than sqrt(n) * sqrt(n) = n.
    // So in any factorization of n, at least one of the factors must be smaller 
    // than the square root of n, and if we can't find any factors less than or equal to 
    // the square root, n must be a prime.
        for(i=2; i < sqrt(n); i++)
        {
            if(n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    string result = isprime ? "Prime":"not Prime";
    cout<<"The number " << n << " is : " << result;
    // Time Complexity : O(√N)
    // Space Complexity : O(1)
    // This program is better than previous version as :
    // Loops runs b/w [2, √n] rather than [2, n/2]
    */
   
    /*
    //  Method 5 - 
    int n = 29;
    if (isPrime(n))
        cout << n << " is a Prime Number";
    else
        cout << n << " is not a Prime Number";
    */
    

    //  Method 6 -
    int i = 2;
    bool isprime= true;
    
    int n = 37;
    isprime=checkPrime(n, i);
    
    string result = isprime ? "Prime":"not Prime";
    cout<< n << " is : "<< result; 

    
    return 0;
} 

