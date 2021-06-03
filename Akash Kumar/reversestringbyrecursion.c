/*  Write a recursive program to print the reverse of the string ending with 0.
Input : String ending with 0
Output : Reverse of the string without 0.

Example : I/P : abcd0
                O/P: dcba 
                */

#include<stdio.h>
void revstr() {
int ch = getchar();
if (ch == '0') return;
revstr();
putchar(ch);
}
int main() {
revstr();
return 0;
}
