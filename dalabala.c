 #include<math.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* marhb????? */
    printf("bienvenue sur votre simulation de calcul\n");
    printf("---\n");
    printf("Enter [num 1]  [num2]  [+ - * / % ^] \n");

    
    scanf("%f %f %c", &num1, &num2, &op);

    /* le choix de l'action est bas? sur l'operateur*/
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;
            case '%':
            if(num2==0)
            printf("ERROR \n"); 
            else
            	result=(( num1*100)/num2) ;
break;
            case '^' :
            if ((num1==0) &&(num2==0))
				printf ("ERROR \n") ;
                 else 
                  result =pow ((num1,num2),2);
        break;
        default: 
            printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}