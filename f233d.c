#include<stdio.h>
void talsi9(int t1 , int t2 ,int  kbir, int sghir ) {
    int i=0,j=0,k=0,h,q;
    int m = kbir+sghir;
    int t [m];
    do {
         t [k] = t1 [i];
        i++;
        t [k+1]= t2 [j];
        j++;
        k+=2;
     }
     while(k=<sghir);
     if (kbir!=sghir) {
     for (h=(2*sghir+1);h=<(m-1);h++) {
         t [h] = t [i];
                                  }
                        }           
 prinft("le fusionnement des deux tableaux est comme suit \n");
  for(q=0;q<=(m-1); q++) {
      printf("%d|",t [q]);
                         }                                
}
int main () {
    int n1,n2,i,j;
    int t1 [n1];
    int t2 [n2] ;
    printf("enter size of first array \n");
    scanf("%d",&n1);
     printf("enter size of second array\n");
    scanf("%d",&n2);
    printf("enter element of first array \n");  
    for(i=0;i=<(n1-1);i++) { 
        scanf("%d",&t1 [i]);
        printf("\n");
    }
 for(j=0;i=<(n2-1);j++) { 
     scanf("%d",&t2 [j]);
     printf("\n");
 }
 if (n1>=n2) {
     talsi9(t1,t2,n1,n2)
            }
  else if(n2>n1) {
      talsi9(t1,t2,n2,n1)  
                 }
    return 0;
}



