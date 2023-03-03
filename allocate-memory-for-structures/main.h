struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int numberOfSides = 0;
    scanf("%d", &numberOfSides);
    struct point * polygon;
    polygon = (struct point *) malloc(numberOfSides * sizeof(struct point));
    initializePoly(polygon, numberOfSides);
    printPoly(polygon, numberOfSides);
    free(polygon);

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point * ptr, int num) {
    int i;
    for(i = 0; i < num; i++) {
        ptr[i].x = -i;
        ptr[i].y = i*i;
    }    
}
// Write your initializePoly() function here

