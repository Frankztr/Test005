#pragma once
#ifndef _ENGINE_H
#define _ENGINE_H

#include <iostream>
#include <string>
#include <list>
#include "Board.h"
class Engine
{
private:
    Board a;
    bool isWhite;
    int roundNumber;
    
    
public:
    Engine(std::string side);
    
    std::string getTeam();
};






#endif