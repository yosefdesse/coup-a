

// using namespace std;
// using namespace coup;
#include "Player.hpp"
#include "Duke.hpp"

namespace coup
{
    Duke::Duke(Game &game, string name) : Player(game, name) {}
    Duke::~Duke() {}
    void Duke::block(Player &player) {}
    void Duke::tax() {}
}