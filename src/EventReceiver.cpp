//
// EventReceiver.cpp for  in /home/beche/cpp_indie_studio/src
// 
// Made by beche
// Login   <francois.beche@epitech.eu>
// 
// Started on  Wed Jun  7 16:20:21 2017 beche
// Last update Tue Jun 20 11:45:52 2017 maxence.lauque
//

# include "../irrlicht-1.8.4/include/irrlicht.h"
# include "../irrlicht-1.8.4/include/IrrlichtDevice.h"

#include "../include/EventReceiver.hh"
#include "../include/Game.hh"
#include "../include/Context.hh"

EventReceiver::EventReceiver(SAppContext &context) : Context(context) {
  this->launchGame = 0;
	for (u32 i=0; i<KEY_KEY_CODES_COUNT; ++i)
      KeyIsDown[i] = false;
}

EventReceiver::~EventReceiver() { }

bool	EventReceiver::OnEvent(const SEvent &event)
{
  if (event.EventType == EET_KEY_INPUT_EVENT)
    KeyIsDown[event.KeyInput.Key] = event.KeyInput.PressedDown;
  if (event.EventType == EET_GUI_EVENT)
    {
      s32 id = event.GUIEvent.Caller->getID();
      IGUIEnvironment* env = Context.device->getGUIEnvironment();
      
      switch(event.GUIEvent.EventType)
	{
	case EGET_BUTTON_CLICKED:
	  switch(id)
	    {
	    case GUI_ID_QUIT_BUTTON:
	      Context.device->closeDevice();
	      std::cout << "On quitte " << std::endl;
	      return true;
	    case GUI_ID_PLAY_BUTTON:
	      std::cout << "GO TO PLAY" << std::endl;
	      this->launchGame = 1;
	      //	      this->deleteAllButton();
	      this->Context.depopMenu();
	    default:
	      return false;
	    }
	  break;
	case EGET_FILE_SELECTED:
	  {
	    // show the model filename, selected in the file dialog
	    IGUIFileOpenDialog* dialog =
	      (IGUIFileOpenDialog*)event.GUIEvent.Caller;
	    Context.listbox->addItem(dialog->getFileName());
	  }
	  break;
	default:
	  break;
	}
    }
  return false;
}

void    EventReceiver::deleteAllButton()
{

  // std::list<IGUIButton*>::iterator it;
  // for(it = this->Context.button.begin(); it != this->Context.button.end(); it++)
  //   {
  //     IGUIButton *b;
  //     b = *it;
  //     b->remove();
  //     //*it.remove();
  //   }
}

// void	EventReceiver::addAllButton()
// {
//   this->Context.button->push(this->Context.g->guienv->addButton(rect<s32>(100,80,200,120), 0, GUI_ID_QUIT_BUTTON, L"QUIT"));
//   //  this->Context->button.push(g->guienv->addButton(rect<s32>(10,280,110,280 + 32), 0, GUI_ID_PLAY_BUTTON, L"PLAY"));
// }

bool EventReceiver::IsKeyDown(EKEY_CODE keyCode) const
{
  return KeyIsDown[keyCode];
}
