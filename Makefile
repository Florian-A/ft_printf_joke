# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joke <joke@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:45:53 by joke           #+#    #+#              #
#    Updated: 2022/11/24 20:32:33 by joke          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LIB	= $(addprefix ./lib/, \
ft_putnbr_fd.c \
ft_putunbr_fd.c \
ft_strchr.c \
ft_putchar_fd.c \
ft_toupper.c \
ft_calloc.c \
ft_memset.c \
)

SRC	= $(addprefix ./sources/, \
put_detector.c \
putp_fd.c \
puts_fd.c \
putc_fd.c \
putdi_fd.c \
putu_fd.c \
putx1_fd.c \
putx2_fd.c \
ull_to_hex.c \
i_to_hex.c \
ft_printf.c \
)

CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar
INC_DIR	= ./includes
OUT	= libftprintf.a
HEADER_FILE	= $(INC_DIR)/ft_printf.h
LIB_OBJS = $(LIB:.c=.o)
SRC_OBJS = $(SRC:.c=.o)

all: $(OUT)

$(NAME) : $(LIB_OBJS) $(SRC_OBJS) $(AR) $(NAME) $(LIB_OBJS) $(SRC_OBJS) ranlib $(NAME)

$(OUT) : $(LIB_OBJS) $(SRC_OBJS)
	@$(AR) -rcs $(OUT) $(LIB_OBJS) $(SRC_OBJS)
	@echo "\n Compilation of printf is success 🎉${END}"

%.o: %.c $(HEADER_FILE)
	@/bin/echo -n .
	@$(CC) $(FLAGS) -c $< -o $@  -I $(INC_DIR) -D RET_ERROR=printf 

clean:
	@rm -f $(LIB_OBJS) $(SRC_OBJS)
	@echo "\n All objects files of printf is success 🎉${END}"

fclean : clean
	@rm -f $(OUT)
	@echo "\n Cleaning of printf is success 🎉${END}"

re : fclean all

.PHONY: all clean fclean re