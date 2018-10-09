//
//  Com.h
//  Final_Project
//
//  Created by Frank Duenez on 4/20/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "Ships.h"
#include "Tile.hpp"
#include "Coordinate.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <utility>
using namespace std;


class Player
{
public:
    Player();

    // ====
    pair<int, int> misslesCord();
    // Summary: Get's an x and y value from user for where to send misssle
    // and returns that coordinate.
    bool receiveMissle(Coordinate c);

//    int getX()const{return x;}
//    int getY()const{return y;}

//    void setX(int x) {this->x = x;}
//    void setY(int y) {this->y = y;}

    bool player_won();
    bool comp_won();
    void display();
//    void comPlacement(int leftOrRight);]

    void randomizer();
    void placement();

private:
    bool isTurn;
    Tile board[8][8];
    Ships arr[6];
    int shipsRemaining;
    int comShipsRemaining;
    int x;
    int y;




};

#endif /* PLAYER_H */
