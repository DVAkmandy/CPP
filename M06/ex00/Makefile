NAME	= Convert

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Convert.cpp

OBJ		= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $@

%.o:%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

run :
		./Convert 0
		./Convert nan
		./Convert 42.0f
#		./Convert -42
#		./Convert 42
#		./Convert 0.0f
#		./Convert -4.2f
#		./Convert 4.2f
#		./Convert 0.0
#		./Convert -4.2
#		./Convert 4.2
#		./Convert -inff
#		./Convert +inff
#		./Convert nanf
#		./Convert -inf
#		./Convert +inf


.PHONY	:	all clean fclean run