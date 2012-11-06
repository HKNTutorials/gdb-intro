CC = gcc
all_execs = square_ints printargs fibonacci floating_point exp
FLAGS = -g -Wall -Werror

all : $(all_execs)

%: %.c
	$(CC) $< $(FLAGS) -o $@

clean:
	rm $(all_execs)
