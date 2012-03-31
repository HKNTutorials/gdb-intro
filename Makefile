COMPILER = gcc
CFLAGS = -g -O0 -Wall -Werror -fno-stack-protector

all: test1 test2

.PHONY: clean
clean:
	rm test1 test2

test1: test1.c
	$(COMPILER) $(CFLAGS) -o test1 test1.c

test2: test2.c
	$(COMPILER) $(CFLAGS) -o test2 test2.c
