#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main () {
    int a,b,c,k ;
    float dis,new;
do {
printf("donner le coefficient du monome de degre 2 \n") ;
scanf("%D",&a) ;
printf("donner le coefficient du monome de degre 1 \n") ;
scanf("%D",&b) ;
printf("donner la constante \n") ;
scanf("%D",&c) ;
dis= b^2 -4*a*c;
   if (dis > 0) {
   printf("suite a vos donnes, il existe deux solution x1 et x2 \n");
   printf("x1=%d \n" ,  ( (-b+sqrt(dis)) / 2*a)    );
   printf("x2=%d \n" ,  ( (-b-sqrt(dis)) / 2*a)    );
   if (a=2*b) {
       k=300;
              }
   }
  if (dis =0) {
   printf("suite a vos donnes, il existe une racine double x3 \n");
   printf("x3=%d \n" ,  ( (-b / 2*a)    ) );
   if (a=2*b) {
       k=300;
              }
            }
 if (dis < 0) {
   printf("suite a vos donnes, il existe deux solution x4 et x5 mais de type complexe \n");
   new=sqrt(abs(dis));
    printf("x4=%d \n" ,  ( (-b+ new / 2*a)    ) );
   printf("x5=%d \n" ,  ( (-b-new / 2*a)    ) );
   
   if (a=2*b) {
       k=300;
              }
 

          }
}
  while(k!=300) ;    
printf("au revoir") ;
      return 0;
}