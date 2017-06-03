#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2,v1, v2;

    scanf("%d",&x1);
    scanf("%d",&v1);
    scanf("%d",&x2);
    scanf("%d",&v2);

    if(v1 > v2 && ((x2-x1)%(v1-v2) == 0))
        printf("YES");
    else
        printf("NO");
}
