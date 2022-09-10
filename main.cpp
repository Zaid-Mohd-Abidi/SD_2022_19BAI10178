
//  main.cpp
//  Hitwicket-Game
//
//  Created by Zaid Mohd Abidi on 10/09/22.
//
//This is scrapped moved over to python due to bugs
#include <iostream>
#include <array>
#include<string>
using namespace std;

class character{
    public:
    string char_name;   //character name
    int char_pos;   //character position in the grid
};

void p1_move()
{
    int p1;
    cout<<"Player1 Input: ";
    cin>>p1;
}
void p2_move()
{
    int p2;
    cout<<"Player2 Input: ";
    cin>>p2;
}
class grid
{public:
    int grid_locations[5][5];

void print_grid()
{
   
    for (int i = 0 ; i < 5; i++)
    {
        for (int j =0; j < 5; j++)
        {
            if(grid_locations[i][j]==9)
            {
                cout<<" - ";
            }
            else
            {
                cout<<" "<<grid_locations[i][j]<<" ";
                
            }
        }
        cout<<endl;
    }
    
}
void init_grid()
{
    
    
    for (int i = 0 ; i < 5; i++)
    {
        for (int j =0; j < 5; j++)
        {
            grid_locations[i][j]=9;
        }
    }
    print_grid();
}
    
};

void character_init()
{
    array<std::string, 4> p1_character{ "p1", "p2",
                                           "p3", "p4" };
    for (int i = 0; i < 4; i++)
        cin>> p1_character[i];
    
    array<std::string, 4> p2_character{ "p1", "p2",
        "p3", "p4" };
    
    for (int i = 0; i < 4; i++)
        cin>> p1_character[i];
}

//if a character is at a block
//A- or B- will be printed depending on the turn of the player
//


int main(int argc, const char * argv[]) {
    
    grid grid_layout;
    grid_layout.init_grid();
    
    
    return 0;
}


