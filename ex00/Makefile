NAME			=	./megaphone
CXX				=	@c++
CXXFLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98 -g3
SRC				=	./src/*.cpp
CPPFLAGS		=	-I./include/
OBJ_DIR			=	./.objs
# ------------------------------------------------------------------#
# makefile-rules  								  			#
# ------------------------------------------------------------------#
all				:	$(NAME)

$(NAME)			:	$(SRC)
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(SRC)
	@mkdir -p $(OBJ_DIR) && mv ./*.o $(OBJ_DIR)
	@$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $(NAME) $(OBJ_DIR)/*.o

clean			:
	@rm -rf $(OBJ_DIR) && rm -rf ./*.o

fclean			:	clean
	@rm -rf $(NAME)

re				:	fclean all

run				: 
	@reset && $(MAKE) -s re && $(NAME) && $(MAKE) -s fclean
