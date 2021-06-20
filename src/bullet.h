//
// Created by Azide on 2021/5/31.
//

#ifndef ASH_BULLET_H
#define ASH_BULLET_H
#include <SFML/Graphics.hpp>
#define Clip_Capacity 100
#define Bullet_Speed 8.0f
class Bullet
{
public:
    double x=0, y=0;
    Bullet* CreateBullet(double,double);
    void Insert(Bullet*);
    void DrawBullet(sf::RenderWindow);
};
extern Bullet* AshBulletClips[Clip_Capacity];
extern sf::Sprite AshBulletGroup[Clip_Capacity];
void DrawAshBullet(sf::RenderWindow&,sf::Sprite*);
sf::Sprite* SpawnBulletEntity(Bullet*,sf::Texture&);
#endif //ASH_BULLET_H
