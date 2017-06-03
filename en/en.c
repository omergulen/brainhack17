#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int less_than(int i0, int i1) { return i0 < i1; }
void print_array(int n, const int *x);
int is_sorted(int n, int *x);
void exchange(int *x, int i, int j);

void sort(int *x, int l, int r);

int main(int argc, char *argv[])
{
    const int N = 5;
    int x[N];
	int cou = 0;
	int number;

	for(cou; cou <= 4; cou++)
	{
		scanf("%d",&number);
		x[cou] = number;
	}

	sort(x, 0, N-1);
    
	long int sum1 = 0, sum2 = 0;
	int i=1, k=3;
	
	for (; i <= 4; ++i)
	{
		sum1 = sum1 + x[k];
		sum2 = sum2 + x[i];
		k--;
	}
	
	printf("%ld %ld", sum1, sum2);
    return EXIT_SUCCESS;
}

int is_sorted(int n, int *x)
{
	int i = 1;
        for (i; i < n; ++i)
                if (less_than(x[i], x[i-1]))
                        return 0;

        return 1;
}

void exchange(int *x, int i, int j)
{
        int t = x[i];
        x[i] = x[j];
        x[j] = t;
}

void sort(int *x, int l, int r)
{	
	int i=l;

        for (i; i < r; ++i) {
                int min_id = i;

		int j = i+1;
                for (j; j <= r; ++j) {
                        if (less_than(x[j], x[min_id]))
                                min_id = j;
                }
                exchange(x, min_id, i);
        }
}
