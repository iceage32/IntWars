/*
IntWars playground server for League of Legends protocol testing
Copyright (C) 2012  Intline9 <Intline9@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _CLIENT_H
#define _CLIENT_H

#include "common.h"
#include "ChampionFactory.h"
#include <string>

struct ClientInfo
{
	ClientInfo()
	{
		keyChecked = false;
		ticks = 0;
		skinNo = 0;
	}

	~ClientInfo()
	{
	}

	void setName(const std::string& name)
	{
		this->name = name;
	}

	void setChampion(Champion* champion)
	{
		this->champion = champion; //ChampionFactory::getChampionFromType(type);
	}
	
	void setSkinNo(uint32 skinNo)
	{
		this->skinNo = skinNo;
	}
   
   Champion* getChampion() const { return champion; }
   
   const std::string& getName() const { return name; }
   
   uint32 getSkinNo() const { return skinNo; }

   uint32 getTicks()
   {
      ticks++;
      return ticks;
   }
   bool keyChecked;
   uint64 userId;
   uint32 ticks;
   uint32 skinNo;
   std::string name;
   Champion* champion;

};

#endif
