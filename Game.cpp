

#include "Game.hpp"
using namespace std;

namespace coup
{

    Game::Game() {}
    vector<string> Game::players()
    {
        return this->players_list;
    }
    string Game::turn() { return ""; } //this->current_turn; }
    string Game::winner() { return ""; }
    Game::~Game() {}

    // friend std::ostream &operator<<(ostream &out, const vector<string> players){ }
}