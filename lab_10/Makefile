targets = main_1.bin main_2.bin main_3.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 
all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: main_1.bin main_2.bin main_3.bin 

main_1.bin: src/main1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main_2.bin: src/main2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main_3.bin: src/main3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/main_1.bin ./dist/main_2.bin ./dist/main_3.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
