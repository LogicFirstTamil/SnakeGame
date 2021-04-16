#include "Food.h"
#include<ctime>
#include<stdlib.h>
#define WIDTH 50
#define HEIGHT 30

Food::Food()
{
   srand(time(NULL));
   genFood();
}

void Food::genFood()
{
    foodPos.X= rand()%WIDTH + 1; // 1 - WIDTH
    foodPos.Y= rand()%HEIGHT + 1; // 1- HEIGHT
}

COORD Food::getFoodPos()
{
    return foodPos;
}


