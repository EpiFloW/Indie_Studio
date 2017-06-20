//
// key.hpp for  in /home/bourre_a/Semestre_4/cpp/exemple
//
// Made by Bourreau Quentin
// Login   <quentin.bourreau@epitech.eu>
//
// Started on  Thu Jun  8 19:59:52 2017 Bourreau Quentin
// Last update Tue Jun 13 13:51:46 2017 Bourreau Quentin
//

#ifndef KEY_HH_
# define KEY_HH_
# include <iostream>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <termios.h>


class  Key
{
protected:
  int	left;
  int	right;
  int	up;
  int	down;
  int	bomb;
public:
  Key();
  ~Key();

  int	get_left();
  int	get_right();
  int	get_up();
  int	get_down();
  int	get_bomb();
  void	set_left(int);
  void	set_right(int);
  void	set_up(int);
  void	set_down(int);
  void	set_bomb(int);

  int	verif_if_key_is_possible(Key *p1, Key *p2, char c);
  char	init_buff_p1(Key *p1, int i);
  void	set_key_p1(Key *p1, int i, char c);
  char	init_buff_p2(Key *p2, int i);
  void	set_key_p2(Key *p2, int i, char c);
  void	print_key_who_want_change_p1(Key *p1, int i);
  void	print_key_change_p1(Key *p1, int i);
  void	print_key_who_want_change_p2(Key *p2, int i);
  void	print_key_change_p2(Key *p2, int i);

  int	change_key_p1(Key *p1, int i);
  int	change_key_p2(Key *p1, Key *p2, int i);

};

#endif
