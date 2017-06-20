//
// Game.hh for  in /home/beche/cpp_indie_studio/include
// 
// Made by beche
// Login   <francois.beche@epitech.eu>
// 
// Started on  Wed Jun  7 18:56:21 2017 beche
// Last update Tue Jun 13 13:54:56 2017 
//

#ifndef GAME_HH_
# define GAME_HH_

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

# include "Base.hh"
# include "Map.hh"
# include "Player.hh"
# include "Save.hh"
# include "EventReceiver.hh"
# include "Context.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class	Game
{
public:
  Game(int, int);
  ~Game();
  
  Map				*CreateMap(int);
  void				createAllButton();
  void				deleteAllButton();
  void				createOneButton(std::string name, int id, rect<s32>);
  IrrlichtDevice		*device;
  IGUIEnvironment		*guienv; 
  Map				*map;
  Player			*player;
  Save				*save;
  SAppContext			*context;
  //  std::list<IGUIButton*>	button;		

};  
#endif /* !PLAYER_HH_ */
