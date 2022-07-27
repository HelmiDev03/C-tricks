#include<stdio.h>
#include<math.h>
int main() {
    int n,i,j,q,n2=0,k=0,s=0;
    int t1[n] ;
    int t2[n2] ;

do {
    printf("donner la taille du tableau \n");
    scanf("%d",&n);
    }
while ((n<5) || (n>50) ) ;
printf("donner les elemnts du tableau \n");
 for(i=1;i<=n;i++) {
 	do {
	 
     printf("donner l elemnt n° %d:",i);
     scanf("%d",& t1[i]) ;
     printf("\n");
     if (t1 [i] > 50) {
     	printf("donner de nouveau if faut superieur a 50 \n");
	 }
      }
      while((t1[i] >50 ) ||  (  t1[i] <0 ) ) ;
                   } 
  for (i=1;i<=(n-1);i++){
   for(j=(i+1);j<=n;j++){
       if (t1[j] < t1[i]) {
           t1[j] = t1[i] + t1[j] ;
            t1[i] = t1[j] - t1[i];
            t1[j] = t1[j] - t1[i] ;
                         }
                        }
                      }
                  
printf( "voici t apres tri croissant \n" );
for(i=1;i<=n;i++) {
    printf("%d|",t1 [i]);
                 }


        for(i=(t1 [1]+1) ; i<= (t1[n] +1 ) ;i++  ) { 
            for(j=1;j<=n;j++)                  {

               if (t1 [j]==i) {
                   s++;
                               }
                                                }
                  if (s==0) {
                      t2 [k] =i;
                      k++;
                      n2++;
                             }
                        s=0     ;
                                                 } 
                    printf("\n") ;
             printf("voici le tableau t2 contenant les elments manquants de t1 deja triee en ordre croissant  \n") ;
                                   
           for(q=0;q<=(n2-1);q++) {
               printf("%d|",t2 [q]) ;

           } 
		   printf ("\n") ;     
           printf("c'est clair que la taille du t2 est egale a %d \n",n2) ;
           return 0 ;
                 }                   



              

