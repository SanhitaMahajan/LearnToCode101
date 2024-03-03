/*
Problem Statement - 
Find out the reverse of a given integer number.
*/

/*
Example 
Enter Number - 123
Reverse Number - 321
*/

/*
Explanation - 
123%10 = 3 , 123-> 123/10 = 12
12%10 = 2    12 -> 12/10 = 1
1%10 = 1     1  -> 1/10 = 0
*/

/*
Algorithm - 
1. Start 
2. Read num 
3. temp=num, rev=0
4. Repeat till temp!=0:
     rev = rev*10 + temp%10
	 temp = temp/10
5. Display rev 
6. Stop 
*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"\nEnter number - ";
    cin>>num;

    int rev=0, temp=num;

    while(temp!=0){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }

    cout<<"Reverese number - "<<rev<<endl;

    return 0;
}