#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void insertionSort(int ar_size, int *  ar) {
    int v;
    int idx;
    int i;
    int done = 0;
    
    v = ar[ar_size - 1];

    for (idx = ar_size-2; idx >= 0; idx--) {
        if (v > ar[idx]) {
            ar[idx+1] = v;
            done = 1;
        } else {
            ar[idx+1] = ar[idx];
        }
        for (i = 0; i < ar_size; i++)
            printf("%d ", ar[i]);
        printf("\n");
        
        if (done)
            break;
    }
    
    if (!done) {
        ar[0] = v;
            for (i = 0; i < ar_size; i++)
            printf("%d ", ar[i]);
        printf("\n");
    }

}

/* Tail starts here */
int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
