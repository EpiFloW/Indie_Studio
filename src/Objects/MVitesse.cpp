//
// MVitesse.cpp for MVitesse in /home/zoukie/Desktop/epitech/cpp_indie_studio/src/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Wed May 24 15:30:00 2017 
// Last update Tue Jun 13 17:52:20 2017 
//

# include "Objects/MVitesse.hh"
# include "Base.hh"

MVitesse::MVitesse(float height, float weidth) : Objects(height, weidth)
{
  type = 6;
  this->mesh = smgr->getMesh("images/cube.obj");
  this->node = smgr->addAnimatedMeshSceneNode( mesh );
  x = height;
  y = weidth;
}

MVitesse::~MVitesse()
{

}

void    MVitesse::SetAff()
{
  if (this->node)
    {
      this->node->setMaterialFlag(EMF_LIGHTING, false);
      this->node->setMD2Animation(scene::EMAT_STAND);
      this->node->setMaterialTexture( 0, driver->getTexture("images/Wood_wall.jpg") );
      this->node->setPosition(vector3df(this->x - 0.5, this->y - 0.5, 0));
    }
}
