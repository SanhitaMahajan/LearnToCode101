/*
Problem Statement - 
Check if the given integer number is even or not. 
*/

/*
Algorithm - 
1. Start 
2. Read num 
3. if num%2==0
      num is even 
    else 
      num is not even 
4. Stop 
*/

#include<stdio.h>

int main(){

  int num;
  printf("\nEnter a number - ");
  scanf("%d",&num);

  if(num%2==0){
    printf("%d is even number\n",num);
  }
  else{
     printf("%d is not even\n",num);
  }

  return 0;
}

/*
Flowchart Link - 
https://drive.google.com/file/d/182GJJylvZsc5Kbz3YrGVNOd-Q5zYP2kh/view?usp=sharing
*/