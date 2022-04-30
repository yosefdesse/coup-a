#pragma once

#include <vector>
#include <iostream>





using namespace std;

namespace coup
{
    class Game
    {
        public:
        string the_winner;
        string current_turn;
        vector<string> card;
        vector<string> players_list;
        ~Game();

        Game();
        vector<string> players();
        string turn();
        string winner();
        // friend std::ostream &operator<<(ostream &out, const vector<string> players);


    };
}