#include <stdio.h>
int main()
{
  int a,b,c;
scanf("%d %d %d", &a,&b, &c);
  if(((a>b) && (b>c))||((c>b) && (b>a)))
{
printf("1");
}
else
{
printf("0");
  }
}
