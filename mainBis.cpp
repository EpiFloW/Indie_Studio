//
// main.cpp for main in /home/zoukie/Desktop/epitech/cpp_indie_studio
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Wed May 24 19:33:02 2017 
// Last update Tue Jun 13 16:30:28 2017 
//

# include "irrlicht-1.8.4/include/irrlicht.h"
# include "irrlicht-1.8.4/include/IrrlichtDevice.h"
# include "Base.hh"
# include "include/Map.hh"
# include "include/Player.hh"
# include "include/Save.hh"
# include <list>

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
ISceneNode* camera;

Logs *logs = new Logs();

// void    displayGraphicalInfos() {

//   //  Camera Position
  // irr::core::vector3df posCam = smgr->getPosition();
  // std::string camTxt = "CAMERA POS ( " +  std::to_string(posCam.X) + ", " +
  //   std::to_string(posCam.Y) + ", " +
  //   std::to_string(posCam.Z) + " )";
//   this->draw_text(camTxt, 0.0f, 0.0f, SCyan, SBlack);

//   irr::core::vector3df pos = smgr->getAbsolutePosition();
//   irr::core::vector3df target = smgr->getTarget();
//   irr::core::vector3df dir = target - pos;

//   std::string dirTxt = "CAMERA ANGLE ( " +  std::to_string(dir.X) + ", " +
//     std::to_string(dir.Y) + ", " +
//     std::to_string(dir.Z) + " )";
//   this->draw_text(dirTxt, 0.0f, 0.025f, SCyan, SBlack);

//   //  FPS
//   std::string fpsTxt("FPS : " + std::to_string(driver->getFPS()));
//   this->draw_text(fpsTxt, 0.0f, 0.050f, SCyan, SBlack);
// }

int     main()
{
  IrrlichtDevice *device =
    createDevice( video::EDT_OPENGL, dimension2d<u32>(1000, 1000), 16,
		  false, false, false, 0);
  size_t	i;
  size_t	j;
  i = 0;
  j = 0;
  try {
    if (!device)
      return 1;
    device->setWindowCaption(L"Indie Studio - Bomberman");
    driver = device->getVideoDriver();
    smgr = device->getSceneManager();
    // smgr->addCameraSceneNode(0, vector3df(11, 5, -18)// , vector3df(0,0,0)
    // 			     );

    
    
    camera = smgr->addCameraSceneNodeFPS();
    Map	*map = new Map(20);
    map->GenerateMap();
    Player *player = new Player(1, map, 3, 3);
    // Save *save = new Save(map, player);
    Player p1(1, map, 1, 1);
    Player p2(2, map, 18, 18);
    while(device->run())
      {
	// displayGraphicalInfos();
    	irr::core::vector3df posCam = camera->getAbsolutePosition();
    std::string camTxt = "CAMERA POS ( " +  std::to_string(posCam.X) + ", " +
    std::to_string(posCam.Y) + ", " +
    std::to_string(posCam.Z) + " )";

	// irr::core::vector3df pos = smgr->getAbsolutePosition();

	std::cout << camTxt << std::endl;
	
	for (size_t i = 0; i <= map->getMap().size() - 1; ++i)
	  {
	    for (size_t j = 0; j < map->getMap().size() - 1; ++j)
	      {
		map->getMap()[i][j]->SetAff();
	      }
	  }
	driver->beginScene(true, true, SColor(10,10,10,10));
	smgr->drawAll();
	driver->endScene();
      }
    device->drop();
  }
  catch (std::exception *e)
    {
      std::cout << e->what() << std::endl;
    }
  return 0;
}


    // std::list<Player> tab_player = {p1,p2};
    // std::list<Player*>::iterator it;
    
    // Save *save = new Save(map, tab_player);
    // save->goToSave(map,tab_player);
    // save->Save_map(map);
    // for(it = tab_player.begin(); it != tab_player.end(); it++)
    //   {
    // 	// save->Save_game();
    //   }
    /*int inc = 0;
      while (inc < 2)
      {
	Save *save = new Save(map, player[inc]);
	inc++;
	}*/
