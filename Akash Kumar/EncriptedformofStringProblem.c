/* You are given a string (of at most 100 characters) consisting of
lowercase characters, terminated with a # symbol. The string is the
"encrypted" form of an original string as follows - each character in
the original string has been shifted by a fixed integer n (where 1<= n
<= 25).

Assuming that a is the 0th character in the alphabet, ..., and z is
the 25th character of the alphabet, in the encrypted version, we have: 

a becomes the nth character in the alphabet
b becomes the (n+1)%26th character in the alphabet,
...

and so on.

n is not known to you. You only know that the first character
represents 't'. From this information, you have to output the
original string.  
*/  
#include <stdio.h>

int main()
{
	int i,c,d;

	d = getchar()-'t';
	putchar('t');
	
	for(i=1;i<100;i++){
		c=getchar();
		if(c == '#'){
			break;
		}
		putchar('a'+((c-'a'-d)%26));
	}

	return 0;
}
