#include <stdio.h>
 
int main (){
 
  int n, i, j, is_uppr=1, is_lowr=1, a;
 
  
  scanf("%d",&n);
  for( i=0; i<n; i++){
    for( j=0; j<n; j++){
      scanf("%d",&a);
      if( j>i && a!=0)//Check for upper triangular condition
    is_uppr = 0;
      if( j<i && a!=0)//Check for lower triangular condition
    is_lowr = 0;
    }
  }
if(is_uppr==1 && is_lowr!=1)
  printf("-1");
  else if(is_lowr==1 && is_uppr!=1)
    printf("1");
 else if( is_uppr==1 && is_lowr==1)
    printf("2");
  else if(!(is_uppr==1 && is_lowr==1))
    printf("0");
 
 
}
