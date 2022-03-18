NAME	= megaphone

CC		= c++

SRCS	= megaphone.cpp

CFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ		= $(SRCS:.cpp=.o)

all : $(NAME)
NAME : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $@

%.o:%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re :	fclean all

run : re
		./$(NAME) "shhhhh... I think the students are asleep..."
		./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
		./$(NAME)

.PHONY:    all clean fclean re run