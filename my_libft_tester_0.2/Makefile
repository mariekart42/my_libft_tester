
#-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->
# Path of libft.h WITHOUT .h file!  e.g
# LIBFT_PATH = /Users/LIBFT/+libft 	[/libft.h]

LIBFT_PATH	= /Users/mariemensing/LIBFT/+libft

# :)
#-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->-->


NAME			= my_libft_tester.a
CC			= gcc
RM			= rm -rf
HEAD			= head.h
FLAGS		= -c -Wall -Werror -Wextra
EXEC_LIB_PATH	= -L$(LIBFT_PATH) -lft 

test:
	@gcc test.c
	@./a.out

01:
	@echo "\n"ft_isalpha.c:
	@gcc 01_isalpha.c $(EXEC_LIB_PATH)
	@./a.out
02:
	@echo "\n"ft_isdigit.c:
	@gcc 02_isdigit.c $(EXEC_LIB_PATH)
	@./a.out
03:
	@echo "\n"ft_isalnum.c:
	@gcc 03_isalnum.c $(EXEC_LIB_PATH)
	@./a.out

04:
	@echo "\n"ft_isascii.c:
	@gcc 04_isascii.c $(EXEC_LIB_PATH)
	@./a.out

05:
	@echo "\n"ft_isprint.c:
	@gcc 05_isprint.c $(EXEC_LIB_PATH)
	@./a.out

06:
	@echo "\n"ft_strlen.c:
	@gcc 06_strlen.c $(EXEC_LIB_PATH)
	@./a.out

07:
	@echo "\n"ft_memset.c:
	@gcc 07_memset.c $(EXEC_LIB_PATH)
	@./a.out

08:
	@echo "\n"ft_bzero.c:
	@gcc 08_bzero.c $(EXEC_LIB_PATH)
	@./a.out

09:
	@echo "\n"ft_memcpy.c:
	@gcc 09_memcpy.c $(EXEC_LIB_PATH)
	@./a.out

10:
	@echo "\n"ft_memmove.c:
	@gcc 10_memmove.c $(EXEC_LIB_PATH)
	@./a.out

11:
	@echo "\n"ft_strlcpy.c:
	@gcc 11_strlcpy.c $(EXEC_LIB_PATH)
	@./a.out

12:
	@echo "\n"ft_strlcat.c:
	@gcc 12_strlcat.c $(EXEC_LIB_PATH)
	@./a.out


del:
	@echo "\n""\t"... deleletely output files ..."\n"
	@$(RM) *.out
	@$(RM) *.o

clean: del
	@echo "\n""->> -██████ ██╗---- ███████╗ █████╗ ███╗---██╗""\n""->> ██╔════ ██║---- ██╔════ ██╔══██ ████╗--██║""\n""->> ██║---- ██║---- █████╗- ███████ ██╔██╗-██║""\n""->> ██║---- ██║---- ██╔══╝- ██╔══██ ██║╚██╗██║""\n""->> ╚██████ ███████ ███████ ██║--██ ██║-╚████║""\n""->> -╚═════ ╚══════ ╚══════ ╚═╝--╚═ ╚═╝--╚═══╝""\n"""

.PHONY: clean


