#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>

class Player
{
    public:
        //constructors
        Player(); //Player p5
        Player(const char * name); //Player p4("Jerry")
        Player(int a_max_ammo, int a_max_health); //Player p1(100, 100)
        Player(float x, float y); //Player p2(25.f, 16.f)
        //copy constructor
        Player(Player& a_player);
};

#endif
