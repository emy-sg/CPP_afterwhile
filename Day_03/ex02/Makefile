#	Compilation steps:
#		1- Preprocessing: replace the Macros and Header files in the Source file(.c).
#		2- Obj files: Compile and transform the Source files to Binary files.
#		3- Linking: link all the Object files(.o) to create One executable binary.
#

#	|Preprocessing|     ----->    |Object files|     ------>     |Linking|   -----> .exec

#$(CC)	-E $(SRCS)					-c $(SRCS)									-o $(NAME)

#		 .c								.o										./execFile

NAME = Aaaaand..._OPEN

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   ClapTrap.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: Aaaaand..._OPEN \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	
clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
