//
// Score.cpp for Project-Master in /home/vatout/epitech/cpp_indie_studio/src/Objects
// 
// Made by vatout_a
// Login   <artem.vatoutine@epitech.eu@epitech.eu>
// 
// Started on  Mon May 29 17:47:49 2017 vatout_a
// Last update Thu Jun 15 16:46:02 2017 maxence.lauque
//

# include "Score.hh"

Score::Score(int idPlayer) : Player(idPlayer)
{
  _idPlayer = idPlayer;
  _score = 200;
}

Score::~Score()
{
}

void		Score::calculScore()
{
  addScore(2);
}

void		Score::addScore(int score)
{
  _score += score;
}

int		Score::getScore()
{
  return (_score);
}
