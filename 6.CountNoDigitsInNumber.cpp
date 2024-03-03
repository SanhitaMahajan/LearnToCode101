/*
Problem Statement - 
Count number of digits in an integer number.
*/

/*
Example 1 - 
Enter a number : 12345
Digit count : 5

Example 2 - 
Enter a number : 0
Digit count : 1

Example 3 - 
Enter a number : 012
Digit count : 2
*/

/*
Intitution  - 
12345/10 -> 1234
1234/10  -> 123
123/10   -> 12
12/10    -> 1
1/10     -> 0
*/

/*
Algorithm-1:
1. Start 
2. Read num 
3. If num==0: 
    Display "1", Go to Stp-7.
4. count = 0, temp = num 
5. Repeat till temp!=0:
     temp = temp/10
	 count = count+1
6. Display count
7. Stop 


Algorithm-2:
1. Start 
2. Read num 
3. count=0,temp=num
4. 
   4.1 temp = temp/10 
   4.2 count = count+1
   4.3 go to step 4.1 if temp!=0
5. Display count 
6. Stop 
*/
#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number - "<<endl;
    cin>>num;

    int count = 0 , temp = num;
    while(temp!=0){
        temp = temp/10;
        count = count+1;
    }

    cout<<"The number of digits in"<<num <<" is "<<count<<endl;

}