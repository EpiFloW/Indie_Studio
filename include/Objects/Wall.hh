//
// wall.hh for WALL in /home/zoukie/Desktop/epitech/cpp_indie_studio/include/objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 19:43:45 2017 
// Last update Tue Jun 13 17:41:42 2017 
//

#ifndef WALL_HH_
# define WALL_HH_

# include "Objects.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class		Wall : public Objects
{

private:
  
  
public:

  Wall(float height, float weidth);
  ~Wall();
  virtual void  SetAff();

  IAnimatedMesh          *mesh;
  IAnimatedMeshSceneNode *node;
  float                     x;
  float                     y;
};

#endif /* !WALL_HH_ */
