/*
** attributes_char.h for attribute in /home/oem/home/cpp_indie_studio/Maxence
** 
** Made by maxence.lauque
** Login   <lauque_m@epitech.net>
** 
** Started on  Mon May 29 16:10:24 2017 maxence.lauque
// Last update Tue Jun 20 12:20:36 2017 maxence.lauque
*/

#ifndef PLAYER_HH_
# define PLAYER_HH_

# include "Objects/Objects.hh"
# include "Characters.hh"
# include "key.hh"
# include "key_p1.hh"
# include "key_p2.hh"
# include "Map.hh"
# include "Base.hh"

# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>


class	Player : public Characters
{
public:
  Player(int id_player, Map *Map, float x, float y);
  Player();
  ~Player();
  virtual void	DropBomb();
  virtual int	get_IdPlayer()const;
  virtual void	set_IdPlayer(int id_player);
  virtual float	get_x()const;
  virtual void	set_x(float x);
  virtual float	get_y()const;
  virtual void	set_y(float y);
  virtual bool	get_life()const;
  virtual void	set_life(bool life);
  virtual int	get_nbBombs()const;
  virtual void	set_nbBombs(int nb_boms);
  virtual int	get_range()const;
  virtual void	set_range(int range);
  virtual int	get_speed()const;
  virtual void	set_speed(int speed);
  virtual void	go_down();
  virtual void	go_up();
  virtual void	go_left();
  virtual void	go_right();
  void  SetPosition(float x, float y, std::string op);

  Player	&operator=(Player const &old);
  Key	key1;
  Key	key2;
private:

  size_t	_size_map;

  std::vector< std::vector<Objects *> > _map;
  float		_x;
  float		_y;
  int		_life;
  int		_id_player;
  int		_nb_bombs;
  int		_range;
  int		_speed;
  int		_bomb_used;


  scene::IAnimatedMeshSceneNode *_nodeAnim;
  scene::ISceneCollisionManager *_col;
  
};

#endif /* !PLAYER_HH_ */
