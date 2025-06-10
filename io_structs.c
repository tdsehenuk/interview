#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

void fill_students(Student *students, int count);
void print_all_students(Student *students, int count);
void print_high_gpa_students(Student *students, int count, float threshold);
void save_students_to_file(Student *students, int count, const char *filename);
void load_students_from_file(const char *filename);
int binary_search(Student *students, int count, int id);

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student *students = malloc(n * sizeof(Student));
    if (!students) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    fill_students(students, n);
    print_all_students(students, n);
    print_high_gpa_students(students, n, 3.5);
    save_students_to_file(students, n, "students.txt");
    load_students_from_file("students.txt");
    printf("%d", binary_search(students, n, 4));


    free(students);
    return 0;
}

void fill_students(Student *students, int count) {
    for(int i = 0; i < count; i++) {
        printf("\nName: ");
        scanf(" %s", students[i].name);

        printf("\nGPA: ");
        scanf("%f", &students[i].gpa);

        printf("\nAge: ");
        scanf("%d", &students[i].age);
    }
}

void print_all_students(Student *students, int count) {
    for(int i = 0; i < count; i++) {
        printf("\nStudent: %s GPA: %f Age: %d" , students[i].name, students[i].gpa, students[i].age);
    }
}

void print_high_gpa_students(Student *students, int count, float threshold) {
    for(int i = 0; i < count; i++) {
        if(students[i].gpa >= threshold) {
            printf("\nStudent: %s GPA: %f", students[i].name, students[i].gpa);
        }
    }
}

void save_students_to_file(Student *students, int count, const char *filename) {

    FILE *fp = fopen(filename, "w");
    if(fp == NULL) {
        printf("\nError opening file for writing.");
        return;
    }

    for(int i = 0; i <count; i++) {
        fprintf(fp, "%s %d %f",  students[i].name, students[i].age, students[i].gpa);
    }
    fclose(fp);
}

void load_students_from_file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("\nProblem loading file.");
        return;
    }

    Student temp;
    printf("\n----Loading Students From File-----\n");
    while(fscanf(fp, "%s %d %f", temp.name, &temp.age, &temp.gpa) == 3 ) {
        printf("Student: %s | Age: %d | GPA: %.2f\n", temp.name, temp.age, temp.gpa);
    }
    fclose(fp);
}

int binary_search(Student *students, int count, int age) {
    for(int i = 0; i < count; i++ ) {
        if(students[i].age == age) {
            return i;
        }
    }
    return -1;
}