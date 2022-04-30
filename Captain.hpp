#include <string>
#include <vector>
#include "Game.hpp"







using namespace std;

namespace coup
{
    class Captain : public Player
    {
        public:
        Captain( Game game , string name ) ;
        ~Captain();
        void steal(Player &player);
        void block_steal(Player &player);

    }; 
}