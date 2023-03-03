#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') { // Copy characters until the end of the string is reached
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Add a null terminator to the end of the destination string
}

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit
struct student * createStudent(char studentName[], int studentAge) {
    struct student * ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    my_strcpy(ptr->name, studentName);
    ptr->age = studentAge;
    ptr->next = NULL;
    
    return ptr;
}
// In this implementation, the my_strcpy() function takes two character arrays as arguments: 
// dest (the destination array where the copied string will be stored) and src (the source array containing the string to be copied). 
// The function copies each character from src to dest until the null terminator \0 is encountered, at which point the function adds a null terminator to the end of the dest array.
// In main(), the my_strcpy() function is called to copy the string "Hello, world!" from src to dest, and the contents of both arrays are printed using printf().