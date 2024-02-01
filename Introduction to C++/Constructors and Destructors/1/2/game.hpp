#ifndef GAME_HPP
#define GAME_HPP

class Player
{
    public:
        
        struct Bullet
        {
            float x;
            float y;
        };

        //constructor
        Player(int max_ammo)
        {
            bullets = new Bullet[max_ammo];
            ammo = 0;
            health = 0;
            max_health = 100;
        }

        //destructor
        ~Player()
        {
            delete[] bullets;
        };

        int health;
        int max_health;
        int ammo;
        int max_ammo;
        Bullet* bullets;

};


#endif