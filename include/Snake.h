#ifndef SNAKE_H
#define SNAKE_H
#include <windows.h>
#include <Food.h>
#include <vector>
using namespace std;
class Snake
{
private:
   COORD pos;
   int len;
   int dir;
   vector<COORD> snakeBody;
public:
    Snake(COORD pos);
    COORD getPos();
    void setDir(int d);
    void moveSnake();
    bool collided();
    bool eaten(Food &food);
    void grow();
    vector<COORD> getSnakeBody();
};

#endif // SNAKE_H
