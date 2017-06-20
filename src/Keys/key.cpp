//
// key.cpp for  in /home/bourre_a/Semestre_4/cpp/exemple
//
// Made by Bourreau Quentin
// Login   <quentin.bourreau@epitech.eu>
//
// Started on  Thu Jun  8 19:27:52 2017 Bourreau Quentin
// Last update Tue Jun 13 13:53:53 2017 Bourreau Quentin
//
// #include "key.hh"
#include "key_p1.hh"
#include "key_p2.hh"
#include "Player.hh"

#define KEY_UP 0
#define KEY_DOWN 1
#define KEY_LEFT 2
#define KEY_RIGHT 3
#define KEY_BOMB 4


int     Key::get_left()
{
  return (this->left);
}

int     Key::get_right()
{
  return (this->right);
}

int     Key::get_up()
{
  return (this->up);
}

int     Key::get_down()
{
  return (this->down);
}

void    Key::set_left(int a)
{
  this->left = a;
}

int     Key::get_bomb()
{
  return (this->bomb);
}

void    Key::set_bomb(int a)
{
  this->bomb = a;
}


void    Key::set_right(int a)
{
  this->right =  a;
}

void    Key::set_up(int a)
{
  this->up = a;
}

void    Key::set_down(int a)
{
  this->down = a;
}

int		Key::verif_if_key_is_possible(Key *p1, Key *p2, char c)
{
  if (p1->get_up() == c)
    return (1);
  if (p1->get_down() == c)
    return (1);
  if (p1->get_left() == c)
    return (1);
  if (p1->get_right() == c)
    return (1);
  if (p1->get_bomb() == c)
    return (1);
  if (p2 != NULL)
    {
      if (p2->get_up() == c)
	return (1);
      if (p2->get_down() == c)
	return (1);
      if (p2->get_left() == c)
	return (1);
      if (p2->get_right() == c)
	return (1);
      if (p2->get_bomb() == c)
	return (1);
    }
      return (0);
}


//  VALEUR POUR CHANGE_KEY
// 0 = UP
// 1 = DOWN
// 2 = LEFT
// 3 = RIGHT


// PLAYER 1

char		Key::init_buff_p1(Key *player_1, int i)
{
  if (i == KEY_UP)
    return (player_1->get_up());
  if (i == KEY_DOWN)
    return (player_1->get_down());
  if (i == KEY_LEFT)
    return (player_1->get_left());
  if (i == KEY_RIGHT)
    return (player_1->get_right());
  if (i == KEY_BOMB)
    return (player_1->get_bomb());
  return (0);
}

void		Key::set_key_p1(Key *player_1, int i, char c)
{
 if (i == KEY_UP)
    player_1->set_up(c);
  if (i == KEY_DOWN)
    player_1->set_down(c);
  if (i == KEY_LEFT)
    player_1->set_left(c);
  if (i == KEY_RIGHT)
    player_1->set_right(c);
  if (i == KEY_BOMB)
    player_1->set_bomb(c);
}

void		Key::print_key_who_want_change_p1(Key *player_1, int i)
{
  if (i == KEY_UP)
    std::cout << "You want to change the commande up [" << (char)player_1->get_up() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_DOWN)
    std::cout << "You want to change the commande down [" << (char)player_1->get_down() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_LEFT)
    std::cout << "You want to change the commande left [" << (char)player_1->get_left() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_RIGHT)
    std::cout << "You want to change the commande right [" << (char)player_1->get_right() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_BOMB)
    std::cout << "You want to change the commande bomb [" << (char)player_1->get_bomb() << "]" << std::endl << "Press the key to change" << std::endl;
}

void		Key::print_key_change_p1(Key *player_1, int i)
{
  if (i == KEY_UP)
    std::cout << "The new key_up [" <<  (char)player_1->get_up() << "]" << std::endl;
  if (i == KEY_DOWN)
    std::cout << "The new key_down [" <<  (char)player_1->get_up() << "]" << std::endl;
  if (i == KEY_LEFT)
    std::cout << "The new key_left [" <<  (char)player_1->get_up() << "]" << std::endl;
  if (i == KEY_RIGHT)
    std::cout << "The new key_right [" <<  (char)player_1->get_up() << "]" << std::endl;
  if (i == KEY_BOMB)
    std::cout << "The new key_bomb [" <<  (char)player_1->get_up() << "]" << std::endl;
}


// PLAYER 2

char		Key::init_buff_p2(Key *player_2, int i)
{
 if (i == KEY_UP)
    return (player_2->get_up());
  if (i == KEY_DOWN)
    return (player_2->get_down());
  if (i == KEY_LEFT)
    return (player_2->get_left());
  if (i == KEY_RIGHT)
    return (player_2->get_right());
  if (i == KEY_BOMB)
    return (player_2->get_bomb());
  return (0);
}

void		Key::set_key_p2(Key *player_2, int i, char c)
{
 if (i == KEY_UP)
    player_2->set_up(c);
  if (i == KEY_DOWN)
    player_2->set_down(c);
  if (i == KEY_LEFT)
    player_2->set_left(c);
  if (i == KEY_RIGHT)
    player_2->set_right(c);
  if (i == KEY_BOMB)
    player_2->set_bomb(c);
}


void		Key::print_key_who_want_change_p2(Key *player_2, int i)
{
  if (i == KEY_UP)
    std::cout << "You want to change the commande up [" << (char)player_2->get_up() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_DOWN)
    std::cout << "You want to change the commande down [" << (char)player_2->get_down() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_LEFT)
    std::cout << "You want to change the commande left [" << (char)player_2->get_left() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_RIGHT)
    std::cout << "You want to change the commande right [" << (char)player_2->get_right() << "]" << std::endl << "Press the key to change" << std::endl;
  if (i == KEY_BOMB)
    std::cout << "You want to change the commande bomb [" << (char)player_2->get_bomb() << "]" << std::endl << "Press the key to change" << std::endl;
}

void		Key::print_key_change_p2(Key *player_2, int i)
{
  if (i == KEY_UP)
    std::cout << "The new key_up [" <<  (char)player_2->get_up() << "]" << std::endl;
  if (i == KEY_DOWN)
    std::cout << "The new key_down [" <<  (char)player_2->get_up() << "]" << std::endl;
  if (i == KEY_LEFT)
    std::cout << "The new key_left [" <<  (char)player_2->get_up() << "]" << std::endl;
  if (i == KEY_RIGHT)
    std::cout << "The new key_right [" <<  (char)player_2->get_up() << "]" << std::endl;
  if (i == KEY_BOMB)
    std::cout << "The new key_bomb [" <<  (char)player_2->get_bomb() << "]" << std::endl;
}

int		Key::change_key_p1(Key *player_1, int i)
{
  struct termios	tios;
  tcflag_t		old_c_lflag;
  char			buff;

  buff = init_buff_p1(player_1, i);
  while (verif_if_key_is_possible(player_1, NULL, buff))
    {
      print_key_who_want_change_p1(player_1, i);
      tcgetattr(STDIN_FILENO, &tios);
      old_c_lflag = tios.c_lflag;
      tios.c_lflag &= ~ICANON;
      tcsetattr(STDIN_FILENO, TCSANOW, &tios);
      read(STDIN_FILENO, &buff, 1);
      tios.c_lflag = old_c_lflag;
      tcsetattr(STDIN_FILENO, TCSANOW, &tios);
    }
  set_key_p1(player_1, i, buff);
  print_key_change_p1(player_1, i);
  return (0);
}

int		Key::change_key_p2(Key *player_1, Key *player_2, int i)
{
  struct termios	tios;
  tcflag_t		old_c_lflag;
  char			buff;

  buff = init_buff_p2(player_2, i);
  while (verif_if_key_is_possible(player_1, player_2, buff))
    {
      print_key_who_want_change_p2(player_2, i);
      tcgetattr(STDIN_FILENO, &tios);
      old_c_lflag = tios.c_lflag;
      tios.c_lflag &= ~ICANON;
      tcsetattr(STDIN_FILENO, TCSANOW, &tios);
      read(STDIN_FILENO, &buff, 1);
      tios.c_lflag = old_c_lflag;
      tcsetattr(STDIN_FILENO, TCSANOW, &tios);
    }
  set_key_p2(player_2, i, buff);
  print_key_change_p2(player_2, i);
  return (0);
}

int		        key(Player *player1, Player *player2)
{
  struct termios	tios;
  tcflag_t		old_c_lflag;
  char			buff;

  tcgetattr(STDIN_FILENO, &tios);
  old_c_lflag = tios.c_lflag;
  tios.c_lflag &= ~ICANON;
  tcsetattr(STDIN_FILENO, TCSANOW, &tios);
  while (true)
    {
      read(STDIN_FILENO, &buff, 1);
      if (27 == buff)
	break;
      if (player1->key1.get_up() == buff)
	player1->go_up();
	// std::cout << "P1 Avancer" << std::endl;
      else if (player1->key1.get_down() ==  buff)
	player1->go_down();
	// std::cout << "P1 Reculer" << std::endl;
      else if (player1->key1.get_left() ==  buff)
	player1->go_left();
	// std::cout << "P1 Gauche" << std::endl;
      else if (player1->key1.get_right() == buff)
	player1->go_right();
	// std::cout << "P1 Droite" << std::endl;
      else if (player1->key1.get_bomb() == buff)
	player1->DropBomb();
      if (player2 != NULL)
	{
	  if (player2->key2.get_up() == buff)
	    player2->go_up();
	  // std::cout << "P1 Avancer" << std::endl;
	  else if (player2->key2.get_down() ==  buff)
	    player2->go_down();
	  // std::cout << "P1 Reculer" << std::endl;
	  else if (player2->key2.get_left() ==  buff)
	    player2->go_left();
	  // std::cout << "P1 Gauche" << std::endl;
	  else if (player2->key2.get_right() == buff)
	    player2->go_right();
	  // std::cout << "P1 Droite" << std::endl;
	  else if (player2->key1.get_bomb() == buff)
	    player2->DropBomb();
	}
      fflush(stdout);
    }
  tios.c_lflag = old_c_lflag;
  tcsetattr(STDIN_FILENO, TCSANOW, &tios);
  return 0;
}

Key::Key()
{
  this->up = 0;
  this->left = 0;
  this->down = 0;
  this->right = 0;
}
Key::~Key()
{
}
