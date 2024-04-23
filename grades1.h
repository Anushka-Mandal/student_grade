#ifndef GRADES_H
#define GRADES_H

struct Node {
    int data;
    struct Node* next;
};

struct gradecard {
    char* name; 
    int rollno;
    char DOB[50];
};

struct EXAM {
    struct {
        int maths;
        int phy;
        int chem;
    } isa1;
    struct {
        int maths;
        int phy;
        int chem;
    } isa2;
};

void deleteFirst(struct Node** head);
void printList(struct Node* head);
char grades(float avg);
void maths(int rollno);
void phy(int rollno);
void chem(int rollno);

#endif /* GRADES_H */
