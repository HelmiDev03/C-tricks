#include<stdio.h>
int main ()
{
int n,snbn,S1,i,q1,q2,q3,copie1,copie2,copie3,snbn1,S2,q4,j,copie4; 
do {
    printf("donner n\n");
    scanf("%d",&n);
    }
    while (n<=0); 
   snbn=1;
   copie1=n;;
  copie2=copie1; ;  
   while (copie1>= 10) {
     q1=copie1%10;
     copie1=copie1/10;
    snbn++;
    }
    S1=0;
    for(i=1;i<=snbn;i++) {
    q2=copie2 % 10;
    copie2=copie2/10;
    if(q2!=0) {
    
    S1=S1+q2; }
    else  {
    S1=S1+copie2;
    }
    }
printf("%d howa somme de chiffre ta %d \n",S1,n);
copie3=S1;
snbn1=1;
while (copie3>= 10) {
  q3=copie3%10;
  copie3=copie3/10;
 snbn1++;
 }
 copie4=S1;
 S2=0;
while((copie4<1)  || (copie4>9)) {
 for(j=1;j<=snbn1;j++) {
 q4=copie4 % 10;
 copie4=copie4/10;
 if(q4!=0) {
 S2=S2+q4; }
 else  {
 S2=S2+copie4;
 }
 }
 printf("%d howa somme de chiffre ta %d \n",S2,S1);
 copie4=8;
}
 
return 0;
}






























































