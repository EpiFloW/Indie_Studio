//
// Context.hh for  in /home/beche/cpp_indie_studio/include
// 
// Made by beche
// Login   <francois.beche@epitech.eu>
// 
// Started on  Mon Jun 12 20:42:23 2017 beche
// Last update Thu Jun 15 11:50:37 2017 beche
//

#ifndef CONTEXT_HH_
# define CONTEXT_HH_

//#include <irrlicht.h>
# include "../irrlicht-1.8.4/include/irrlicht.h"
# include "../irrlicht-1.8.4/include/IrrlichtDevice.h"
//#include "driverChoice.h"

# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <list>


//# include "EventReceiver.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class				SAppContext
{
public:
  SAppContext(IGUIEnvironment               *guienv);
  ~SAppContext();
  void	popMenu();
  void	depopMenu();
  void	createOneButton(std::string name, int id, rect<s32> rec);
  IrrlichtDevice		*device;
  s32				counter;
  IGUIListBox*			listbox;
  IGUIEnvironment               *guienv;
  std::list<IGUIButton*>	menu;
  void				setImg(int id, std::string path);
  IGUIImage *img;
};  
#endif /* !PLAYER_HH_ */
