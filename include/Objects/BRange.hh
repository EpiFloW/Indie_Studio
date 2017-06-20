//
// BRange.hh for BRange in /home/zoukie/Desktop/epitech/cpp_indie_studio/include/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 19:54:19 2017 
// Last update Tue Jun 13 17:43:40 2017 
//

#ifndef BRANGE_HH_
# define BRANGE_HH_

# include "Objects.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class		BRange : public Objects
{

private:
  
  
public:

  BRange(float x, float y);
  ~BRange();

  virtual void SetAff();

  IAnimatedMesh          *mesh;
  IAnimatedMeshSceneNode *node;
  float                     x;
  float                     y;
  
};

#endif
