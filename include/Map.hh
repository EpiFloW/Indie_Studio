//
// map.hh for  in /home/zoukie/epitech/cpp_indie_studio/include
// 
// Made by zoukie
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Wed May 10 14:40:50 2017 zoukie
// Last update Thu Jun 15 15:23:29 2017 maxence.lauque
//

#ifndef MAP_HH_
# define MAP_HH_

# include <vector>
# include <iostream>
# include <fstream>
# include <string>
# include <dirent.h>
# include <time.h>
# include <stdio.h>
# include <stdlib.h>
# include <sstream>
# include "Objects/Objects.hh"
# include "Objects/BBomb.hh"
# include "Objects/BRange.hh"
# include "Objects/BVitesse.hh"
# include "Objects/Breakable.hh"
# include "Objects/Empty.hh"
# include "Objects/Wall.hh"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class	Map
{
  
private:
  
  size_t				_taille;
  std::vector< std::vector<Objects *> >	_Map;
  
public:
  
  Map(size_t taille);
  ~Map();

  void					GenerateMap();
  std::vector<std::string>		GetMaps();
  void					SetObjects(std::string theFile);
  void					fillMap();
  void					fill_ground();
  // Getteurs //
  
  size_t				getTaille() const;
  std::vector< std::vector<Objects *> >	getMap() const;
  
  // Setteurs //
  
  void					setTaille(size_t taille);
  void					setMap(std::vector< std::vector<Objects *> > theMap);

  Map&					operator=(Map const &old);
};

#endif /* !MAP_HH_ */
