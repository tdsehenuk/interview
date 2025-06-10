#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    int id;
} Student;

void fill_students(Student **students, int *count);
void print_students(Student *students, int count);

int main() {
    Student *students = NULL;
    int count = 0;

    fill_students(&students, &count);
    print_students(students, count);

    free(students);
    return 0;
}

void fill_students(Student **students, int *count) {
    char choice;
    do {
        Student *temp = realloc(*students, (*count + 1) * sizeof(Studnet));
        if(temp == NULL) {
            printf("realloc failed.\n");
            free(*students);
            exit(1);
        }

        *students = temp;
        printf("Enter name: ");
        
        printf("\nWould you like to add another student?")
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y')
}



void print_students(Student *students, int count) {
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d: %s, Age: %d, ID: %d\n", i + 1, students[i].name, students[i].age, students[i].id);
    }
}