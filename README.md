# student_grade
SEM - 2 project ( part - 2 )
# Student Grades Program

This program allows you to input a student's roll number and displays their grades and details.

## Requirements

- GCC (GNU Compiler Collection) or any C compiler
- GNU Make

## How to Compile

To compile the program, navigate to the directory containing the source files and the Makefile in your terminal or command prompt, and run:

```bash
make
```


This will compile the source files and create an executable named student_grades.

How to Run
After compiling, you can run the program by executing the generated executable:

```bash
./student_grades
```

The program will prompt you to enter a student's roll number. Enter a number between 1 and 8 to view the corresponding student's grades and details.

<b>Cleaning Up<b>
To clean up the generated object files and the executable, run:

```bash
make clean
```
This will remove the student_grades executable and all object files.

Notes
The source files for the program are details1.c and marks1.c.
The grades.h header file contains the necessary function prototypes and struct definitions.
The program uses dynamic memory allocation for storing student names.
css
