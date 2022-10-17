#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter x { x >= 0 } -> ");
    scanf("%lf", &x);
    if (x >= 0)
    {
        double y = 5 * sqrt (sin (sqrt (x)));
        double z = log10 (cos (log (y)));
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x имеет не корректное значение!\n");
    return 0;
}
