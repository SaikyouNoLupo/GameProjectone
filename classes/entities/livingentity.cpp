#include "livingentity.hpp"


LivingEntity::LivingEntity(point dim, char sprite,int life, int strength) : Entity(dim, sprite){
    this->life = life;
    this->strength = strength;
}