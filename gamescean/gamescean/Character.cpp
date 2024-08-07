#include "Character.h"
Character::Character(const std::string& n, const int hp, const int atk)
    : name(n), hp(hp), atk(atk)
{
    std::srand(time(NULL));
}
Character::~Character()
{

}