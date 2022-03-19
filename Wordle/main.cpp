//
//  main.cpp
//  Wordle
//
//  Created by Andrew Vincent on 3/17/22.
//

#include <iostream>
#include <string>
#include <vector>
#include "Library.h"

class Standard_Game{
private:
    std::string word;
    int num_guesses;
    std::vector<char> guesses;
public:
    
    Standard_Game(){
        
    }
    
    void play_standard_game(){
        
    }
    

};
class Crazy_Game{
    Crazy_Game(){
        
    }
    
    void play_crazy_game(){
        
    }
};

class Game{
private:
    int type_of_game;
    std::string word;
    int word_index;
    int num_guesses;
    std::vector<char> guesses;
public:
    
    void set_word_index(){
        int index = rand() % 2315;
        word_index = index;
    }
    void set_word(){
        word = string_list[word_index];
    }
    void play_game(){
        std::cout << "Welcome to Andrew's Wordle rip-off!" << std::endl;
        std::cout << "___________________________________" << std::endl;
        std::cout << "Please select one of the two game modes bellow" << std::endl
        << "by pressing the number that accompanies the desired game mode" << std::endl;
        std::cout << "[1]: Standard Wordle" << std::endl;
        std::cout << "[2]: Crazy Wordle" << std::endl;
        std::cin >> type_of_game;
        
        if(type_of_game == 1){
            Standard_Game().play_standard_game();
        }
        else if(type_of_game == 2){
            Crazy_Game().play_crazy_game();
        }
        else{
            std::cout << "Invalid game mode" << std::endl;
        }
        
    }
    
};



int main() {

    
    
    
    
    return 0;
}
