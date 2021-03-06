# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sverschu <sverschu@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/19 17:16:57 by sverschu      #+#    #+#                  #
#    Updated: 2020/10/25 22:32:52 by sverschu      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# directories
SRC_D = src
OBJ_D = obj
INC_D = inc

# C source and header files
SRC =	$(SRC_D)/ft_atoi												\
		$(SRC_D)/ft_strtolower											\
		$(SRC_D)/ft_strtoupper											\
		$(SRC_D)/ft_strtok												\
		$(SRC_D)/ft_strstringlen										\
		$(SRC_D)/ft_strstring											\
		$(SRC_D)/ft_strtol												\
		$(SRC_D)/ft_strtoull											\
		$(SRC_D)/ft_bzero												\
		$(SRC_D)/ft_calloc												\
		$(SRC_D)/ft_realloc												\
		$(SRC_D)/ft_isupper												\
		$(SRC_D)/ft_islower												\
		$(SRC_D)/ft_isalnum												\
		$(SRC_D)/ft_isalpha												\
		$(SRC_D)/ft_isascii												\
		$(SRC_D)/ft_isdigit												\
		$(SRC_D)/ft_isprint												\
		$(SRC_D)/ft_isinset												\
		$(SRC_D)/ft_striseach											\
		$(SRC_D)/ft_itoa												\
		$(SRC_D)/ft_dtoa_sc1											\
		$(SRC_D)/ft_dtoa_sc2											\
		$(SRC_D)/ft_ltoa_base											\
		$(SRC_D)/ft_lltoa_base											\
		$(SRC_D)/ft_ultoa_base											\
		$(SRC_D)/ft_ulltoa_base											\
		$(SRC_D)/ft_ldtoa1												\
		$(SRC_D)/ft_ldtoa2												\
		$(SRC_D)/ft_memccpy												\
		$(SRC_D)/ft_memchr												\
		$(SRC_D)/ft_memcmp												\
		$(SRC_D)/ft_memdmp												\
		$(SRC_D)/ft_memdup												\
		$(SRC_D)/ft_memcpy												\
		$(SRC_D)/ft_memmove												\
		$(SRC_D)/ft_memset												\
		$(SRC_D)/ft_putchar_fd											\
		$(SRC_D)/ft_putwchar_fd											\
		$(SRC_D)/ft_putendl_fd											\
		$(SRC_D)/ft_putnbr_fd											\
		$(SRC_D)/ft_putstr_fd											\
		$(SRC_D)/ft_putwstr_fd											\
		$(SRC_D)/ft_strsplit											\
		$(SRC_D)/ft_split												\
		$(SRC_D)/ft_strchr												\
		$(SRC_D)/ft_strdup												\
		$(SRC_D)/ft_strjoin												\
		$(SRC_D)/ft_strjoin_multi										\
		$(SRC_D)/ft_strjoin_noreuse										\
		$(SRC_D)/ft_strlcat												\
		$(SRC_D)/ft_strlcpy												\
		$(SRC_D)/ft_strlen												\
		$(SRC_D)/ft_wcslen												\
		$(SRC_D)/ft_wclen												\
		$(SRC_D)/ft_strmapi												\
		$(SRC_D)/ft_strncmp												\
		$(SRC_D)/ft_strcmp												\
		$(SRC_D)/ft_strnstr												\
		$(SRC_D)/ft_strstr												\
		$(SRC_D)/ft_strrchr												\
		$(SRC_D)/ft_strtrim												\
		$(SRC_D)/ft_strsub												\
		$(SRC_D)/ft_substr												\
		$(SRC_D)/ft_tolower												\
		$(SRC_D)/ft_toupper												\
		$(SRC_D)/ft_array_destroy										\
		$(SRC_D)/ft_array_len											\
		$(SRC_D)/bubblesort_lexical										\
		$(SRC_D)/ft_strclen												\
		$(SRC_D)/ft_strcsetlen											\
		$(SRC_D)/ft_isspace												\
		$(SRC_D)/ft_issymbol											\
		$(SRC_D)/ft_strndup												\
		$(SRC_D)/ft_strnlen												\
		$(SRC_D)/ft_strstrip											\
		$(SRC_D)/ft_strnstrip											\
		$(SRC_D)/ft_strcount											\
		$(SRC_D)/ft_strncount											\
		$(SRC_D)/ft_strscan												\
		$(SRC_D)/ft_strnscan											\
		$(SRC_D)/ft_swap												\
		$(SRC_D)/ft_dynmem												\
		$(SRC_D)/lst_addback											\
		$(SRC_D)/lst_addfront											\
		$(SRC_D)/lst_peekback											\
		$(SRC_D)/lst_peekfront											\
		$(SRC_D)/lst_popback											\
		$(SRC_D)/lst_popfront											\
		$(SRC_D)/lst_destroy_item										\
		$(SRC_D)/lst_destroy											\

SRC := $(SRC:%=%.c)

INC =	$(INC_D)/libft.h

OBJ :=	$(SRC:$(SRC_D)/%.c=$(OBJ_D)/%.o)

# outputting
CC_LOG=./.cc.log
CC_ERROR=./.cc.error

NO_COLOR=\x1b[0m
OK_COLOR=\x1b[32;01m
ERROR_COLOR=\x1b[31;01m
WARN_COLOR=\x1b[33;01m

OK_STRING=$(OK_COLOR)[OK]$(NO_COLOR)
ERROR_STRING=$(ERROR_COLOR)[ERRORS]$(NO_COLOR)
WARN_STRING=$(WARN_COLOR)[WARNINGS]$(NO_COLOR)

ECHO=printf
CAT=cat

# compiler and linker
CC = clang
#CC = gcc

# compile flags
CC_FLAGS = -Werror -Wextra -Wall -pedantic -std=c99

# debugging or optimilization flags
CC_OPT_FLAGS = -Ofast													\
			   -march=native

ifeq ($(ASAN),1)
	CC_FLAGS += -fsanitize=address										\
				-fno-optimize-sibling-calls
	LD_FLAGS += -fsanitize=address										\
				 -fno-optimize-sibling-calls
	DEBUG = 1
endif

ifeq ($(DEBUG),1)
	CC_FLAGS += -g 														\
				-O0														\
				-fno-omit-frame-pointer									\
				-fstack-protector-all									\
				-DDEBUG
	LD_FLAGS += -g -O0 -DDEBUG
else
	CC_FLAGS += $(CC_OPT_FLAGS)
	LD_FLAGS += $(CC_OPT_FLAGS)
endif

# os variables
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
    OS = LINUX
    CC_FLAGS += -D LINUX -Wno-misleading-indentation
    LD_FLAGS +=
endif
ifeq ($(UNAME_S),Darwin)
    OS = OSX
    CC_FLAGS += -D OSX
    LD_FLAGS +=
endif

# make commands
all: $(NAME)


$(NAME): $(OBJ_D)  $(OBJ) $(INC)
	@$(ECHO) "Linking $(NAME)..."
	@ar -rcs $(NAME) $(OBJ) 2>$(CC_LOG) || touch $(CC_ERROR)
	@if test -e $(CC_ERROR); then											\
		$(ECHO) "$(ERROR_STRING)\n" && $(CAT) $(CC_LOG);					\
	elif test -s $(CC_LOG); then											\
		$(ECHO) "$(WARN_STRING)\n" && $(CAT) $(CC_LOG);						\
	else																	\
		$(ECHO) "$(OK_STRING)\n";											\
	fi
	@$(RM) -f $(CC_LOG) $(CC_ERROR)

$(OBJ_D):
	@mkdir -p $(OBJ_D)

$(OBJ): $(OBJ_D)/%.o: $(SRC_D)/%.c
	@$(ECHO) "Compiling $<..."
	@$(CC) $(CC_FLAGS) -I$(INC_D) -I$(SRC_D)/libft -c $< -o $@ 2>$(CC_LOG) 	\
		|| touch $(CC_ERROR)
	@if test -e $(CC_ERROR); then											\
		$(ECHO) "$(ERROR_STRING)\n" && $(CAT) $(CC_LOG);					\
	elif test -s $(CC_LOG); then											\
		$(ECHO) "$(WARN_STRING)\n" && $(CAT) $(CC_LOG);						\
	else																	\
		$(ECHO) "$(OK_STRING)\n";											\
	fi
	@$(RM) -f $(CC_LOG) $(CC_ERROR)

clean:
	@$(RM) $(OBJ)
	@$(RM) -r $(OBJ_D)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

norm:
	@norminette $(SRC) $(INC)

.PHONY = all clean fclean re
