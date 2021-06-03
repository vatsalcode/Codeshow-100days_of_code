#include <stdio.h>
#if A== 1
    #define B 0
#else
    #define B 1
#endif
int main()
{
   printf("%d", B);
   return 0;
}
