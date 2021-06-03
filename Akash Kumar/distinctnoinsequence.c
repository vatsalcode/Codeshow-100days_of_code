#include <stdio.h>
#define SIZE 1000
int main()
{
int arr[SIZE];
int i;
int j;
int count=0;
int n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
/* O(n^2) solution */
for(i=0;i<n;i++){
int found=0;
/* see if arr[i] occurs previously in the array */
for(j=i-1;j>=0;j--){
if(arr[j] == arr[i]){
found=1;
break;
}
}
if ( found == 0 ){ /* arr[i] is a new element */
count = count + 1;
}
}
printf("%d",count);
return 0;
}
