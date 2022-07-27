#include<stdio.h>
#include<math.h>
void saisiedonnees() {
    float r,w,c,l;
    do{
        printf("donner la resistance du circuit \n");
        scanf("%f",&r);
    }
    while(r<=0);
    do{
    printf("donner la pulsatsion du circuit \n");
    scanf("%f",&w);
}
while(w<=0);
do{
    printf("donner la valeur de capacite \n");
    scanf("%f",&c);
}
while(c<=0);
do{
    printf("donner l'inductance du circuit \n");
    scanf("%f",&l);
}
while(l<=0);
}

float calculz (float r , float w, float c, float l) {
    float k ,m,n,a;
    m=r^2;
    n = fmod(1,c*w);
    a=l*w;
    k=sqrt(m+(a-n)^2) ;
    
    return k ;

}
int main () {
    float r,l,w,c;
    printf("merci de saisir les paramteres de votre circuit RLC en serie \n") ;
    saisiedonnees();
    printf("l'impedance de votre cuicuit est donc %f \n", calculz(r,w,c,l));
    return 0 ;
}

