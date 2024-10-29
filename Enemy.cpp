#include "Enemy.h"

Enemy::Action Enemy::enemyTable[3] = {
    &Enemy::Move,
    &Enemy::Attack,
    &Enemy::Leave
};

Enemy::Enemy() : state_(0) {}

void Enemy::Move() {
    std::cout << "接近" << std::endl;
    state_ = 1;
}

void Enemy::Attack() {
    std::cout << "射撃" << std::endl;
    state_ = 2;
}

void Enemy::Leave() {
    std::cout << "離脱" << std::endl;
    state_ = 0;
}

void Enemy::Update() {
    (this->*enemyTable[state_])();
}