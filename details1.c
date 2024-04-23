#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "grades1.h"

struct EXAM student[8]; 
struct gradecard students[8];

int main(){
    char *names[] = {"John", "Emma", "Michael", "Sophia", "William", "Olivia", "James", "Ava"};
    int rollno[] = {1, 2, 3, 4, 5, 6, 7, 8};
    char *DOB[] = {"12-JAN-2005", "12-FEB-2005", "12-MARCH-2005", "12-APRIL-2005", "12-MAY-2005", "12-JUNE-2005", "12-JULY-2005", "12-AUG-2005"};
    
    
    for (int i = 0; i < 8; ++i) {
        students[i].name = malloc(strlen(names[i]) + 1); // +1 for null terminator
        strcpy(students[i].name, names[i]);
        students[i].rollno = rollno[i];
        strcpy(students[i].DOB, DOB[i]);
    }
    
    // {isa1.maths isa2.maths isa1.phy isa2.phy isa1.chem isa2.chem}
    int marks[][6] = {
        {78, 80, 90, 99, 88, 80},
        {75, 85, 96, 98, 70, 90},
        {85, 88, 92, 80, 0, 75},
        {90, 92, 88, 99, 85, 90},
        {70, 75, 68, 72, 65, 70},
        {82, 84, 78, 80, 85, 88},
        {88, 90, 65, 86, 90, 92},
        {92, 95, 40, 92, 64, 96}
    };

    for(int i = 0; i < 8; i++) {
        student[i].isa1.maths = marks[i][0];
        student[i].isa2.maths = marks[i][1];
        student[i].isa1.phy = marks[i][2];
        student[i].isa2.phy = marks[i][3];
        student[i].isa1.chem = marks[i][4];
        student[i].isa2.chem = marks[i][5];
    }

    int roll_number;
    printf("Enter student's roll number (1-8): ");
    scanf("%d", &roll_number);

    if (roll_number >= 1 && roll_number <= 8) {
        int i = roll_number - 1;

        printf("-------------------------------------------------\n");
        printf("Student name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].rollno);
        printf("Date of birth: %s\n", students[i].DOB);
        printf("--------------------------------------------------\n");
        printf(" Subject     Exam 1  Exam 2  Average Grade\n");
        
        maths(i);
        phy(i);
        chem(i);
    } else {
        printf("Invalid roll number. Please enter a number between 1 and 8.\n");
    }

    for (int i = 0; i < 8; ++i) {
        free(students[i].name);
    }

    return 0;
}
