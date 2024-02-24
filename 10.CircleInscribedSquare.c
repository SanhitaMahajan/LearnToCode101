/*
Problem Statement - 
Given side of a square, find out area of biggest circle which can be drawn inside square.
*/

/*
Algorithm - 
1. Start
2. Read side of the square
3. radius = side/2.0
4. area = 3.14 * radius * radius 
5. Display area
6. Stop
*/

#include <stdio.h>

int main(){

    int side;
    printf("\nEnter the side of square -");
    scanf("%d",&side);
    double radius = side/2.0;
    double area = 3.14 * radius * radius;

    printf("\nArea of circle is %0.2lf",area);

    return 0;
}

/*
Flowchart Link - 
https://drive.google.com/file/d/1PUHZVSIUGvAxCKoqtyLmrOSDRM0g9cmt/view?usp=sharing
*/