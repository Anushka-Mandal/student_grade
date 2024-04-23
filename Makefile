CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic
TARGET=student_grades

all: $(TARGET)

$(TARGET): details1.o marks1.o
	$(CC) $(CFLAGS) -o $(TARGET) details1.o marks1.o

details1.o: details1.c grades1.h
	$(CC) $(CFLAGS) -c details1.c

marks1.o: marks1.c grades1.h
	$(CC) $(CFLAGS) -c marks1.c

clean:
	rm -f $(TARGET) *.o
