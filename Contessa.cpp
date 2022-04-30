
// using namespace std;
// using namespace coup;
#include "Player.hpp"
#include "Game.hpp"
#include "Contessa.hpp"

namespace coup
{

    Contessa::Contessa(Game &game, string name) : Player(game, name) {}
    Contessa::~Contessa() {}
    void Contessa::block(Player &player) {}
    void Contessa::tax() {}
}