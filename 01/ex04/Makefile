# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 12:30:07 by rduro-pe          #+#    #+#              #
#    Updated: 2025/10/27 14:01:37 by rduro-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -->┊( NAMES )┊.´-★☆★
NAME	=	sed_is_for_losers

# -->┊( COMMANDS AND FLAGS )┊.´-★☆★
CXX	=	c++
CFLAGS	=	-Wall -Wextra -Wno-unused -Werror -g -std=c++98
VAL		=	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s

# -->┊( DIRECTORIES )┊.´-★☆★
SRC_DIR	=	src
OBJ_DIR	=	obj

# -->┊( SOURCE AND OBJS )┊.´-★☆★
SOURCE	=	main.cpp

SRC		=	$(addprefix $(SRC_DIR)/, $(SOURCE))
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SOURCE:.cpp=.o))


# -->┊( COMPILATION RULES )┊.´-★☆★
all: $(NAME)

$(NAME): $(OBJS)
	$(M_COMOBJS)
	$(M_COM)
	@$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


# -->┊( EXECUTION RULES )┊.´-★☆★
exe: all
	./$(NAME) 1 2 3

rexe: re
	@echo "\n"
	./$(NAME)

val: all
	$(VAL) ./$(NAME)

# -->┊( TEST RULES )┊.´-★☆★
tests:
	mkdir -p test_folder
	cat Makefile > test_folder/makef
	man strcmp > test_folder/manstrcmp
	touch test_folder/untouchable
	chmod 000 test_folder/untouchable

testing: all tests
	@echo "\n$(BLK)-->┊$(GRN)  testing a normal file with a word it contains$(DEF)"
	(./$(NAME) test_folder/makef OBJ VERY_LONG_WORD_TO_SEE_THAT_SED_IS_WORKING; echo ""); 
	@echo "\n$(BLK)-->┊$(GRN)  testing replacing with empty$(DEF)"
	(./$(NAME) test_folder/manstrcmp " " ""; echo "");
	@echo "\n$(BLK)-->┊$(GRN)  testing non existing input file$(DEF)"
	(./$(NAME) '' " " ""; echo "");
	@echo "\n$(BLK)-->┊$(GRN)  testing file without permissions$(DEF)"
	(./$(NAME) test_folder/untouchable a b; echo "");
	@echo "\n$(BLK)-->┊$(GRN)  testing folder$(DEF)"
	(./$(NAME) test_folder a b; echo "");

rm_tests:
	rm -rf test_folder

# -->┊( STANDARD RULES )┊.´-★☆★
clean:
	$(M_REMOBJS)
	@rm -rf $(OBJ_DIR)

fclean: clean rm_tests
	$(M_REM)
	@rm -rf $(NAME)

re:	fclean all
	$(M_RE)

.PHONY: all clean fclean re rexe


# -->┊( COSMETICS )┊.´-★☆★

#-‵,┊ normal colors
DEF	=	\e[0;39m
BLK	=	\e[0;30m
BLU	=	\e[0;34m
MAG =	\e[0;35m
GRN	=	\e[0;32m

#-‵,┊ bold colors
BCYN	=	\e[1;36m
BBLU	=	\e[1;34m

#-‵,┊ background colors
CYNB	=	\e[46m
YELB	=	\e[43m
BLUB	=	\e[44m

#-‵,┊ messages
M_COMOBJS	= @echo "$(BLK)-->┊$(GRN)  Compiling: $(BBLU)$(NAME)/objs $(BLK)$(DEF)"
M_COM		= @echo "$(BLK)-->┊$(GRN)  Compiling: $(DEF)$(BLUB) $(NAME) $(BLK)$(DEF)\n"
M_REMOBJS	= @echo "$(BLK)-->┊$(BLU)  Removing: $(BBLU) $(NAME)/objs $(BLK)$(DEF)"
M_REM		= @echo "$(BLK)-->┊$(BLU)  Removing:  $(DEF)$(BLUB) $(NAME) $(BLK)$(DEF)\n"
M_RE		= @echo "$(BLK)... $(BLU)  Re Done   $(DEF)$(BCYN) ($(NAME) is ready !!)$(DEF)"