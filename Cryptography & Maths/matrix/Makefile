# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 08:08:38 by dcaetano          #+#    #+#              #
#    Updated: 2024/12/11 15:20:04 by dcaetano         ###   ########.fr        #
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
TMPS_D       = tmps
MAND_D       = mandatory
BNUS_D       = bonus
# === EXTENSIONS ============================================================= #
CPP_EXT      = .cpp
HPP_EXT      = .hpp
TPP_EXT      = .tpp
OBJ_EXT      = .o
# === FILES ================================================================== #
CLSS         = Vector Matrix
HDRS         = $(CLSS) ft_$(NAME)
TMPL         = $(CLSS) vector matrix display general
ifeq ($(MAKECMDGOALS),bonus)
    INCS     = $(addprefix $(BNUS_D)/$(INCS_D)/, \
                           $(addsuffix $(HPP_EXT), \
                                       $(HDRS)))
    TMPS     = $(addprefix $(BNUS_D)/$(TMPS_D)/, \
                           $(addsuffix $(TPP_EXT), \
                                       $(TMPL)))
    MAIN_CPP = bonus$(CPP_EXT)
else
    INCS     = $(addprefix $(MAND_D)/$(INCS_D)/, \
                           $(addsuffix $(HPP_EXT), \
                                       $(HDRS)))
    TMPS     = $(addprefix $(MAND_D)/$(TMPS_D)/, \
                           $(addsuffix $(TPP_EXT), \
                                       $(TMPL)))
    MAIN_CPP = main$(CPP_EXT)
endif
MAIN_OBJ     = $(patsubst %$(CPP_EXT), \
                          $(OBJS_D)/%$(OBJ_EXT), \
                          $(MAIN_CPP))
# === FLAGS ================================================================== #
CPP_FLAGS    = -Wall -Wextra -Werror -std=c++2b -pedantic -g -v
MK_FLAGS     = -p
RM_FLAGS     = -rfv
# === PROJECT ================================================================ #
NAME         = matrix
# === RULES ================================================================== #
all: $(NAME)

bonus: $(NAME)

$(OBJS_D)/%$(OBJ_EXT): %$(CPP_EXT) $(INCS) $(TMPS)
	@$(MK) $(MK_FLAGS) $(dir $@)
	@$(CPP) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(MAIN_OBJ)
	@$(CPP) $(CPP_FLAGS) $(MAIN_OBJ) -o $(NAME)

clean:
	@$(RM) $(RM_FLAGS) $(OBJS_D)

fclean: clean
	@$(RM) $(RM_FLAGS) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
