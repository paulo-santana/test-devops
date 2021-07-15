all:	main.c
		$(CC) main.c -o main -Wall -Wextra -Werror

clean:
	rm -rf main
