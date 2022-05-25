NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c 
CC = gcc
OBJS = ${SRCS:.c=.o}
HEADER = ./includes/
CFLAGS = -Wall -Werror -Wextra -I ${HEADER}
RM = rm -f

${NAME} : ${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

all: ${NAME}

clean:
				${RM} ${OBJS}

fclean: 	clean
				${RM} ${NAME}

re: 			fclean all

.PHONY:		all clean fclean re