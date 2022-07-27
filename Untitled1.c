#include<stdio.h>
int main() {
    int n,k,i,j;
    int t [n];
 printf("donner la taille du tableau \n");
 scanf("%d",&n);
 printf("enter elemnt of array \n");
 printf("\n");
 for(k=0;k<=n;k++) {
     printf("element number %d:",k);
     scanf("%d",& t[k]) ;
     printf("\n");
                } 
  for (i=0;i<=(n-1);i++){
   for(j=(i+1);j<=n;j++){
       if (t[j] < t[i]) {
           t[j] = t[i] + t[j] ;
            t[i] = t[j] - t[i];
            t[j] = t[j] - t[i] ;
                         }
                        }
                      }
                  
printf( "voici t apres tri \n" );
for(k=0;k<=n;k++) {
    printf("%d|",t [k]);
                 }
                 printf("\n") ;
printf("apres cette tri les occurances ont donné une mauvaise vue \n");
 for(i=0;i<=n;i++) {
 	for(j=(i+1);j<=n;j++){
 		if(t[i]=t[j]) {
 			for(k=i;k<=(n-1);k++){
 				t[k]=t[k+1];
 				n--;
			 }
		 }
	 }
 }
 printf( "voici t apres supression des occurances \n" );
for(k=0;k<=n;k++) {
    printf("%d|",t [k]);
                 }
 
return 0;
}
    

