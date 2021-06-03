/*  In a string, a "run" is a substring with consisting of consecutive
occurrences of the same character. For example, the string
"mississippi" contains the following runs - "ss", "ss" and "pp".

In this question, given a string, you have to output the length of the
longest run in the string.

Input
-----
A string, having length at most 100. The string is guaranteed to have
at least one run.

Output
------
The length of the longest run in the string.

Sample Input
------------
abbaaacccc

Sample Output
-------------
4 
*/

#include <stdio.h>
/* Find maximum run length in a string */
int max_run_length(char s[])
{
int maxlen=0;
int curr_run=0;
char curr_char;
int i=0;
for(i=0; s[i]!='\0'; i++){
/* Calculate the length of the current run */
curr_char = s[i];
curr_run = 0;
while(s[i] == curr_char && s[i] != '\0'){
i++;
curr_run++;
}
i--;
/* If the current run is longer than maxrun, reset */
if(curr_run > maxlen){
maxlen = curr_run;
}
}
return maxlen;
}
int main()
{
char s[100];
int result;
scanf("%s",s);
result = max_run_length(s);
printf("%d", result);
return 0;
}
