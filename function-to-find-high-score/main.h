#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int * ptr, int lng) {
    int highest = 0;
    int i;
    
    for(i = 0; i < lng; i++) {
        if(ptr[i] > highest) {
            highest = ptr[i];
        }
    }
    
    for(i = 0; i < lng; i++) {
        ptr[i] = highest - ptr[i];
    }
}