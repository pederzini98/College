#include <stdio.h>
#include <stdlib.h>

int Determinante(int ordem, *int matriz)
{

    int aux = 1, i, j;
    if (matriz2 == NULL)
        return -1;
    for (i = 0; i < ordem; i++)
    {
        for (j = 0; j < ordem; j++)
        {
            if (j == 0 && i == 0)
            {
                aux *= *matriz[i][j];
            }
        }
    }

    return 0;
}

int main()
{
    int i = 0, ordem, *matriz, j;
    matriz = (int **)malloc(sizeof(int));
    if (matriz == NULL)
        printf("nao alocou memoria");
    for (i = 0; i < ordem; i++)
        for (j = 0; j < ordem; j++)
        {
            printf("Termo [%d][%d]", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    //printf("determinante da matriz eh:  %d\n",Determinante(ordem, &matriz))

        return 0;
}