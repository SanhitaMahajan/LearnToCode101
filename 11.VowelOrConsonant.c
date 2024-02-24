/*
Problem Statement - 
Create a program that takes a single character as input and determines if 
*/

/*
Algorithm - 
1. Start 
2. Read ch from user 
3. if ( ( ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z) )
     if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
      ch=='A' || ch=='E' || ch=='E' || ch=='O' || ch=='U' ) 
        Display "ch is Vowel"
     else 
       Display "ch is consonant"   
    else 
      Display "ch is invalid"     
*/

#include <stdio.h>
int main(){
    
    char ch;
    printf("\nEnter a character - ");
    scanf("%c",&ch);

    if(( ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
      ch=='A' || ch=='E' || ch=='E' || ch=='O' || ch=='U' ){
        printf("\n%c is vowel", ch);
      }
      else {
         printf("\n%c is consonant", ch);
      }
    }
    else {
         printf("\n%c is not a alphabet", ch);
    }

    return 0;
}