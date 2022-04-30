
#ifndef EDGE_H
#define EDGE_H


#include "Game.hpp"

#include <exception>

#include <iostream>
#include <stdexcept>
#include <vector>



using namespace coup;
using namespace std;

namespace coup
{
    class Player
    {
        protected:
        string my_name;
        string my_role;
        int sum_of_coins=0;

        public:
        Player( Game &game , string name ) ;
        string role();
        int coins();
        virtual  void block(Player &player);
        void income();
        void foreign_aid();
        virtual void coup(Player &player);
        ~Player();
    };
}
#endif