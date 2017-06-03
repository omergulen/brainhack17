#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int less_than(int i0, int i1) { return i0 < i1; }
int greater_than(int i0, int i1) { return i0 > i1; }

void fill_random(int n, int *x);
void exchange(int *x, int i, int j);

void insertion_sort(int *x, int l, int r);
void insertion_sort2(int *x, int l, int r);

int main(int argc, char **argv)
{
    int N, number;
    scanf("%d", &N);

    int arr[N], i = 0;
    
    for(; i < N; i++)
    {
        scanf("%d", &number);
        arr[i] = number;    
    }
    insertion_sort2(arr, 0, N-1);
    printf("%d",arr[N/2]);

    printf("\n");
    return EXIT_SUCCESS;
	
}

void fill_random(int n, int *x)
{
    const int M = 100;

    srand(time(0));

    int i=0;
    for (i; i < n; ++i)
            x[i] = rand() % M;
}

int is_sorted(int n, const int *x)
{
    int i=1;
    for (i; i < n; ++i)
            if (greater_than(x[i], x[i-1]))
                    return 0;

    return 1;
}

void exchange(int *x, int i, int j)
{
    int t = x[i];
    x[i] = x[j];
    x[j] = t;
}

void insertion_sort(int *x, int l, int r)
{
    int i=l+1;
    for (i; i <= r; ++i) {
	int j = i;
        for (j; j > l; --j)
            if (greater_than(x[j], x[j-1]))
                exchange(x, j, j-1);
    }
}

void insertion_sort2(int *x, int l, int r)
{
    int i=r;
    for (i; i > l; --i)
        if (greater_than(x[i], x[i-1]))
            exchange(x, i, i-1);


    i=l+2;
    for (i; i <= r; ++i) {
        int j = i;
        int v = x[i];
        while(greater_than(v, x[j-1])) {
            x[j] = x[j-1];
            --j;
         }
         x[j] = v;
        }
}
