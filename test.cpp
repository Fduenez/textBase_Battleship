void Player::placement(){

    srand(static_cast<unsigned>(time(NULL)));
    int x, y, direction;
    int comp_size = 9;

    //Gets ship from ship array
    for(int i = 0; i < 4; i++){
        cout << arr[i].get_length() << endl;

        x = 0;
        y = 0;

        direction = 2;
        display();

        if(arr[i].get_length() != 1){
          cout << "Would you like to place horizontally or vertically? (horz. = 0, vert. = 1)";
          cin >> direction;
          cout << endl;
        }else{
          direction = 4;
        }

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
                        cout << "placed" << endl;
                    }
                }else if(direction = 4){
                  while((comp_size > 8) || (place == false) || (remain > 0)){
                      //Issue may come from re-initing X & Y, but this is needed to assign new vals if out of bounds
                      display();

                      cout << "Where do you wish to start placing the ship? " << endl;
                      cout << "Let's start with the x coordinate : ";
                      cin >> x;
                      cout << "Now the y coordinate : ";
                      cin >> y;
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
                      cout << "placed" << endl;
                  }

                }else{

                    while(comp_size > 8 || place == false){

                      display();
                      cout << "Where do you wish to start placing the ship? " << endl;
                      cout << "Let's start with the x coordinate : ";
                      cin >> x;
                      cout << "Now the y coordinate : ";
                      cin >> y;

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
                    cout << "placed" << endl;
                }

            }
    }

}


}





//_________________________________________________________________________________________________________________




void Player::placement(){

    srand(static_cast<unsigned>(time(NULL)));
    int x, y, direction;
    int comp_size = 9;

    //Gets ship from ship array
    for(int i = 0; i < 4; i++){
        cout << arr[i].get_length() << endl;

        x = 0;
        y = 0;

        direction = 2;

        // cout << "Where do you wish to start placing the ship? " << endl;
        // cout << "Let's start with the x coordinate : ";
        // cin >> x;
        // cout << "Now the y coordinate : ";
        // cin >> y;
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
                        cout << "placed" << endl;
                    }
                }else{

                    while(comp_size > 8 || place == false){

                      display();
                      cout << "Where do you wish to start placing the ship? " << endl;
                      cout << "Let's start with the x coordinate : ";
                      cin >> x;
                      cout << "Now the y coordinate : ";
                      cin >> y;

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
                    cout << "placed" << endl;
                }

            }
    }

}


}
