 


#include <stdio.h>
#include <math.h> 

int main()
{
    float a, b, c;
    float s1, s2, imaginaire;
    float discriminant;

    printf("donner les monomes de l  equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    
    discriminant = (b * b) - (4 * a * c);



    switch(discriminant > 0)
    {
        case 1:
            /* si discriminant  positive */
            s1 = (-b + sqrt(discriminant)) / (2 * a);
            s2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("deux solutions relles existent: %.2f and %.2f", 
                    s1, s2);
            break;

        case 0:
            /*  discriminant  non positive */
            switch(discriminant < 0)
            {
                case 1:
                    /* If discriminant is negative */
                    s1 = s2 = -b / (2 * a);
                    imaginaire = sqrt(-discriminant) / (2 * a);

                    printf("deux solutions complexes existent: %.2f + i%.2f and %.2f - i%.2f", 
                            s1, imaginaire, s2, imaginaire);
                    break;

                case 0:
                    /* discriminant = zero */
                    s1 = s2 = -b / (2 * a);

                    printf("deux racines egaux: %.2f and %.2f", s1, s2);

                    break;
            }
    }

    return 0;
}
