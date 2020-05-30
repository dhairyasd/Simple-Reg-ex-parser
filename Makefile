
CARGS = -g -Wall -Werror -Wuninitialized

prog.exe : reg_ex.c Makefile
	gcc $(CARGS) reg_ex.c -o prog.exe