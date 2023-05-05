
NAME = libft.a

SRC_DIR = .
SRC_FILES = $(addprefix $(SRC_DIR)/, $(SRC)) 
SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

SRC_BONUS_FILES = $(addprefix $(SRC_DIR)/, $(SRC_BONUS))
SRC_BONUS =	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

OBJ_DIR = .
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
OBJ_BONUS_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_BONUS_FILES))
# patsubst (Replace strings) - $(patsubst old_value, new_value, text)

INC_FILES = libft.h \

# --------------------------- COMPILERS AND FLAGS --------------------------- #

CC = gcc -g
CFLAGS = -Wall -Wextra -Werror

# Compiler to generate de final file (.a)
GENERATE_LIB = ar rcs
# ar - Utility for create an maintain library files
# r - Replace de old library by the new one created with your new files.
# c - Create a new library if it did not exist.
# s - Sort the library index for access faster to the functions.
#	- If u use 's' is not necessary use ranlib

# -------------------------- MAKEFILE INSTRUCTIONS --------------------------- #

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJ_FILES) $(INC_FILES)
	$(GENERATE_LIB) $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(OBJ_BONUS_FILES)
	$(GENERATE_LIB) $(NAME) $(OBJ_BONUS_FILES)

clean:
	rm -fr $(SRC_DIR)/*.o *.d

fclean: clean
	rm -f $(NAME)

re: fclean all
