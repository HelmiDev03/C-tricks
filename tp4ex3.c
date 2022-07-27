#include<stdio.h> 
#include <string.h> 
void main () {
	char chaine [20] ;
	char *pch =chaine ;
	int k=0,j=0,occ=0,i;
	int t[26] ;
	int *pabc = t;
	int m=97;
	char d;
	int count ;

printf("donner la chaine ou tu va chercher les occurances \n") ;
gets(chaine) ;
for(i='a' ; i <='z' ;i++)         {
	while(j<=strlen(chaine)) {
		if(*(pch+j)==m) {
			occ++ ;
		                }
	    m++;
		j++;
	                         }
	*(pabc + k) = occ ;
	k++;
	occ=0;
                                  
								}
             }
    count=0;
    d='a' ;
    while(count<=25) {
    	if(d<='z') {
		
    	if ( *(pabc+count) !=0 ) {
    		printf("%d fois la lettre %c",*(pabc+count),d ) ;
    		prinft("\n") ;
		                         } 
	               }
	               d++;
	               count ++;
	}
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
