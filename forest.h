#ifndef FOREST_H
#define FOREST_H
#include "Room.h"

class Forest : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif
