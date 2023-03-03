#include<stdio.h>

int main(void) {
    int times = 0;
    char kind;
    int result = 0;
    scanf("%c %d", &kind, &times);
    
    if(kind == 'c') {
        result = sizeof(char) * times;
    } else if(kind == 'i') {
        result = sizeof(int) * times;
    } else if(kind == 'd') {
        result = sizeof(double) * times;
    }
    
    if(result >= 1000000) {
        int MB = result / 1000000;
        int remaining = result%1000000;
        int KB = 0;
        int B = 0;
        
        if(remaining >= 1000) {
            KB = remaining / 1000;
            B = remaining % 1000;
        } else {
            KB = remaining;
        }
        
        printf("%d MB and %d KB and %d B", MB, KB, B);
    } else if(result > 1000) {
        int KB = result / 1000;
        int B = result % 1000;
        
        printf("%d KB and %d B", KB, B);
    } else {
        int B = result % 1000;
        
        printf("%d B", B);
    }
    
    
    return 0;
}