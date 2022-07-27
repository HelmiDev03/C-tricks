#include<stdio.h>
int main() {
    int n,k,i,j;
    int t [n];
 printf("donner la taille du tableau \n");
 scanf("%d",&n);
 printf("enter elemnt of array \n");
 printf("\n");
 for(i=1;i<=n;i++) {
     printf("element number %d:",i);
     scanf("%d",& t[i]) ;
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
for(i=1;i<=n;i++) {
    printf("%d|",t [i]);
                 }


 
return 0;
}
    


