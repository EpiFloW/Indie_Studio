//
// Wall.cpp for Wall in /home/zoukie/Desktop/epitech/cpp_indie_studio/src/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 20:22:08 2017 
// Last update Tue Jun 13 18:04:28 2017 
//

# include "Wall.hh"

Wall::Wall(float height, float weidth) : Objects(height, weidth)
{
  type = 1;
  this->mesh = smgr->getMesh("images/cube.obj");
  this->node = smgr->addAnimatedMeshSceneNode( mesh, 0, -1,
                                            vector3df(0, 0, 0),
                                            vector3df(0, 0, 0),
                                            vector3df(0.705, 0.705, 0.705));
  this->x = height;
  this->y = weidth;
}

Wall::~Wall()
{}

void  Wall::SetAff()
{
  if (this->node)
    {
      this->node->setMaterialFlag(EMF_LIGHTING, false);
      this->node->setMD2Animation(scene::EMAT_STAND);
      this->node->setMaterialTexture( 0, driver->getTexture("images/breakable.png") );
      this->node->setPosition(vector3df(this->x, this->y - 0.5, 0));
    }
}
