#include <stdio.h>

#define VALORES "teste2.txt"

int main ()
{
    FILE* t2;
    float n, total;

    t2 = fopen (VALORES, "r");
    if (t2 == NULL)
        return (1);

    while (fscanf (t2, "%f", &n) != EOF)
    {
        printf ("Leu %.2f\n", n);
        total += n;
    }

    printf ("Total: %.2f\n", total);

    fclose (t2);

    return 0;
}
