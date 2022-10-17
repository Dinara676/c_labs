#include <stdio.h>
#include <math.h>

int main()
{
    int b1, b2, b3;
    printf("Enter b1 -> ");
    scanf("%d", &b1);
    printf("Enter b2 -> ");
    scanf("%d", &b2);
    printf("Enter b3 -> ");
    scanf("%d", &b3);

    if (b1 < b2 && b1 < b3) {
        if (b1%2 == 0)
            printf ("1\n");
        else
            printf ("%.1i\n",(1/b1));
    }
    if (b2 < b1 && b2 < b3) {
        if (b2%2 == 0)
            printf ("2\n");
        else
            printf ("%.2i\n",(2/b2));
    }
    if (b3 < b1 && b3 < b2) {
        if (b3%2 == 0)
            printf ("3\n");
        else
            printf ("%.3i\n",(3/b3));
    }
return (0);
}
