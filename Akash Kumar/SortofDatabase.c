/*  Create a database of students using structures, where in each entry of the database will have the following fields:
a name, which is a string with at most 128 characters
their marks in physics which is an int between 0 and 100
their marks in chemistry which is an int number between 0 and 100
their marks in mathematics which is an int number between 0 and 100
You have to output a list of students in the following order.
if a student 'A' has lower marks in physics than a student 'B', then A's data is listed before B.
If A and B have the same physics marks and A has lower chemistry marks than B, then A is listed before B.
If A and B have the same marks in physics and chemistry, and A has lower marks in mathematics than B, then A is listed before B.
If all marks are equal and A's name precedes B's name in the dictionary order, then A is listed before B.
.

Input Format :
First line contains the number of students n, where 1<=n<=100.
In following n lines each line contains(space separated)  a name and their respective marks in physics, chemistry, maths, where 0<=marks<=100.

Output Format :
Sorted database of n lines  
*/

#include<stdio.h>
#include<stdlib.h>
struct student{
char name[20];
int phy,che,math;
};
typedef struct student student;
void print(student *s,int n){
int i;
for(i=0;i<n;i++){
printf("%s-",s[i].name);
printf("%d-",s[i].phy);
printf("%d-",s[i].che);
printf("%d\n",s[i].math);
}
}
int comparator(const void *p, const void *q)
{
float l = ((student *)p)->phy;
float r = ((student *)q)->phy;
if((l-r)!=0) return (l-r);
else{
l = ((student *)p)->che;
r = ((student *)q)->che;
if((l-r)!=0) return(l-r);
else{
l = ((student *)p)->math;
r = ((student *)q)->math;
return (l-r);
} }
}
int main(){
int i,n;
scanf("%d",&n);
student *student_info= (student *)malloc(sizeof(student)*n);
for(i=0;i<n;i++){
  scanf("%s",student_info[i].name);
scanf("%d",&student_info[i].phy);
scanf("%d",&student_info[i].che);
scanf("%d",&student_info[i].math);
}
qsort((void *)student_info,n,sizeof(student),comparator);
print(student_info,n);
return 0;
}
