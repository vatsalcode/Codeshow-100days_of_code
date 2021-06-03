/* Write a program that replaces the occurence of a given character (say c)
in a primary string (say PS) with another string (say s).

Input:
The first line contains the primary string (PS)
The next line contains a character (c)
The next line contains a string (s)

Output:
Print the string PS with every occurence of c replaced by s. */
#include<stdio.h>
 int length(char *s)
 {
int i=0;
while(s[i]!='\0')
{
i++;
}
return i;
 }
 void Replace(char *str, char *sub, int start , int end)
 {
int i=-1;
int len = length(str);
char temp[100];
do
{
i++;
temp[i]=str[i];
} while(i!=len);
int sublen=length(sub);
int j = start;
for(i=0;i<sublen;i++)
{
str[j++]=sub[i];
}
for(i=end+1;i<=len;i++)
{
str[j++]=temp[i];
}
 }
 int charCheck (char * str , char a ,int i )
 {
if(str[i]==a)
return i;
else
return -1;
 }
 int main()
 {
 char str[100] = {0};
 int i =-1,start=0,end=0;
 scanf("%s",str);
 char c1;
 scanf("\n%c",&c1);
 char subs1[15];
 scanf("%s",subs1);
 for(i=0;i<length(str);i++)
 {
int val=charCheck(str,c1,i);
if(val>=0)
{
start=i;
end=val;
Replace(str,subs1,start,end);
i=start+length(subs1);
}
 }
 printf("%s",str);
 return 0;
 }
