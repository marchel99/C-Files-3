#include <stdio.h>

#include <stdlib.h>

typedef int km;

int main()
{

    int *array;
    array = malloc(1000 * sizeof(int));
    for (int i = 0; i < 1000; ++i)

        printf("%d", array[i]);

    free(array);


    int a = 1;

    km b = 2;
    km c = 3;

    int table[] = {1, 2, 3};

  /*   printf("ok\n");

    for (int i = 0; i <= 2; ++i)
    {
        printf("Cyfra w tabeli: %d\n", table[i]);
    }
    printf("b+c= %d", (b + c));

 */


    return 0;
}
