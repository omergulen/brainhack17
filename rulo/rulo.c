#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);

    int arr[test];
    int i = 0; 
    int candle;

    for (; i < test ; i++)
    {
        scanf("%d", &candle);
        arr[i] = candle;    
    
    }i = 1;
    
    int _max = arr[0], counter = 1;
    
    for(; i < test; i++)
    {
        if(_max < arr[i])
        {
            _max = arr[i];
            counter = 1;    
        }
        else if (_max == arr[i])
            counter++;
    }
    printf("%d", counter);
}
