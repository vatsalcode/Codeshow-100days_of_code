/*Write a C program to list all the factorial numbers less than or equal
to an input number n.

A number N is called a factorial number if it is the factorial of a
positive integer. For example, the first few factorial numbers are

   1, 2, 6, 24, 120, ...

*Note* - We do not list the factorial of 0.

Input
-----
A positive integer, say n.

Output
------
All factorial numbers less than or equal to n. */
#include <stdio.h>
 int main()
 {
int n;
int i=1;
long factorial=1;
scanf("%d",&n);
while(factorial <= n){
printf("%ld ", factorial);
i++;
factorial *= i;
}
printf("\n");
return 0;
 }
