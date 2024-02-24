/*
Problem Statement - Find out max of 5 numbers given by user.
*/
/*
Algorithm - 
1. Start 
2. Read a,b,c,d,e
3. max = a
4. if max < b : 
      max = b
5. if max < c : 
      max = c
6. if max < d : 
      max = d 
7. if max < e : 
      max = e
8. Display max 
9. Stop                  
*/

#include <stdio.h>

int main(){

      int a,b,c,d,e;
      printf("\nEnter 5 integer numbers - ");
      scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

      int max = a;
      if(max<b){
            max = b;
      }
      if(max<c){
            max = c;
      }
      if(max < d){
            max = d;
      }
      if(max < e){
            max = e;
      }

      printf("\nMaximum among %d %d %d %d %d is %d", a,b,c,d,e,max);

      return 0;
}

/*
Flowchart Link - 
https://drive.google.com/file/d/1Ogp6J0LhDDNzHQUz2MJyJWVRNCyzqUWD/view?usp=sharing
*/