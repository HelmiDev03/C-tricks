#include<stdio.h>
int main()
{
int n,c,ghada,r,i,k,d,j;
int t [ghada];
printf("atini n \n");
scanf("%d",&n);
c=n;
d=n;
/* nombre de chiffre*/
ghada=1;

while(c>=10) {
c=c/10;
ghada++;
}
printf("nombre de chiffre de%d ahawka taht 3inik\n ",n);
printf("%d\n",ghada);
/*rempliisage du tableau par le nomnre n */

for(i=1;i<=ghada;i++){
t [i]=d%10;
d=d/10;
}
printf("elements of array are\n");
for(i=0;i<=ghada;i++){ 
printf("%d\n",t [i]);
}
/*ecrasage mta3 n importe quelle deuxieme occurance*/
for(i=1;i<=ghada;i++){
for(j=i+1;j<=ghada;j++){
if(t [j] ==t [i]) {
for(k=j;k<=ghada-1;k++){
t [k]=t [k+1]    ;
ghada--;
}
}
}
}
printf("le nombre de chiffre de %d sans repetition est %d\n",n,ghada);
printf("haja t5osni nsami ghada walla li nheb hedhika oumouri");
return 0;
}

