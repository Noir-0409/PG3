#pragma once
#include <iostream>

class Enemy {
public:
    Enemy();
    void Update();
    void Move();
    void Attack();
    void Leave();

private:
    typedef void (Enemy::* Action)();
    static Action enemyTable[3];
    int state_;
};