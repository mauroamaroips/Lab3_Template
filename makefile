default:
	gcc -Wall -o prog -g main.c input.c recursion.c
debug:
	gcc -Wall -o prog -g main.c input.c recursion.c
clean:
	rm -f prog
