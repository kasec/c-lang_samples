int main(void) {
    int i;
    int numbers[6];
    
    for(i = 0; i < 6; i++) {
        scanf("%d", &numbers[i]);
    }
    
    
    reverseArray(numbers);
    
    for(i = 0; i < 6; i++) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}

void reverseArray(int * ptr) {
    int tmp = ptr[5];
    ptr[5] = ptr[0];
    ptr[0] = tmp;
 
    tmp = ptr[4];
    ptr[4] = ptr[1];
    ptr[1] = tmp;
 
    tmp = ptr[3];
    ptr[3] = ptr[2];
    ptr[2] = tmp;
}