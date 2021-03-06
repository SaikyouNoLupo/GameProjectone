#ifndef BULLET_HPP_INCLUDED
#define BULLET_HPP_INCLUDED

#include "entity.hpp"
#include "../misc.hpp"

class Bullet : public Entity {
    private:
        int speed;
        int damage;
        
    public:
        Bullet(point position, char sprite, int speed, int damage, int direction);

        void goForward();

        //set functions
        void setSpeed(int s);
        void setDamage(int d);

        //get function
        int getSpeed();
        int getDamage();
};

#endif