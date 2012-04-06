CC = ~ece190/bin/clang
all_execs = square_ints printargs arewethereyet string_modification fibonacci floating_point
FLAGS = -g -Wall -Werror

all : $(all_execs)

% : %.c
	$(CC) $< $(FLAGS) -o $@

clean:
	rm $(all_execs)
