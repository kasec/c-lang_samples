#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr); 
/* add other prototypes here if needed */

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}

/* Place your function definitions here. Be sure to include the definition for 
   createStudent() and any other functions you created for the previous task. */
 void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') { // Copy characters until the end of the string is reached
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Add a null terminator to the end of the destination string
}
struct student * createStudent(char studentName[], int studentAge) {
    struct student * ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    my_strcpy(ptr->name, studentName);
    ptr->age = studentAge;
    ptr->next = NULL;
    
    return ptr;
}

struct student * append(struct student * currentStudent, struct student * newStudent) {
    currentStudent->next = newStudent;
    return newStudent;
}