#include<stdio.h>
#include<stdlib.h>
int mai()
{
int n,c,p,r,copie;
do{
printf("atini n\n");
scanf("%d",&n);
}
while ((n=<0) || (n>=99)) ;
printf("la liste vers 9 est\n ");
 do{
 c=n;
 printf("%d\n",c) ;
 p=(c%10)*10+c/10;
 printf("%d\n",p);
 r=abs(p-n);
 r=copie;
 printf("%d\n",copie);
 n=r;
 }
 while (copie!=9);
 return 0;
}    