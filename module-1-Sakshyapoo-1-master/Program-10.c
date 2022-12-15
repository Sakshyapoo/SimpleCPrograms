//INPUT: 12
//OUTPUT: 3.46
#include <stdio.h>
#include <math.h> //correct the code : include header file
int main()
{
 float num, root;
 //read a number
 scanf("%f", &num);
 // Computes the square root of num and stores in root.
 root = sqrt(num);
 //print the square root
 printf("Square root of %.2f = %.2f",num,root ); // Correct the code
 return 0 ;
}