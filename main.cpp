//
// main.cpp for main in /home/zoukie/Desktop/epitech/cpp_indie_studio
//
// Made by
// Login   <romain.gadrat@epitech.eu>
//
// Started on  Wed May 24 19:33:02 2017
// Last update Tue Jun 20 12:08:48 2017 maxence.lauque
//

# include "irrlicht-1.8.4/include/irrlicht.h"
# include "irrlicht-1.8.4/include/IrrlichtDevice.h"
# include "Base.hh"
# include "Map.hh"
# include "Logs.hh"
# include "Player.hh"
# include "Save.hh"
# include "Game.hh"

# include "EventReceiver.hh"

# include <exception>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;



#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

IVideoDriver* driver;
ISceneManager* smgr;
Logs *logs  = new Logs();

int     main()
{
  Game *g = new Game(1920, 1080);

  size_t	i;
  size_t	j;
  i = 0;
  j = 0;

  try {
    if (!g->device)
      return 1;
    g->device->setWindowCaption(L"Indie Studio - Bomberman");
    // g->guienv->addStaticText(L"Hello World! This is the EPITECH Bomberman!", rect<s32>(10,10,260,22), true);

    driver = g->device->getVideoDriver();
    smgr = g->device->getSceneManager();

    smgr->addCameraSceneNode(0, vector3df(10,10,-21), vector3df(10,10,21));

    /** DEBUT DES BOUTONS **/
    logs->Out("Main", "Initialisation des boutons.");


    EventReceiver receiver(*g->context);
    g->device->setEventReceiver(&receiver);

    // g->context.button.push_back(g->guienv->addButton(rect<s32>(100,80,200,120), 0, GUI_ID_QUIT_BUTTON, L"QUIT"));
    // g->context.button.push_back(g->guienv->addButton(rect<s32>(10,280,110,280 + 32), 0, GUI_ID_PLAY_BUTTON, L"PLAY"));
    // g->createAllButton();
    // g->createOneButton("test", 0, rect<s32>(100,80,200,120));
    g->context->popMenu();
    g->context->device = g->device;
    g->context->counter = 0;



    /***** FIN DES BOUTONS ****/


    g->CreateMap(20);


    /*** parti de maxence à revoir avec le load des data */
    logs->Out("Main", "Initialisation des Players.");

    /*Player p1(1, g->map, 1, 1);
      Player p2(2, g->map, 18, 18);

    std::list<Player> tab_player = {p1,p2};


    g->save = new Save(g->map, tab_player);
    g->save->Save_game(g->map,tab_player);*/

    /*****************************************************/
    
    Player p1(1, g->map, 1, 1);
    Player p2(2, g->map, 18, 18);

    logs->Out("Main", "Initialisation du device.");   
    g->map->fill_ground();
    while(g->device->run())
      {
  	driver->beginScene(true, true, SColor(10,10,10,10));
  	smgr->drawAll();
  	if (receiver.launchGame == 1)
  	  {
	    std::list<Player> tab_player = {p1,p2};
	    g->save = new Save(g->map, tab_player);
	    g->save->Save_game(g->map,tab_player);
	    g->map->fillMap();
  	  }
        if(receiver.IsKeyDown(KEY_KEY_Z)){
          p1.SetPosition(0, 0.2, "+");
        }
        else if(receiver.IsKeyDown(KEY_KEY_S)){
          p1.SetPosition(0, 0.2, "-");
        }
        if(receiver.IsKeyDown(KEY_KEY_Q)){
          p1.SetPosition(0.2, 0, "-");
        }
        else if(receiver.IsKeyDown(KEY_KEY_D)){
          p1.SetPosition(0.2, 0, "+");
        }
        else if (receiver.IsKeyDown(KEY_SPACE)){
          p1.DropBomb();
        }

	if(receiver.IsKeyDown(KEY_UP)){
          p2.SetPosition(0, 0.2, "+");
        }
        else if(receiver.IsKeyDown(KEY_DOWN)){
          p2.SetPosition(0, 0.2, "-");
        }
        if(receiver.IsKeyDown(KEY_LEFT)){
          p2.SetPosition(0.2, 0, "-");
        }
        else if(receiver.IsKeyDown(KEY_RIGHT)){
          p2.SetPosition(0.2, 0, "+");
        }
        else if (receiver.IsKeyDown(KEY_RSHIFT)){
          p1.DropBomb();
        }


	g->guienv->drawAll();
  	driver->endScene();
      }
    g->device->drop();
  }
  catch (std::exception *e)
    {
      std::cout << e->what() << std::endl;
    }
  logs->Out("Main", "Coupure du programme.");
  return 0;
}
