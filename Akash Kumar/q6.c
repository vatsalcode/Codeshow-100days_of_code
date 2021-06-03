#include<stdio.h>
int countSubStr(char str[]) 
{ 
int res = 0; // Initialize result 
  
// Pick a starting point 
for (int i=0; str[i] !='\0'; i++) 
{ 
        if (str[i] == '1') 
        { 
            // Search for all possible ending point 
            for (int j=i+1; str[j] !='\0'; j++) 
            if (str[j] == '1') 
                res++; 
        } 
} 
return res; 
} 
  
// Driver program to test above function 
int main() 
{ 
int n;
int i;
int a[10];
char str[] = "01101"; 
  
printf("Enter no of Test cases:- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter lenght of string no. %d ",i+1);
    scanf("%d",&a[i]);
    printf("Enter binary string: ");
    scanf("%s",str);
    int count = 0;  
      
    //Counts each character except space  
    for(int i = 0; i < strlen(str); i++) {  
        if(str[i] != '0')  
            count++;  
    }
    int res = 0; // Initialize result 
  
// Pick a starting point 
for (int i=0; str[i] !='\0'; i++) 
{ 
        if (str[i] == '1') 
        { 
            // Search for all possible ending point 
            for (int j=i+1; str[j] !='\0'; j++) 
            if (str[j] == '1') 
                res++; 
        } 
} 

printf("%d",res+count);
}

return 0; 
} 
