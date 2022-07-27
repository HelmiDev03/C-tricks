#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a avant permutaion est egale a %d \n",a);
    printf("b vant permutaion est egale a %d \n",b);
    /* l idee c est ne pas utiliser une variable auxiliare*/
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a apres permutaion est egale a %d \n",a);
    printf(" b apres permutaion est egale a %d \n",b);
    return 0;
}