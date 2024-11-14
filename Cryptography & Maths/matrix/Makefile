# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 17:20:27 by dcaetano          #+#    #+#              #
#    Updated: 2024/11/14 17:28:12 by dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# === COMMANDS =============================================================== #
CPP       = c++
MK        = mkdir
RM        = rm
# === DIRECTORIES ============================================================ #
INCS_D    = includes
OBJS_D    = objs
# === EXTENSIONS ============================================================= #
CPP_EXT   = .cpp
HPP_EXT   = .hpp
OBJ_EXT   = .o
# === FILES ================================================================== #
CLSS      = Vector
INCS      = $(addprefix $(INCS_D)/, \
                        $(addsuffix $(HPP_EXT), \
                                    $(CLSS)))
MAIN_CPP  = main$(CPP_EXT)
MAIN_OBJ  = $(patsubst %$(CPP_EXT), \
                       $(OBJS_D)/%$(OBJ_EXT), \
                       $(MAIN_CPP))
# === FLAGS ================================================================== #
CPP_FLAGS = -Wall -Wextra -Werror -std=c++2b -pedantic
MK_FLAGS  = -p
RM_FLAGS  = -rfv
# === PROJECT ================================================================ #
NAME = matrix
# === RULES ================================================================== #
all: $(NAME)

$(OBJS_D)/%$(OBJ_EXT): %$(CPP_EXT) $(INCS)
	@$(MK) $(MK_FLAGS) $(dir $@)
	@$(CPP) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(MAIN_OBJ)
	@$(CPP) $(CPP_FLAGS) -I$(INCS_D) $(MAIN_OBJ) -o $(NAME)

clean:
	@$(RM) $(RM_FLAGS) $(OBJS_D)

fclean: clean
	@$(RM) $(RM_FLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
