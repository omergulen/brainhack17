#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int lengt;
    int i=0,k=0;

    scanf("%d",&lengt);

    int matris[lengt][lengt];

    for (i; i < lengt; ++i)
    {
        for(k; k < lengt; ++k)
        {
            scanf("%d",&matris[i][k]);
        }k=0;
    }
    i=0;
    k=0;

    int dia1=0;
    int dia2=0;

    for(; i <= lengt-1; ++i)
    {
        dia1 = dia1 + matris[i][i];
    }
    k=0;
    i -= 1;
    for(;k < lengt; ++k)
    {
        dia2 = dia2 + matris[i][k];
        i--;
    }
    printf("\n%d ",abs(dia1-dia2));
}
