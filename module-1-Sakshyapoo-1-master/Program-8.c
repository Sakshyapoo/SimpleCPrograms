//INPUT:12
//OUTPUT: y = 13  y = 13  y = 13  y = 13
#include<stdio.h>
int main()
{
    int x, y;
    //Enter the value of x
    scanf("%d",&x);                          //correct the code : read the value for x
    printf("y = %d  ",y=++x);
    printf("y = %d  ",y=x++); //correct the code 
    printf("y = %d  ",y=--x);
    printf("y = %d  ",y=x--);
    return 0;
}