//
// breakable.hh for breakable in /home/zoukie/Desktop/epitech/cpp_indie_studio/include/objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 19:39:57 2017 
// Last update Tue Jun 13 17:42:15 2017 
//

#ifndef BREAKABLE_HH_
# define BREAKABLE_HH_

# include "Objects.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class		Breakable : public Objects
{

private:
  
  
public:

  Breakable(float height, float weidth);
  ~Breakable();
  virtual void  SetAff();
  virtual void  SetBomb();

  IAnimatedMesh          *mesh;
  IAnimatedMeshSceneNode *node;
  float                     x;
  float                     y;
};

#endif
