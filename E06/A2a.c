#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 32

struct exam_result {
    char exam_name[MAXLEN];
    int exam_grade;
};

struct student {
    char name[MAXLEN];
    struct exam_result *exams[MAXLEN];
};

struct student *new_student(const char *name) {
    struct student *student = malloc(sizeof(*student));
    strncpy(student->name, name, MAXLEN);
    for (int i = 0; i < MAXLEN; i++) {
        student->exams[i] = NULL;
    }
    return student;
}

void add_exam(struct student *student, const char *exam_name, int exam_grade) {
    struct exam_result *result = malloc(sizeof(*result));
    strncpy(result->exam_name, exam_name, MAXLEN);
    result->exam_grade = exam_grade;
    int i;
    // Find the first free exam result slot
    for (i = 0; i < MAXLEN && student->exams[i] != NULL; i++)
        /* do nothing */;
    if (i < MAXLEN) {
        student->exams[i] = result;
    }
}

void print_student(const struct student *student) {
    printf("Name: %s\n", student->name);
    for (int i = 0; i < MAXLEN && student->exams[i] != NULL; i++) {
        struct exam_result *result = student->exams[i];
        printf("Exam: %s, Grade: %d\n", result->exam_name, result->exam_grade);
    }
}

int main()
{
    struct student *db[2];

    db[0] = new_student("Max Mustermann");

    add_exam(db[0], "GTI", 4);
    add_exam(db[0], "SyA", 3);

    db[1] = new_student("Sepp Wurz");
    add_exam(db[1], "GTI", 1);
    add_exam(db[1], "SyA", 1);
    add_exam(db[1], "ThI", 2);

    for(int i = 0; i < 2; ++i)
        print_student(db[i]);

    return 0;
}
