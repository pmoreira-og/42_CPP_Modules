# === COLORS ===
RED=\033[1;31m
YELLOW=\033[1;33m
ORANGE=\033[1;38;5;214m
GREEN=\033[1;32m
CYAN=\033[1;36m
RESET=\033[0m

# === NAME ===
NAME = ClapTrap

# === VALGRIND FLAGS ===
VAL = valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes \
	--track-origins=yes

# === COMPILATION ===
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -I$(INCLUDES) -g
OBJDIR = build

# === INCLUDES ===
INCLUDES = include/

# === SRC PATH ===
SRC = src

# === MODULE DIRS ===
DIR_GENERAL = .

# === FILES ===
SRC_GENERAL = main.cpp ClapTrap.cpp

SRCS_DIR =	$(addprefix $(SRC)/, $(addprefix $(DIR_GENERAL)/, $(SRC_GENERAL)))

OBJS_DIR = $(addprefix $(OBJDIR)/, $(SRCS_DIR:$(SRC)/%.cpp=%.o))

# === RULES ===
all: $(NAME)

$(NAME): $(OBJS_DIR)
	@echo "$(YELLOW)Compiling $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS_DIR) -o $(NAME)
	@echo "$(GREEN)Done!$(RESET)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRC)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing objects$(RESET)"
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "$(RED)Removing $(NAME)$(RESET)"
	@rm -rf $(NAME)

re: fclean all
	@echo "$(ORANGE)Re-Done!!$(RESET)"

val: re
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re val