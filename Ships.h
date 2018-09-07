//
//  Ship.hpp
//  Final_Project
//
//  Created by Frank Duenez on 5/3/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#ifndef Ships_h
#define Ships_h

#include <iostream>
#include <string>

using namespace std;

class Ships{
private:
    
    string ship_type;
    
    int length;
    int health;
    
    bool is_destroyed;
    
public:
    
    Ships();
    Ships(string ship_type,int length, int health);
    
    void set_length(int length){this -> length = length;}
    void set_health(int health){this -> health = health;}
    void set_destroyed(bool is_destroyed){this -> is_destroyed = is_destroyed;}
    
    int get_length(){return length;}
    int get_health(){return health;}
    bool set_destroyed(){return is_destroyed;}
};
#endif
