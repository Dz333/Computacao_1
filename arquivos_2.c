#include <stdio.h>

#define TAM 100
#define VALORES "teste2.txt"

int main ()
{
    FILE* t2;
    float n, total;
    char string [TAM];

    t2 = fopen (VALORES, "r");
    if (t2 == NULL)
        return (1);

    while (fscanf (t2, "%f", &n) != EOF)
        total += n;

    printf ("Total: %.2f\n", total);

    fprintf (t2, "%d\n", total);

    while (fgets (string, TAM, t2))
    printf ("%s", string);


    fclose (t2);

    return 0;
}
