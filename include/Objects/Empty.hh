//
// Empty.hh for EMPTY in /home/zoukie/Desktop/epitech/cpp_indie_studio/include/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 19:48:04 2017 
// Last update Tue Jun 13 17:45:48 2017 
//

#ifndef EMPTY_HH_
# define EMPTY_HH_

# include "Objects.hh"
# include "Base.hh"
# include <ctime>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class		Empty : public Objects
{

private:

  
public:
  Objects		*_cont;

  Empty(float x, float y);
  ~Empty();

  virtual void			addObject(Objects *obj);
  Objects		*getCont() const;
  virtual void			SetBomb();
  float			x;
  float			y;
};

#endif
