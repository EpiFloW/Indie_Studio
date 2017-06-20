//
// Context.cpp for  in /home/beche/cpp_indie_studio/src
// 
// Made by beche
// Login   <francois.beche@epitech.eu>
// 
// Started on  Mon Jun 12 20:49:19 2017 beche
// Last update Thu Jun 15 16:58:21 2017 maxence.lauque
//

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

#include "Base.hh"
#include "EventReceiver.hh"




#include "Context.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;


#include <Context.hh>

SAppContext::SAppContext(IGUIEnvironment               *guienv) :guienv(guienv)
{
  
}

SAppContext::~SAppContext()
{

}



void	SAppContext::popMenu()
{

  IGUIButton* b;
  this->img = this->guienv->addImage(driver->getTexture("./media/Background_opt2.png"), position2d<int>(435,-75));
 
  b = this->guienv->addButton(rect<s32>(747,500,1172,550 + 32), 0,
			      GUI_ID_PLAY_BUTTON,L"");
  this->menu.push_back(b);
  b->setImage(driver->getTexture("imgs/PLAY.png"));

  b = this->guienv->addButton(rect<s32>(747, 600,1172,650 + 32), 0,
			      GUI_ID_CONFIG_BUTTON, L"");
  this->menu.push_back(b);
  b->setImage(driver->getTexture("imgs/OPTIONS.png"));
  b = this->guienv->addButton(rect<s32>(747, 700,1172,750 + 32), 0,
			    GUI_ID_LOAD_BUTTON, L"");
  this->menu.push_back(b);
  b->setImage(driver->getTexture("imgs/CONTINUE.png"));
  b =  this->guienv->addButton(rect<s32>(747,800,1172,850 + 32), 0,
			  GUI_ID_QUIT_BUTTON, L"");
  this->menu.push_back(b);
  b->setImage(driver->getTexture("imgs/EXIT.png"));






  // this->menu.push_back(this->guienv->addButton(rect<s32>(10,280,110,280 + 32), 0,
  // 						 GUI_ID_PLAY_BUTTON,L"PLAY"));
  // this->menu.push_back(this->guienv->addButton(rect<s32>(100,80,200,120), 0,
  // 							 GUI_ID_QUIT_BUTTON, L"QUIT"));
  // this->menu.push_back(this->guienv->addButton(rect<s32>(200, 200,250,250), 0,
  // 						 GUI_ID_CONFIG_BUTTON, L"CONFIG"));
  // this->menu.push_back(this->guienv->addButton(rect<s32>(300, 300,350,350), 0,
  // 						   GUI_ID_LOAD_BUTTON, L"CHARGER"));



  // core::list<IGUIElement*>::Iterator it;

  // for (it = Children.begin(); it != Children.end(); ++it)
  //   {
  //     if (ID == (*it)->getID())
  // 	{
  // 	  gui::IGUIButton *tmp = reinterpret_cast<gui::IGUIButton *>((*it));
  // 	  tmp->setImage(_driver->getTexture(path.c_str()));
  // 	  tmp->setMaxSize(core::dimension2du(200, 70));
  // 	  tmp->setScaleImage(true);
  // 	  return;
  // 	}
  //   }

   //setButtonImage(GUI_ID_PLAY_BUTTON, "imgs/PLAY.png");
}

void	SAppContext::depopMenu()
{
  std::list<IGUIButton*>::iterator it;
  for(it = this->menu.begin(); it != this->menu.end(); it++)
    {
      IGUIButton *b;
      b = *it;
      b->remove();
      //*it.remove();
    }  
  this->img->remove();
}

void	SAppContext::createOneButton(std::string name, int id, rect<s32> rec)
{
  //  this->button.push_back(this->guienv->addButton(rec, 0, GUI_ID_QUIT_BUTTON, L"QUIT")); 
}


void	SAppContext::setImg(int id, std::string path)
{
  // std::list<IGUIButton*>::iterator it;
  // for(it = this->menu.begin(); it != this->menu.end(); it++)
  //   {
  //     IGUIButton *b;
  //     b = *it;
  //     if (b->getId() == id)
  // 	{
  // 	  b->setImage(driver->getTexture("imgs/PLAY.png"));
  // 	}
  //     // b->setMaxSize(core::dimension2du(200, 70));
  //     // ->setScaleImage(true);
      
  //   }  

}
