##
## Makefile for  in /home/maison_f/Epitech/cpp_indie_studio
## 
## Made by Florian Maisonnave
## Login   <maison_f@epitech.net>
## 
## Started on  Tue May  9 17:21:44 2017 Florian Maisonnave
##

SRC		=	main.cpp			\
			src/Map.cpp			\
			src/Player.cpp			\
			src/Save.cpp			\
			src/Objects/Breakable.cpp	\
			src/Objects/Empty.cpp		\
			src/Objects/Objects.cpp		\
			src/Objects/Wall.cpp		\
			src/Objects/BRange.cpp		\
			src/Objects/BBomb.cpp		\
			src/Objects/BVitesse.cpp	\
			src/Objects/MVitesse.cpp	\
			src/Game.cpp			\
			src/Misc/Logs.cpp		\
			src/EventReceiver.cpp		\
			src/Keys/key.cpp		\
			src/Keys/key_p1.cpp		\
			src/Keys/key_p2.cpp		\
			src/Context.cpp			\

CXXFLAGS	=	-lIrrlicht -lGL -lXxf86vm -lXext -lX11 -lXcursor -std=c++11 -g3

CPPFLAGS	=	-Iinclude -Iinclude/Objects -Iinclude/Misc -Iinclude/Keys

NAME		=	indie_test

CC		=	g++

OBJ		=	$(SRC:.cpp=.o)

$(NAME)		:	$(OBJ)
			@$(CC) $(OBJ) -o $(NAME) $(CXXFLAGS)
			@$(CC) $(OBJ) -o indie.exe $(CXXFLAGS)

all		:	$(NAME)
			@echo $(SRC)

clean		:
			rm -rf $(OBJ)

fclean		:	clean
			rm -rf $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
