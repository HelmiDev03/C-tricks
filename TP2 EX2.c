

#include <stdio.h>

int main()
{
	/*  i comptera le nombre des entiers positifs tap��s au clavier
	    s va additionner les valeurs positfs ta��s au clavier
	    x c'est l entier qui doit etre saisir par l utilisateur*/
	
float i=0,x,s=0,m=0;
printf("donner x \n");
scanf("%f",&x);

while(x!=0){
    if(x<0){
    printf("ERREUR=====> donner x de nouveau \n");
    scanf("%f",&x);
    
           }
        
     else if(x>0){
     	
     	/*s va commencer a additionner les x un par un puisque x est positf
      /*i sera increment� par unit� seulement dans le cas ou l'utilsateur tape un x positif*/
      s+=x;
      i++;
      printf("OK!=====> continuer a saisir  de cette facon \n");
      scanf("%f",&x);
                 }   
            }
            /*sortie de la boucle while c'est certainement parceque on a tap� x=0 suite au demande du programme de saisir une nouvelle valeur de x 
            quelque soit la valeur pr�c�dente �tait positif ou negati */
            m=s/i;
            if(i==0)
            /*i=0 ==== l'utilisateur n'a pas saisi aucun entier positif donc iy n'y aura pas de moyenne*/
            printf("PAS DE MOYENNE \n");
            if(i!=0)     
			/*i diiferent de 0===> il existe au moins une valeur positifs donn��es par l'utilisateur*/       
            printf("la moyenne de tous les entiers positifs entrees est egale a %f \n",m);
             
            return 0;
}
