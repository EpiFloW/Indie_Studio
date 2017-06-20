//
// objects.hh for objects in /home/zoukie/epitech/cpp_indie_studio/include
// 
// Made by zoukie
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Wed May 10 14:43:51 2017 zoukie
// Last update Tue Jun 13 17:41:19 2017 
//

#ifndef OBJECTS_HH_
# define OBJECTS_HH_

# include "../../irrlicht-1.8.4/include/irrlicht.h"
# include "../../irrlicht-1.8.4/include/IrrlichtDevice.h"
# include "Objects.hh"
# include "Base.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class		Objects
{

private:

public:
  Objects *_cont;
  Objects(float x, float y);
  ~Objects();
  int	type;

  ISceneManager*		_smgr;
  virtual void	SetAff();
  virtual void	addObject(Objects *obj);
  virtual void	Explode();
  virtual void SetBomb();  
  float                     x;
  float                     y;
};
#endif
