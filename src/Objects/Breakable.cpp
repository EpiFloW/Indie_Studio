//
// Breakable.cpp for Breakable in /home/zoukie/Desktop/epitech/cpp_indie_studio/src/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 20:19:46 2017 
// Last update Tue Jun 13 18:05:42 2017 
//

#include "Objects/Breakable.hh"
#include "Base.hh"

Breakable::Breakable(float height, float weidth) : Objects(height, weidth)
{
  type = 2;
  this->mesh = smgr->getMesh("images/cube.obj");
  this->node = smgr->addAnimatedMeshSceneNode( mesh, 0, -1,
                                            vector3df(0, 0, 0),
                                            vector3df(0, 0, 0),
                                            vector3df(0.705, 0.705, 0.705));
  this->x = height;
  this->y = weidth;
}

Breakable::~Breakable()
{

}

void  Breakable::SetAff()
{
  if (this->node)
    {
      this->node->setMaterialFlag(EMF_LIGHTING, false);
      this->node->setMD2Animation(scene::EMAT_STAND);
      this->node->setMaterialTexture( 0, driver->getTexture("images/Wood_wall.jpg") );
      this->node->setPosition(vector3df(this->x, this->y - 0.5, 0));
    }
}

void  Breakable::SetBomb(){}
