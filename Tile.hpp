//
//  Tile.hpp
//  Final_Project
//
//  Created by Frank Duenez on 5/3/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#ifndef TILE_HPP
#define TILE_HPP


#include <stdio.h>
class Tile{
public:
    Tile();
    Tile(int x, int y, bool isShip,bool isHit,char icon);

    int getX(){return x;}
    int getY(){return y;}
    bool getShip(){return isShip;}
    bool getHit(){return isHit;}
    char getIcon(){return icon;}

    void setX(int x){this->x = x;}
    void setY(int y){this->y = y;}
    void setIsShip(bool isShip);
    void setIsHit(bool isHit);
    void setIcon(char icon);

    //    void position();
    void display();
    void reset();

private:
    int x;
    int y;
    bool isShip;
    bool isHit;
    char icon;


};

#endif /* TILE_HPP */
