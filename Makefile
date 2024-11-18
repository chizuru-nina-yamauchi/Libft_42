#Some rules
# $ sign is used to reference variables in Makefile

# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c) # wildcard is a function that automatically collect files matching certain patterns

OBJ = $(SRC: .c=.o) # converts  all .c files in SRC to .o files
NAME = libft.a # final executable

# Rules
# target: dependencies
	# action
all: $(NAME) # compile all the library(libft.a)

# compilation and linking rule
$(NAME): $(OBJ) # creates the static library using ar rcs = Link all objects files into the final program
		ar rcs $(NAME) $(OBJ)

# rule to compile(build) .c to .o
%.o: %.c libft.h # Target: %.o(want to generate)   Prerequisite: %.c(want to compile)
		$(CC) $(CFLAGS) -c $< -o $@  # $<:Prerequisite file $@ target file
		
clean:  # removes objects files
	rm -f $(NAME)
	
fclean: clean #removes both objects files and the static library
	rm -f $(NAME)
	
re: fclean all #cleans and rebuilds everything
