#include <stdio.h>
#include <string.h>

// Structure to store student data
struct Student {
    int rollno;
    char name[50];
    int marks;
};

// Function to read student data
void readStudent(struct Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollno);
    
    printf("Enter name: ");
    scanf("%s", s->name);
    
    printf("Enter marks: ");
    scanf("%d", &s->marks);
}

// Function to display student data
void displayStudent(struct Student s) {
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %d\n", s.marks);
}

// Function to sort student records by marks (Rank-wise)
void sortStudentsByRank(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to print all student details
void printAllStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        displayStudent(students[i]);
        printf("\n");
    }
}

// Function to search student details by roll number
void searchStudentByRollNo(struct Student students[], int n, int rollno) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].rollno == rollno) {
            displayStudent(students[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with roll number %d not found.\n", rollno);
    }
}

// Function to print names of students with the highest test score
void printHighestScorers(struct Student students[], int n) {
    int highestScore = -1;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > highestScore) {
            highestScore = students[i].marks;
        }
    }
    
    printf("Names of students with the highest test score (%d):\n", highestScore);
    for (int i = 0; i < n; i++) {
        if (students[i].marks == highestScore) {
            printf("%s\n", students[i].name);
        }
    }
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        readStudent(&students[i]);
        printf("\n");
    }

    printf("Student Details:\n");
    printAllStudents(students, n);

    printf("\nSorting students by rank (marks):\n");
    sortStudentsByRank(students, n);
    printAllStudents(students, n);

    int searchRollNo;
    printf("\nEnter a roll number to search: ");
    scanf("%d", &searchRollNo);
    searchStudentByRollNo(students, n, searchRollNo);

    printf("\n");
    printHighestScorers(students, n);

    return 0;
}
