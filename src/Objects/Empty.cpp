//
// Empty.cpp for Empty in /home/zoukie/Desktop/epitech/cpp_indie_studio/src/Objects
// 
// Made by 
// Login   <romain.gadrat@epitech.eu>
// 
// Started on  Mon May 22 20:21:31 2017 
// Last update Tue Jun 13 17:50:32 2017 
//

# include "Objects/Empty.hh"

Empty::Empty(float height, float weidth) : Objects(height, weidth)
{
  type = 0;
  x = height;
  y = weidth;
  _cont = NULL;
}

Empty::~Empty()
{

}


void	Empty::addObject(Objects *obj)
{
  logs->Out("Empty", "Adding bomb to empty");
  _cont = obj;
}


Objects	*Empty::getCont() const
{
  return (_cont);
}

void	Empty::SetBomb()
{
  if (_cont)
    {
      std::clock_t start;
      double duration;

      logs->Out("Empty", "Starting countdown bomb ...");
      start = std::clock();
      while (duration < 2){
	    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
      }
      if (duration == 0)
	{
	  _cont->Explode();
	  logs->Out("Empty", "Deleting _cont bomb");
	  delete _cont;
	  _cont = NULL;
	}
    }
}
