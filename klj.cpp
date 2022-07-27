#include<stdio.h> 



int main() {
   int n,i,m,w,j;
   int a [w];
   int b [m] ;
   int *pa=a;
   int *pb=b;
   
       printf("enter size of first array before adding element of b \n");
       scanf("%d",&n) ;
         printf("enter size of second  array \n");
       scanf("%d",&m) ;
   
   printf("enter elemnts of array (A) \n") ;
   for(i=0;i<=(n-1);i++) {
   	printf("enter element number %d :",i);
       scanf("%d",&a [i]);
   }
    printf("enter elemnts of array (B) \n") ;
   for(i=0;i<=(m-1);i++) {
   	printf("enter element number %d :",i);
       scanf("%d",&b [i]);
   }
   j=0;
   for(i=0;i<=(m-1);i++) { 
   	*(pa+n+j) = *(pb+i) ; 
   	j++;
   	
   }
   printf("----\n");
   printf("now the new version of a (after adding elemnt of b with same order)is like this \n") ;
   for(w=0; w<=((n+m) -1) ; w++ )  {
   	printf("%d|",*(pa+w)) ;  
                                    }
  
   return 0;
}
