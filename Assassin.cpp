
#include "Player.hpp"
#include "Game.hpp"
#include "Assassin.hpp"

namespace coup
{

    Assassin::Assassin(Game game, string name) : Player(game, name) {}
    Assassin::~Assassin() {}
    void Assassin::coup(Player &player){}
}