#include <stdio.h>
#include <math.h>

double equation_16(double x)
{	
    double y;

    if (x >= 3.0 && x < 10.0)
    {
        y = 4.0 * log((x * x) / 2.0) - sqrt(x);
    }
    else if (x >= 200.0 && x < 2000.0)
    {
        y = log10(x / 2.0) + fabs(4.0 - x * x) / (2.0 * x - 1.0);
    }
    else if (x >= 2000.0 && x < 2500.0)
    {
        y = -4.0 * sin(x / 2.0) - cos(x + 1.0);
    }
    else 
    {
        y = -0.5;
    }

    return y;
}

int main()
{
    double x, y;

    printf("Enter x: ");
    scanf("%lf", &x);
	
    y = equation_16(x);
	
    printf("x = %lf\n", x);
    printf("y = %lf\n", y);

    return 0;
}