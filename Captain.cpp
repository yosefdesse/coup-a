

// using namespace std;
// using namespace coup;
#include "Player.hpp"
#include "Game.hpp"
#include "Captain.hpp"

namespace coup
{

    Captain::Captain(Game game, string name) : Player(game, name) {}
    Captain::~Captain() {}
    void Captain::steal(Player &player) {}
    void Captain::block_steal(Player &player) {}
}