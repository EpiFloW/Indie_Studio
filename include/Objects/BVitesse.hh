//
// BVitesse.hh for BVitesse in /home/zoukie/Desktop/epitech/cpp_indie_studio/include/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 19:56:58 2017 
// Last update Tue Jun 13 17:44:12 2017 
//

#ifndef BVITESSE_HH_
# define BVITESSE_HH_

# include "../../irrlicht-1.8.4/include/irrlicht.h"
# include "../../irrlicht-1.8.4/include/IrrlichtDevice.h"
# include "Objects.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;


class		BVitesse : public Objects
{

private:
  
  
public:

  BVitesse(float x, float y);
  ~BVitesse();

  virtual void SetAff();

  IAnimatedMesh		*mesh;
  IAnimatedMeshSceneNode*node;
  float			x;
  float			y;
  
};

#endif /* !BVITESSE_HH_ */
