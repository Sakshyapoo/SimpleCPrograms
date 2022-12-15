//INPUT: 95 90.99 A
//OUTPUT: 90.000000 65
#include<stdio.h>
int main()
 { // correct the code
 int i;
 float x;
 char ch;
 scanf("%d%f %c",&i,&x,&ch); // correct the code
 i = x ; // correct the code
 x = i ;
 i = ch ;
 printf("i value is: 90 x value is: %f i value is: %d", x, i);
 return 0;
 } // correct the code