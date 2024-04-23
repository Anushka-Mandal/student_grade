#include <stdio.h>
#include "grades1.h"

extern struct EXAM student[8];

char grades(float avg){
    if (avg > 90) return 'A';
    else if (avg > 80 && avg <= 90) return 'B';
    else if (avg > 70 && avg <= 80) return 'C';
    else if (avg > 60 && avg <= 70) return 'D';
    else if (avg > 50 && avg <= 60) return 'E';
    else return 'F';
}

void maths(int rollno){
    printf("  Maths       %d      %d      %.2d   %c\n", student[rollno].isa1.maths , student[rollno].isa2.maths , (student[rollno].isa1.maths+student[rollno].isa2.maths)/2,grades((student[rollno].isa1.maths+student[rollno].isa2.maths)/2));
}

void phy(int rollno){
    printf("  Physics     %d      %d      %.2d   %c\n", student[rollno].isa1.phy , student[rollno].isa2.phy , (student[rollno].isa1.phy+student[rollno].isa2.phy)/2,grades((student[rollno].isa1.phy+student[rollno].isa2.phy)/2));
}

void chem(int rollno){
    printf("   Chemistry   %d      %d      %.2d   %c\n", student[rollno].isa1.chem , student[rollno].isa2.chem , (student[rollno].isa1.chem+student[rollno].isa2.chem)/2,grades((student[rollno].isa1.chem+student[rollno].isa2.chem)/2));
}
