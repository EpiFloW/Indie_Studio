//
// BBomb.hh for BBomb in /home/zoukie/Desktop/epitech/cpp_indie_studio/include/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 19:53:27 2017 
// Last update Wed Jun 14 14:35:28 2017 
//

#ifndef BBOMB_HH_
# define BBOMB_HH_

# include "../../irrlicht-1.8.4/include/irrlicht.h"
# include "../../irrlicht-1.8.4/include/IrrlichtDevice.h"
# include "Objects.hh"
# include "Base.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class		BBomb : public Objects
{

private:
  int	_range;
  int	_idPlayer;

public:

  BBomb(int range, int player, float x, float y);
  ~BBomb();

  virtual void	SetAff();
  virtual void		Explode();
  void			SetAffExplode(float x, float y);
  IAnimatedMesh		 *mesh;
  IAnimatedMeshSceneNode *node;
  float			 x;
  float			 y;

};

#endif /* !BBOMB_HH_ */
