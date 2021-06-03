#include<stdio.h>
int vae(int a);
int main(){
    int i;
    printf("the value of address is %u\n", &i);
    vae(i);
    printf("the value of address is %u\n", &i);
    return 0;
}
int vae(int a) {
printf("the address of a is %u\n", &a);

}
