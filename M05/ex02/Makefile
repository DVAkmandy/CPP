NAME	= Exercise02

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

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
		./Exercise02

.PHONY	:	all clean fclean run