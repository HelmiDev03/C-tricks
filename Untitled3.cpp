#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long long pgcd(long long, long long);
long long ppcd(long long, long long);
unsigned long long factorielle(unsigned long long);


long long pgcd(long long a, long long b)
{
    if (b == 0)
        return a;

    long long r = a % b;

    while (r != 0)
    {
            a = b;
            b = r;
            r = a % b;
    }

    return b;
}


long long ppcd(long long a, long long b)
{
    if (a == 0 || b == 0)
        return 0;

    long long max = (a > b) ? a : b;
    long long i = max;

    while (i % a != 0 || i % b != 0)
        ++i;

    return i;
}


unsigned long long factorielle(unsigned long long a)
{
    unsigned long long r = 1;

    for (unsigned long long i = 2; i <= a; ++i)
        r *= i;

    return r;
}


int
main(void)
{
    double res = 0.;

    while (1)
    {
        double a;
        double b;
        char op;

        printf("> ");
        int n = scanf("%lf %lf %c", &a, &b, &op);

        if (n <= 1)
        {
            scanf("%c", &op);
            b = a;
            a = res;
        }
        if (op == 'q')
            break;

        switch (op)
        {
        case '+':
            res = a + b;
            break;

        case '-':
            res = a - b;
            break;

        case '*':
            res = a * b;
            break;

        case '/':
            res = a / b;
            break;

        case '%':
            res = (long long)a % (long long)b;
            break;

        case '^':
            res = pow(a, b);
            break;

        case '!':
            res = factorielle((n == 0) ? a : b);
            break;

        case 'g':
            res = pgcd(a, b);
            break;

        case 'p':
            res = ppcd(a, b);
            break;
        }

        printf("%lf\n", res);
    }
    return 0;
}
