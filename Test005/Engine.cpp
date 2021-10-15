#include "Engine.h"



Engine::Engine(std::string side){
	if (side == "White") isWhite = true;
	else isWhite = false;
}


std::string Engine::getTeam() {
	if (isWhite) return "White";
	else return "Black";
}

