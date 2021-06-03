/*  We say that a string 's' is an anagram of another string 't' if the
letters in 's' can be rearranged to form 't'.

For example, "butterfly" is an anagram of "flutterby", since a
rearrangement of the first word results in the second.

We say that a position 'i' in 's' and 't' match, if 's' is an anagram of
't', and s[i]==t[i].

In this question, you will be given two words, 's' and 't'. You have
to output the number of matching positions if s is an anagram of t,
and -1 if s is not an anagram of t.

Input
-----
The input consists of two lines. The first line contains the first
string, with length <= 100 characters. The second line contains the
second string, with length <= 100 characters.

Output
------
If the first string is an anagram of the second string, then output
the number of matching positions. Otherwise, print -1.

Sample Input 1
--------------
butterfly
flutterby

Sample Output 1
---------------
2  

*/

#include <stdio.h>
#include<string.h>
int freq(char s[], char c)
{
int i;
int count=0;
for(i=0; s[i] != '\0'; i++){
if(s[i] == c){
count++;
}
}
return count;
}
int main()
{
char s[100];
char t[100];
int i,x;
int counter=0;
scanf("%s",s);
scanf("%s",t);
for(i=0;i<26;i++){
if(freq(s,'a'+i) != freq(t,'a'+i)){
printf("-1");
return 0;
}
}
x= strlen(s);
for(i=0;i<x;i++)
{
if(s[i]==t[i])
counter++;
}
printf("%d",counter);
return 0;
}
