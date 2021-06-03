#include<stdio.h>

int main()
{
 int a,b,d;
 int c =0;
 scanf("%d %d",&a,&b);

 if(a>b)
  {
      c=b;
      
  }
 if(b>a)
  {
      c=a;
      a=b;
      b=c;
  }

 for(;;)
  {
      scanf("%d",&b);
      if(b==-1)
       {
           printf("%d",c);
           break;
       }
      
      if(b>a)
       { 
         c=a;
         a=b;
       }
      if(b>c && b<a)
       {
           c =b;
       }
      
  }


return 0;
}
