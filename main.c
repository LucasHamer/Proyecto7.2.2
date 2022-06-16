#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][3],matTRANSPUESTA[3][2]={{0}};
    int x,i;

    for(x=0;x<2;x++)
    {
        for(i=0;i<3;i++)
        {
            printf("Ingrese columna %d para la fila %d: ",i+1,x+1);
            scanf("%d",&mat[x][i]);
        }
    }

    for(x=0;x<3;x++)
    {
        for(i=0;i<2;i++)
        {
            matTRANSPUESTA[x][i]=mat[i][x];
        }
    }

    for(x=0;x<3;x++)
    {
        printf("\n");
        for(i=0;i<2;i++)
            printf(" %d",matTRANSPUESTA[x][i]);
    }
    printf("\n");

    return 0;
}
