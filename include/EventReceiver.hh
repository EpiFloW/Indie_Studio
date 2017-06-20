//
// EventReceiver.hh for  in /home/beche/cpp_indie_studio/include
// 
// Made by beche
// Login   <francois.beche@epitech.eu>
// 
// Started on  Wed Jun  7 16:11:14 2017 beche
// Last update Thu Jun 15 14:12:37 2017 maxence.lauque
//

#ifndef EVENTRECEIVER_HH_
# define EVENTRECEIVER_HH_

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "Irrlicht.lib")
#endif

//#include <irrlicht.h>
#include "../irrlicht-1.8.4/include/irrlicht.h"
#include "../irrlicht-1.8.4/include/IrrlichtDevice.h"
//#include "driverChoice.h"

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <list>

#include "Context.hh"
//#include "Game.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

// struct SAppContext
// {
//   IrrlichtDevice *device;
//   s32                             counter;
//   IGUIListBox*    listbox;
//   std::list<IGUIButton*>        button;
// };

enum
  {
    GUI_ID_QUIT_BUTTON = 101,
    GUI_ID_PLAY_BUTTON,
    GUI_ID_CONFIG_BUTTON,
    GUI_ID_LOAD_BUTTON
  };

class	EventReceiver : public IEventReceiver
{
public:
  EventReceiver(SAppContext &context);
  ~EventReceiver();
  
  virtual bool OnEvent(const SEvent& event);
  void	deleteAllButton();
  void	addAllButton();
  int	launchGame = 0;
  virtual bool    IsKeyDown(EKEY_CODE keyCode) const;
private:
  SAppContext	&Context;
  bool    KeyIsDown[KEY_KEY_CODES_COUNT];
  

  //  IGUIButton* but;
  //Game	*game;
};  
#endif
