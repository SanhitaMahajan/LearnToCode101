/*
Problem Statement -  Find out the grade of a student if score is given.
Score range : 0 to 100
Grades are decided based on below logic : 
90 to 100 : A
80 to 89  : B
70 to 79  : C
50 to 69  : D
Below 50  : E
*/

/*
Algorithm-1:
1. Start 
2. Read score 
3. If score <0 or score > 100 
      Then Invalid score
	  Got to step 5
4.
	if score >=90 and score <=100 then display "A"
	else if score >=80 and score <=89 then display "B"
	else if score >=70 and score <=79 then display "C"
	else if score >=50 and score <=69 then display "D"
	else display "E"
5. Stop 
*/

/*
Algorithm-2:
1. Start 
2. Read score 
3. If score < 0 or score > 100 
      Display Error Message
	  Got to step 6 
4. t = score/10 
5. Switch case on value of "t"
   Case 9: 
   Case 10: Display A ,break 
   Case 8 : Display B , break 
   Case 7 : Display C, break 
   Case 6 : 
   Case 5 : Display D, break
   default : Display E 
6. Stop    
*/

#include <stdio.h>

int main(){

    int score=0;
    printf("\nEnter your score - ");
    scanf("%d",&score);

    if(score < 0 || score > 100){
        printf("Invalid score");
    }

    int temp = score/10;

    switch(temp){
        case 9 :
        case 10 : 
           printf("\nCongratulations!, Your grade is A.");
           break;
        case 8 : 
           printf("\nCongratulations!, Your grade is B.");
           break;
        case 7 : 
           printf("\nCongratulations!, Your grade is C.");
           break;
        case 6 :
        case 5 :
           printf("\n Your grade is D. You need to study hard");
           break;
        default :
           printf("\n Your grade is E. You need to study hard");         
    }

    return 0;
}

/*
Flowchart Link - 
https://drive.google.com/file/d/1n8qWuBzzSwZQ0AzSX9tcJ3hRb3wxAeSF/view?usp=sharing
*/