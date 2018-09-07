//
//  gameDriver.cpp
//  Final_Project
//
//  Created by Frank Duenez on 5/8/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//
#include "Tile.hpp"
#include "Ships.h"
#include "Player.h"
#include "Coordinate.h"

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    Player p,c;
    c.randomizer();
    cout << "Computer" << endl;
    c.display();
    cout << endl;
    cout << "Player" << endl;
    p.display();
    int i = 0;
    do
    {
        c.recieveMissle(p.misslesCord());
        c.display();
        cout << endl;
        p.recieveMissle(c.randomMisslesCord());
        p.display();
        cout << endl;
        i++;
    }while(i < 6);
    
    
    
    return 0;
}
