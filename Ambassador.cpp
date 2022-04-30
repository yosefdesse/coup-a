
// using namespace std;
#include "Ambassador.hpp"
#include "Player.hpp"
#include "Game.hpp"

namespace coup
{
    Ambassador::Ambassador(Game game, string name) : Player(game, name) {}
    Ambassador::~Ambassador() {}
    void Ambassador::tax() {}

    void Ambassador::block(Player &player) {}
    void Ambassador::block_steal() {}
    void Ambassador::transfer(Player &player_1, Player &player_2) {}

}