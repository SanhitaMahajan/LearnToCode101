/*
Problem Statement - 
Write a program to check whether a given number is palindrome or not.
Hint : Palindrome number is such number which when reversed is equal to the original number. 
       For example: 121, 12321, 1001 etc
*/

/*
Algorithm - 
1. Start 
2. Read num 
3. temp = num
4. rev = reverse(temp)
5. if rev == num : 
        print num is palindrome number 
    else :
        print num is not palindrome number  
6. Stop            
*/

/*
Algorithm - Reverse number 
1. Start 
2. temp = n , rev = 0
3. Repeat till temp!=0:
     rev = rev*10 + temp%10
	 temp = temp/10
4. Return rev 
5. Stop 
*/

#include<iostream>
using namespace std;

int reverseNumber(int n){
    int temp = n, rev=0;
    while(temp!=0){
        rev = rev*10+temp%10;
        temp = temp/10;
    }
    return rev;
}

int main(){

    int num;
    cout<<"Enter number - "<<endl;
    cin>>num;

    int rev = reverseNumber(num);

    if(rev==num){
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }

    return 0;
}

/*
Practice Link -
https://www.geeksforgeeks.org/problems/palindrome0746/1
*/

/*
More question on palindrome - 

1. Check if the binary representation of a number is palindrome or not.
https://www.geeksforgeeks.org/problems/palindrome-numbers0942/1

2. Palindrome String - 
https://www.geeksforgeeks.org/problems/palindrome-string0817/1

3. Sum of Digit is Pallindrome or not - 
https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1

4. Sum Palindrome - 
https://www.geeksforgeeks.org/problems/sum-palindrome3857/1

5. Closest Palindrome -
https://www.geeksforgeeks.org/problems/closest-palindrome4519/1

*/