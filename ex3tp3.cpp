#include <stdio.h>
int main() {
    int n,np,nn,i,p=0,p1=0,k;
    int t [n];
    int tpos [np];
    int tneg [nn] ;
    do {
        printf("enter size of oroginal array \n");
        scanf("%d",n) ;
    }
    while((n<0) || (n>50)) ;
    printf("enter elemnts of array then \n") ;
    for(i=0;i<=(n-1);i++) {
        scanf("%d",&t [i]);
    }
     for(i=0;i<=(n-1);i++) {
     
         if (t [i] >= 0) {
             tpos [p] =  t [i];
             np;
         }
         else {
             tneg [p1] = t [i] ;
             nn++;
         }
                        }
    printf("positive array is like this \n");
     for(p=0;p<=(np-1);p++) {
         printf("%d|",tpos [p]);
                          }
         printf("%n");
                            
    for(p1=0;p1<=(nn-1);p1++) {
    printf("%d|",tneg [p1]);
    }
    printf("%n");
 return 0;
 }  

