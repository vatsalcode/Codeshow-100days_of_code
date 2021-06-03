 #include <stdio.h>
 int main()
{
int curr=0; /* current value being read */
int prev; /* previous value read */
int num_distinct=0; /* number of distinct values read */
prev = curr;
scanf ( "%d",&curr );
num_distinct = 2;
while ( curr != -1 ) {
prev = curr;
scanf ( "%d", &curr );
if ( prev != curr && curr != -1){
num_distinct = num_distinct + 1;
}
}
   if(num_distinct>3)
     printf("1");
   else 
printf("0");

}
