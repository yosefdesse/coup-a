// using namespace std;
// using namespace coup;
#include "Player.hpp"

namespace coup
{

    Player::Player(Game &game, string name) {}
    Player::~Player() {}

    string Player::role() { return " "; }

    int Player::coins() 
    {
        return this->sum_of_coins ;}
    void Player::block(Player &player) {}
    void Player::income()
    {
        this->sum_of_coins++;
    }
    void Player::foreign_aid()
    {
        this->sum_of_coins+=2;
    }
    void Player::coup(Player &player) {}

}