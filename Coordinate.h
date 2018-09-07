//
//  Coordinate.h
//  Final_Project
//
//  Created by Frank Duenez on 5/3/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#ifndef Coordinate_h
#define Coordinate_h

class Coordinate{
public:
    int getCoordinateX(){return x;}
    int getCoordinateY(){return y;}
    
    void setCoordinateX(int x){this->x=x;}
    void setCoordinateY(int y){this->y=y;}
    
private:
    int x,y;
};

#endif /* Coordinate_h */
