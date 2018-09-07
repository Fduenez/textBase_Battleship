//
//  Tile.cpp
//  Final_Project
//
//  Created by Frank Duenez on 5/3/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#include "Tile.hpp"

Tile::Tile()
{
    x = 0;
    y = 0;
    isShip = false;
    isHit = false;
    icon = '#';
    isShipVisible = true;
}
Tile::Tile(int x, int y, bool isShip,bool isHit,char icon)
{
    this->x = x;
    this->y = y;
    this->isShip = isShip;
    this->isHit = isHit;
    this->icon = icon;
}

//void Tile::position()
//{
//
//}
//void Tile::display()
//{
//    for(int i = 0; i < 10; i++)
//    {
//        for(int j = 0; j < 10; j++)
//        {
//            cout << board[i][j].getIcon();
//        }
//        cout << endl;
//    }
//}
void Tile::setIcon(char icon)
{
    if(icon == '*' || icon == 'X' || icon == 'o' || icon == '#')
    {
        this->icon = icon;
    }
}
void Tile::setIsShipVisible(bool is_visible)
{
    isShipVisible = is_visible;
    if(isShipVisible)
    {
       icon = 'X';
    }
}
void Tile::reset()
{
    x = 0;
    y = 0;
    isShip = false;
    isHit = false;
    icon = '#';
}
