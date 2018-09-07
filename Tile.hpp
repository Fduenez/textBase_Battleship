//
//  Tile.hpp
//  Final_Project
//
//  Created by Frank Duenez on 5/3/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#ifndef Tile_hpp
#define Tile_hpp


#include <stdio.h>
class Tile{
public:
    Tile();
    Tile(int x, int y, bool isShip,bool isHit,char icon);
    
    int getX(){return x;}
    int getY(){return y;}
    bool getShip(){return isShip;}
    bool getHit(){return isHit;}
    char getIcon()const {return icon;}
    bool getIsShipVisible()const {return isShipVisible;}
    void setX(int x){this->x = x;}
    void setY(int y){this->y = y;}
    void setIsShip(bool isShip);
    void setIsHit(bool isHit);
    void setIcon(char icon);
    void setIsShipVisible(bool is_visible);
    
    //    void position();
    void display();
    void reset();
    
private:
    int x;
    int y;
    bool isShip;
    bool isHit;
    bool isShipVisible;
    char icon;
    
    
};

#endif /* Tile_hpp */
