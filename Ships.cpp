//
//  Ship.cpp
//  Final_Project
//
//  Created by Frank Duenez on 5/3/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#include "Ships.h"
using namespace std;

Ships::Ships(){
    ship_type = "Defualt";
    length = 1;
    health = 1;
    is_destroyed = false;
}
Ships::Ships(string ship_type,int length, int health)
{
    this->ship_type = ship_type;
    this->length = length;
    this->health = health;
}
