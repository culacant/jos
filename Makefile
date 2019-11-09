CC = gcc 
exe: jos.c
	$(CC) jos.c -o jos.exe ./timer_lib/timer.o -O0 -lm 
