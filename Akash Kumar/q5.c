#include <stdio.h>        // stdio.h library is included 
int main()                
{                          //program started
    float a,b;     //declare variable a, b
    float sum, subtract, mutliplication, division;  // decare variable sum, subtract, mutliplication, division
    printf("Enter a:  "); 
    scanf("%f",&a);        //value of a is obtained and stored in its memory
    printf("Enter b:  ");
    scanf("%f",&b);        //value of b is obtained and stored in its memory
    sum=a+b;               // sum is assigned the value a+b
    subtract=a-b;          // subtract is assigned the value a-b
    mutliplication=a*b;    // multiplication is assigned the value a*b
    division=a/b;          // division is assigned the value a/b
    printf("Sum is %f \nSubract is %f  \nMultiplication is %f \nDivision is %f  \n",sum,subtract,mutliplication,division);
    return 0;
}                      // program ended
