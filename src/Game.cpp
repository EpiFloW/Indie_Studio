//
// Game.cpp for  in /home/beche/cpp_indie_studio/src
// 
// Made by beche
// Login   <francois.beche@epitech.eu>
// 
// Started on  Wed Jun  7 18:55:46 2017 beche
// Last update Tue Jun 13 13:52:05 2017 
//

# include "../irrlicht-1.8.4/include/irrlicht.h"
# include "../irrlicht-1.8.4/include/IrrlichtDevice.h"

# include <list>

# include "../include/Game.hh"

Game::Game(int x, int y)
{
  this->device = createDevice(video::EDT_OPENGL, dimension2d<u32>(x, y),
			      16, false, false, false, 0);
  this->guienv = device->getGUIEnvironment();
  this->context = new SAppContext(this->guienv);
  // this->context.guienv = this->guienv;
}

Map*	Game::CreateMap(int a)
{
  this->map = new Map(a);
  this->map->GenerateMap();
  return (this->map);
}


void	Game::createAllButton()
{
  //this->context.button.push_back(this->guienv->addButton(rect<s32>(100,80,200,120), 0, GUI_ID_QUIT_BUTTON, L"QUIT"));

  
  //   this->context.button.push_back(this->guienv->addButton(rect<s32>(10,280,110,280 + 32), 0, GUI_ID_PLAY_BUTTON, L"PLAY"));
}

void	Game::deleteAllButton()
{
  // std::list<IGUIButton*>::iterator it;
  // for(it = this->context.button.begin(); it != this->context.button.end(); it++)
  //   {
  //     IGUIButton *b;
  //     b = *it;
  //     b->remove();
  //     //*it.remove();
  //   }
  
}

void	Game::createOneButton(std::string name, int id, rect<s32> rec)
{
  //  this->context.button.push_back(this->guienv->addButton(rec, 0, GUI_ID_QUIT_BUTTON, L"QUIT"));
}
