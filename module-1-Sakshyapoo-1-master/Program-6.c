//INPUT: 10 2
//OUTPUT: 20
#include <stdio.h>
int main()
{
int a,b,result;
//Enter 2 numbers for Arithmetic evaluation operation
scanf("%d%d",&a,&b); // correct the code
result = a+b*a/b-a%b; // correct the code
printf("Arithmetic expression evaluation of 10 and 2 is = %d",result); // correct the code
return 0;
}