/*
Problem Statement - 
Find out sum of all digits of a given integer number.
*/

/*
Example 1 - 
Enter a number : 1234
Result : 4+3+2+1 = 10

Example 2 - 
Enter a number : 0 
Result : 0

Example 3 - 
Enter a number : 9845 
Result : 5+4+8+9 = 26
*/

/*
Explanation - 
1234%10 -> 4 ( last digit ) ,  1234-> 11234/10 = 123 ( remaining digits )
123%10 -> 3 , 123->123/10 = 12
12%10 -> 2, 12 -> 12/10 = 1
1%10 -> 1, 1 -> 1/10 = 0
*/

/*
Algorithm :
1. Start
2. Read num 
3. temp = num , count =0
4. repeat till temp !=0 :
        sum += temp%10
        temp = temp/10
5. Display sum 
6. Stop        
*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"\nEnter number - ";
    cin>>num;

    int temp = num, sum = 0;

    while(temp!=0){
        // last digit 
        sum = sum + temp%10;
        temp = temp/10;
    }

    cout<<"\nThe sum of all digits of number is "<<sum<<endl;

    return 0;
}