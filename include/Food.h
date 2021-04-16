#ifndef FOOD_H
#define FOOD_H
#include <windows.h>

class Food
{
private:
    COORD foodPos;
public:
    Food();
    void genFood();
    COORD getFoodPos();
};

#endif // FOOD_H
