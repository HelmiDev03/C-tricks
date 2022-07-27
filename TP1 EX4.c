
#include <stdio.h>
#include <math.h>
int main(){
    /*1 er methode de  variables */
    int a,b,c,d,s,i,k,ss;
    printf("donner a et b et c et d \n");
scanf("%d %d %d %d",&a,&b,&c,&d);
s=a+b+c+d;
printf("la somme de %d et %d et %d et %d est %d \n",a,b,c,d,s);
  /*2 eme methode */
  ss=0;
    printf("dooner 4 valeurs\n");
  for(i=1;i<=4;i++) {
  
    scanf("%d",&k);
    ss+=k;
  }
  printf("la somme de %d et %d et %d et %d est %d \n",a,b,c,d,ss);
    return 0;
}