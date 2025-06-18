#include <stdio.h>

#define ENDEREÇOS "teste1.txt"
#define TAM 100

int main ()
{
    FILE* t1;
    char string [TAM];

    t1 = fopen (ENDEREÇOS, "r");
    if (t1 == NULL)
        return (1);

    while (fgets (string, TAM, t1))
    printf ("%s", string);

    fclose (t1);

return 0;
}
