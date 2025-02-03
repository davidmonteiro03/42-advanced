# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 08:08:38 by dcaetano          #+#    #+#              #
#    Updated: 2025/02/03 09:10:22 by dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# === COMMANDS =============================================================== #

CPP          = c++
MK           = mkdir
RM           = rm
AR_RCS       = ar rcs

# === DIRECTORIES ============================================================ #

INCS_D       = includes
SRCS_D       = srcs
OBJS_D       = objs

# === EXTENSIONS ============================================================= #

CPP_EXT      = .cpp
HPP_EXT      = .hpp
OBJ_EXT      = .o

# === FILES ================================================================== #

TSTS         =
CLSS         =
CPPS         =
HDRS         = $(CLSS) ft_$(NAME) $(TSTS)
INCS         = $(addprefix $(INCS_D)/, \
                           $(addsuffix $(HPP_EXT), \
                                       $(HDRS)))
SRCS         = $(addprefix $(SRCS_D)/, \
                           $(addsuffix $(CPP_EXT), \
                                       $(CPPS)))
OBJS         = $(patsubst $(SRCS_D)/%$(CPP_EXT), \
                          $(OBJS_D)/$(SRCS_D)/%$(OBJ_EXT), \
                          $(SRCS))
MAIN_CPP     = main$(CPP_EXT)

MAIN_OBJ     = $(patsubst %$(CPP_EXT), \
                          $(OBJS_D)/%$(OBJ_EXT), \
                          $(MAIN_CPP))

# === FLAGS ================================================================== #

CPP_FLAGS    = -Wall -Wextra -Werror -std=c++2a -pedantic -g
MK_FLAGS     = -p
RM_FLAGS     = -rfv

# === PROJECT ================================================================ #

NAME         = ready_set_boole
LIB          = $(NAME).a

# === RULES ================================================================== #

all: $(NAME)

$(OBJS_D)/%$(OBJ_EXT): %$(CPP_EXT) $(INCS)
	@$(MK) $(MK_FLAGS) $(dir $@)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

$(OBJS_D)/$(SRCS_D)/%$(OBJ_EXT): $(SRCS_D)/%$(CPP_EXT) $(INCS)
	@$(MK) $(MK_FLAGS) $(dir $@)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

$(LIB): $(OBJS)
	@$(AR_RCS) $(LIB) $(OBJS)

$(NAME): $(LIB) $(MAIN_OBJ)
	$(CPP) $(CPP_FLAGS) $(MAIN_OBJ) $(LIB) -o $(NAME)

clean:
	@$(RM) $(RM_FLAGS) $(OBJS_D)

fclean: clean
	@$(RM) $(RM_FLAGS) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
