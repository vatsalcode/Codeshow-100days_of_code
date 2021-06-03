#include <stdio.h>
#include<string.h>
int Number(char *str, char *Substring, int n, int k)
{
    int res=0;
    for(int i=0;i<=n-k;i++)
    {
        int j;
        for(j=0;j<k;j++)
        if(str[i+j]!=Substring[j])
        break;
        if(j==k)
        {
            res++;
            j=0;
        }
    }
    return res;
}
int main()
{
    char str[100];
    int count1=0;
    int count=0;
    int m, n,k,i,j;
    printf("Enter a String: ");
    gets(str);
    n=strlen(str);
    printf("Enter no of Substring: ");
    scanf("%d",&k);
    char Substring[k][100];
    int a[k];
    for(j=0;j<k;j++)
    { 
      printf("Enter subscript no. %d  ", j+1);
      scanf("%s",Substring[j]);
      a[j]=strlen(Substring[j]);

      printf("%d\n", Number(str, Substring[j],n,a[j]));
    }
    return 0;
}
