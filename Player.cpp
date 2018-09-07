//
//  main.cpp
//  Final_Project
//
//  Created by Frank Duenez on 4/20/18.
//  Copyright © 2018 Frank Duenez. All rights reserved.
//

#include <iostream>
#include "Player.h"
using namespace std;


enum Direction{HORZ = 0, VERT = 1};
Player::Player()
{
    arr[0] = Ships("Aircraft_Carrier",4, 4);
    arr[1] = Ships("Battleship", 3, 3);
    arr[2] = Ships("destroyer", 2, 2);
    arr[3] = Ships("patrols", 1, 1);
    
    //direction = 1 would be vertical
    //direction = 0 would be horizontal
    shipsRemaining = 6;
    comShipsRemaining = 6;
    
    
}
bool Player:: isWon()
{
    if(comShipsRemaining == 0)
    {
        return true;
    }
    else
        return false;
}
void Player::display()
{
    cout << " 01234567" << endl;
    for(int i = 0; i < 8; i++)
    {
        cout << i;
        for(int j = 0; j < 8; j++)
        {
            cout << board[i][j].getIcon();
        }
        cout << endl;
    }
}


pair<int, int> Player:: misslesCord()
{
    pair<int, int> user_coord;
    cout << "Enter x\n";
    cin >> user_coord.first;
    
    cout << "Enter y\n";
    cin >> user_coord.second;
    
    return user_coord;
}
void Player::recieveMissle(pair<int, int> missle)
{
    if(board[missle.first][missle.second].getIsShipVisible() == false)
    {
        board[missle.first][missle.second].setIsShipVisible(true);
    }
    
    else
        board[missle.first][missle.second].setIcon('o');
}
pair<int, int> Player:: randomMisslesCord()
{
    srand(static_cast<unsigned>(time(NULL)));
    int random_x =(rand()%8);
    int random_y =(rand()%8);
    pair<int, int> comp_coord;
    comp_coord.first = random_x;
    comp_coord.second = random_y;
    
    return comp_coord;
}

void Player::randomizer(){
    
    srand(static_cast<unsigned>(time(NULL)));
    int rand_x, rand_y, direction;
    int comp_size = 9;
    
    //Gets ship from ship array
    for(int i = 0; i < 4; i++){
        cout << arr[i].get_length() << endl;
        
        direction = (rand()%2);
        
        int rand_x = (rand() % 8);
        int rand_y = (rand() % 8);
        
        bool place = false;
        int remain = arr[i].get_length();
        //Gets the ship length from array of ship objects
        for(int j = 0; j < arr[i].get_length(); j++){
            
            //If statment is used to make vert ot horz placement
            if(direction == VERT){
                
                //While loop is used to ensure ships are placed in bounds (0 - 7)
                while((comp_size > 8) || (place == false) || (remain > 0)){
                    //Issue may come from re-initing X & Y, but this is needed to assign new vals if out of bounds
                    rand_x = (rand() % 8);
                    rand_y = (rand() % 8);
                    
                    //makes comp_size for vert by taking the ships length and adding it to the starting x
                    comp_size = arr[i].get_length() + rand_x;
                    
                    //This for loop is to check path befor placing to avoid overlapping ships
                    for(int k = 0; k < arr[i].get_length(); k++){
                        //If statment changes bool place. If at any point along proposed placement path there is an '*', the loop should break and resset placement
                        if(board[rand_x + k][rand_y].getIcon() == '*'){
                            place = false;
                            break;
                        }else{
                            place = true;
                            remain--;
                        }
                    }
                    comp_size = arr[i].get_length() + rand_x;
                }
                //Check
                if(place == true){
                    for(int g = 0; g < arr[i].get_length(); g++)
                        board[rand_x + g][rand_y].setIcon('*');
                }
            }else{
                
                while(comp_size > 8 || place == false){
                    
                    rand_x = (rand() % 8);
                    rand_y = (rand() % 8);
                    
                    for(int k = 0; k < arr[i].get_length(); k++){
                        if(board[rand_x + k][rand_y].getIcon() == '*'){
                            place = false;
                            break;
                        }else{
                            place = true;
                        }
                    }
                    comp_size = arr[i].get_length() + rand_y;
                }
                if(place == true){
                    for(int g = 0; g < arr[i].get_length(); g++)
                        board[rand_x][rand_y + g].setIcon('*');
                }
                
            }
        }
        
    }
    display();
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[i][j].getIcon() == '*')
            {
                board[i][j].setIcon('#');
                board[i][j].setIsShipVisible(false);
            }
            
        }
    }
    
    
}

//_____________________________________________________________________________________________________________
void Player::placement(){
    
    srand(static_cast<unsigned>(time(NULL)));
    int x, y, direction;
    int comp_size = 9;
    
    //Gets ship from ship array
    for(int i = 0; i < 4; i++){
        
        arr[0] = Ships("Aircraft_Carrier",4, 4);
        arr[1] = Ships("Battleship", 3, 3);
        arr[2] = Ships("destroyer", 2, 2);
        arr[3] = Ships("patrols", 1, 1);
        
        if(arr[i].get_length() == 4){
            cout << "Placing an Aircraft Carrier. Length of 4." << endl;
        }else if(arr[i].get_length() == 3){
            cout << "Placing a Battleship. Length of 3." << endl;
        }else if(arr[i].get_length() == 2){
            cout << "Placing a Destroyer. Length of 2." << endl;
        }else if(arr[i].get_length() == 1){
            cout << "Placing a Patrol Boat. Length of 1." << endl;
        }
        
        x = 0;
        y = 0;
        
        direction = 2;
        
        display();
        
        cout << "Would you like to place horizontally or vertically? (horz. = 0, vert. = 1)";
        cin >> direction;
        cout << endl;
        
        bool place = false;
        int remain = arr[i].get_length();
        //Gets the ship length from array of ship objects
        for(int j = 0; j < arr[i].get_length(); j++){
            
            //If statment is used to make vert ot horz placement
            if(direction == VERT){
                
                //While loop is used to ensure ships are placed in bounds (0 - 7)
                while((comp_size > 8) || (place == false) || (remain > 0)){
                    //Issue may come from re-initing X & Y, but this is needed to assign new vals if out of bounds
                    display();
                    
                    cout << "Where do you wish to start placing the ship? " << endl;
                    cout << "Let's start with the x coordinate : ";
                    cin >> x;
                    cout << "Now the y coordinate : ";
                    cin >> y;
                    cout << endl;
                    //makes comp_size for vert by taking the ships length and adding it to the starting x
                    comp_size = arr[i].get_length() + x;
                    
                    //This for loop is to check path befor placing to avoid overlapping ships
                    for(int k = 0; k < arr[i].get_length(); k++){
                        //If statment changes bool place. If at any point along proposed placement path there is an '*', the loop should break and resset placement
                        if(board[x + k][y].getIcon() == '*'){
                            place = false;
                            break;
                        }else{
                            place = true;
                            remain--;
                        }
                    }
                    comp_size = arr[i].get_length() + x;
                }
                //Check
                if(place == true){
                    for(int g = 0; g < arr[i].get_length(); g++)
                        board[x + g][y].setIcon('*');
                }
            }else{
                
                while(comp_size > 8 || place == false){
                    
                    display();
                    cout << "Where do you wish to start placing the ship? " << endl;
                    cout << "Let's start with the x coordinate : ";
                    cin >> x;
                    cout << "Now the y coordinate : ";
                    cin >> y;
                    cout << endl;
                    
                    for(int k = 0; k < arr[i].get_length(); k++){
                        if(board[x + k][y].getIcon() == '*'){
                            place = false;
                            break;
                        }else{
                            place = true;
                        }
                    }
                    comp_size = arr[i].get_length() + y;
                }
                if(place == true){
                    for(int g = 0; g < arr[i].get_length(); g++)
                        board[x][y + g].setIcon('*');
                }
                
            }
        }
        
    }
    
}
