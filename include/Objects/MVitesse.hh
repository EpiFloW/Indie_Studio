//
// MVitesse.hh for MVitesse in /home/zoukie/Desktop/epitech/cpp_indie_studio/include/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Wed May 24 15:30:56 2017 
// Last update Tue Jun 13 17:45:26 2017 
//

#ifndef MVITESSE_HH_
# define MVITESSE_HH_

# include "../../irrlicht-1.8.4/include/irrlicht.h"
# include "../../irrlicht-1.8.4/include/IrrlichtDevice.h"
# include "Objects.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class		MVitesse : public Objects
{

private:
  
  
public:

  MVitesse(float x, float y);
  ~MVitesse();

  virtual void  SetAff();

  IAnimatedMesh          *mesh;
  IAnimatedMeshSceneNode *node;
  float                    x;
  float                    y;
  
};

#endif /* !MVITESSE_HH_ */
