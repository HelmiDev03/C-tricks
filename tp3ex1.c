#include<stdio.h>
int main () {
     
    int n,i,j;
    int t [n];


do {
    printf("give me the size of your table \n");
    scanf("%d",&n);
   }
while( (n > 50) || (n<=0) );
printf("enter elements of array \n");
for(i=0;i<=(n-1);i++) {
	printf("element number %d : ",i);
    scanf("%d",&t [i]);

                      }
for(i=0;i<=(n-1);i++) {
    if (t [i]==0)                 {
        for(j=i;j<= (n-2);j++) {
            t [j]=t [j+1] ;
            n--;
                                } 
                                  } 
                      }  
printf("that's your array after deleting all occurances of 0 \n");
for(i=0;i<= (n-1);i++) {
    printf("%d|",t [i]);
                      }            
return 0;
}
