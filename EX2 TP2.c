#include<stdio.h>
int main () {
int i,x,g;
printf("si la case choisi par vous varie de 1 a 3 on va donc faire l operation souhaitee puis vous allez donner une nouvelle valeure de x \n");
printf("si la case choisi par vous est 4 on va malheureusement faire un EXIT suite a votre manque de respect \n");
printf("si la case choisi sera un autre valeur , vous allez etre oblige a retaper une nouveller valeur de x \n");
printf("j' espere que les regles sont bien compris monsieur, il est temps de se placer aux choses serieuses maintenant \n");
do {
printf("donner l''entier x\n");
scanf("%d",&x);
printf("on va faire des operations mathematiques sur %d selon notre indicateur i \n",x);
printf("case1: %d+1 \n",x);
printf("case2: %d*2 \n",x);
printf("case3: %d-4 \n",x);
printf("merci de choisir une case \n");
scanf("%d",&i);
switch (i) {
case 1: printf("l''addition de %d par unité est %d \n",x,x+1);
break;
case 2:printf("la multiplication de %d par 2 est %d \n",x,x*2);
break;
case 3:printf("la soustraction de %d par 4 est %d \n",x,x-4);
break;
default :printf("=======>EXIT \n");
}
}
while(i!=4);
return 0;
}
