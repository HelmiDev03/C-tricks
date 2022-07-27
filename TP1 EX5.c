// calcul de distance
#include <stdio.h>
#include <math.h>
int main(){
    int num1, num2, x1, x2, y1, y2;
    float distance;
    
    
    printf("Entrer les cordonnes de premier point \n ");
    scanf("%d %d", &x1, &y1);
    printf("donner les cordonnes du deuxieme point \n");
    scanf("%d %d", &x2, &y2);
    
    // Calcul de distance
    num1 = x2 - x1;
    num2 = y2 - y1;
    distance = sqrt((num1 * num1) + (num2 * num2));
    

    printf("Distance est %.2f \n", distance);
    return 0;
}