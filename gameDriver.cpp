//
//  gameDriver.cpp
//  Final_Project
//
//  Created by Frank Duenez on 5/8/18.
//  Copyright � 2018 Frank Duenez. All rights reserved.
//
#include "Tile.hpp"
#include "Ships.h"
#include "Player.h"
#include "Coordinate.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    Player p, c;

    c.placement();
    p.randomizer();

    c.display();
    cout << endl;
    //p.display();
    //cout << endl;

    return 0;
}
