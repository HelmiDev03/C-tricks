#include<stdio.h>
int main() {
    int n,k,i,j;
    int t [n];
 printf("donner la taille du tableau \n");
 scanf("%d",&n);
 printf("enter elemnt of array \n");
 printf("\n");
 for(k=1;k<=n;k++) {
     printf("element number %d:",k);
     scanf("%d",& t[k]) ;
     printf("\n");
                } 
  for (i=1;i<=(n-1);i++){
   for(j=(i+1);j<=n;j++){
       if (t[j] < t[i]) {
           t[j] = t[i] + t[j] ;
            t[i] = t[j] - t[i];
            t[j] = t[j] - t[i] ;
                         }
                        }
                      }
                  
printf( "voici t apres tri croissant \n" );
for(k=1;k<=n;k++) {
    printf("%d|",t [k]);
                 }

 
return 0;
}
    



