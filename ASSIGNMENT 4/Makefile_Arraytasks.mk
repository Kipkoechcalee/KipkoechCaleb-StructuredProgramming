# Makefile for Assignment 4

CC = gcc
CFLAGS = -Wall -Wextra -std=c99

TARGETS = task1 task2 task3 task4 task5 task6 task7 task8

all: $(TARGETS)

task1: task1.c
	$(CC) $(CFLAGS) -o task1 task1.c

task2: task2.c
	$(CC) $(CFLAGS) -o task2 task2.c

task3: task3.c
	$(CC) $(CFLAGS) -o task3 task3.c

task4: task4.c
	$(CC) $(CFLAGS) -o task4 task4.c

task5: task5.c
	$(CC) $(CFLAGS) -o task5 task5.c

task6: task6.c
	$(CC) $(CFLAGS) -o task6 task6.c

task7: task7.c
	$(CC) $(CFLAGS) -o task7 task7.c

task8: task8.c
	$(CC) $(CFLAGS) -o task8 task8.c

clean:
	rm -f $(TARGETS) *.o

run-all: all
	@echo "Running Task 1:"
	@./task1 < test_input1.txt || true
	@echo "\nRunning Task 2:"
	@./task2 < test_input2.txt || true
	@echo "\nRunning Task 3:"
	@./task3 < test_input3.txt || true
	@echo "\nRunning Task 4:"
	@./task4 < test_input4.txt || true
	@echo "\nRunning Task 5:"
	@./task5 < test_input5.txt || true
	@echo "\nRunning Task 6:"
	@./task6 < test_input6.txt || true
	@echo "\nRunning Task 7:"
	@echo "Test input: 10 12 14 15 13 18 20 -1" | ./task7 || true
	@echo "\nRunning Task 8:"
	@./task8 || true

.PHONY: all clean run-all