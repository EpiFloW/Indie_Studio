//
// BBombe.cpp for BBomb.cpp in /home/zoukie/Desktop/epitech/cpp_indie_studio/src/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 20:17:22 2017 
// Last update Tue Jun 20 12:21:29 2017 maxence.lauque
//

# include "Objects/BBomb.hh"

BBomb::BBomb(int range, int idPlayer, float height, float weidth) : Objects(height, weidth)
{
  type = 3;
  this->mesh = smgr->getMesh("images/cube.obj");
  this->node = smgr->addAnimatedMeshSceneNode( mesh );
  _range = range;
  _idPlayer = idPlayer;
  x = height;
  y = weidth;
  logs->Out("BBomb", "init Bomb.");
}

BBomb::~BBomb()
{

}

void	BBomb::SetAff()
{
  if (this->node)
    {
      // this->node->setMaterialFlag(EMF_LIGHTING, false);
      // this->node->setMD2Animation(scene::EMAT_STAND);

      this->node->setPosition(vector3df(this->x - 0.5, this->y - 0.5, 0));
      this->node->setMaterialTexture( 0, driver->getTexture("images/bomb.png") );
    }
}

void	BBomb::SetAffExplode(float x, float y)
{
  if (this->node)
    {
      this->node->setMaterialFlag(EMF_LIGHTING, false);
      this->node->setMD2Animation(scene::EMAT_STAND);
      this->node->setMaterialTexture( 0, driver->getTexture("images/fire.bmp") );
      this->node->setPosition(vector3df(this->x - 0.5, this->y - 0.5, 0));
    }
}

void	BBomb::Explode()
{
  float	range;

  range = 1;
  while (range != (float)_range)
    {
      SetAffExplode(x + range, y + range);
      SetAffExplode(x - range, y - range);
      ++range;
    }
  logs->Out("BBomb", "Bomb explode.");
}
