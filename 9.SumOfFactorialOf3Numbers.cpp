/*
Problem Statement 
Find sum of factorial of 3 numbers given by user. 
*/

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num1,num2,num3;
    cout<<"Enter 3 numbers - ";
    cin>>num1>>num2>>num3;

    cout<<endl;

    int fac1 = factorial(num1);
    int fac2 = factorial(num2);
    int fac3 = factorial(num3);

    int sum = fac1+fac2+fac3;

    cout<<"Sum of factorial of "<<num1<<" "<<num2<<" "<<num3<<" is "<<sum<<endl;

}