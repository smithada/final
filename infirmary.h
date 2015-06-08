#ifndef INFIRMARY_H
#define INFIRMARY_H
#include "Room.h"

class Infirmary : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif
