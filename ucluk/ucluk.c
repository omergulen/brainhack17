#include <stdio.h>

int main()
{
    int arr1[3];
    int arr2[3];
    int num;
    int i=0, k=0;
    
    for(; i < 3; i++)
    {
        scanf("%d",&num);
        arr1[i] = num;
    }i = 0;

    for(; k < 3; k++)
    {
        scanf("%d",&num);
        arr2[k] = num;
    }
    
    int alice=0, bob=0;

    for(; i < 3; i++)
    {
        if(arr1[i] > arr2[i])
            alice++;
        else if(arr1[i] < arr2[i])
            bob++;
    }

    printf("%d  %d", alice, bob);
}
