#include<stdio.h>
 int main () {
     
    int k,n,i,j,ox;
    int t [n];


do {
    printf("give me the size of your table \n");
    scanf("%d",&n);
   }
while( (n > 50) || (n<=0) );
j=i-1;
i=0;
printf("enter elements of array \n");
for(i=0;i<=n;i++) {
	printf("element number %d : ",i);
    scanf("%d",&t [i]);
                      }
    while(i<j) {
	
    	t [j] =ox;
    	ox = t[i];
    	t [i] = t [j];
    	i++;
    	j--;
	          }
	
	printf("the reverse of your array will be like that \n");
	for(k=0;k<=n;k++) {
		printf("%d|",t[k]);
	                      }
		return 0;
	}
    
