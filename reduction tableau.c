#include <stdio.h>
int main ()
{
int i,j,k,n,n2;
int t [n];
int indices [n2];
do {
printf("donner la taille du tableau t \n");
scanf("%d",&n);
}
while((n<5) || (n>100));
printf("donner la taille du tableau indices\n");
scanf("%d",&n2);
while((n<5) || (n>100)) {
printf("donner la taille du tableau indices\n");
scanf("%d",&n2);
}
for(i=1;i<=n;i++) {
printf("donner lelemtn de tableau t n%d\n",i);
scanf("%d", &t [i] )   ; 
} 
for(j=1;j<=n2;j++) {
printf("donner lemelemnt de indices n%d\n",j) ;
scanf("%d",&indices [j])   ; 
}

for(i=1;i<=n;i++)  {
for(j=1;j<=n2;i++) {
if (indices [j]=i) {
for(k=1;k<=n;k++) {
t [k] =t [k+1] ;
n=n-1;
}
}
else
for(k=1;k<=n;k++) {
t [k]=t [k];
}
}  
}
 
printf("voici les elemnt du tableau redui\n");

for(i=1; i<=n; i++) {
printf("le eme element du tableau reduit est %d \n", t [i])  ;
}
return 0;
}     
