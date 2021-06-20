//
// Created by Azide on 2021/6/7.
//

#ifndef ASH_ENEMY_H
#define ASH_ENEMY_H
#define EnemySpawnBuffer 80
#define Enemy_Speed 2.0f
#define Enemy_max 10//敌机数最大值
class Enemy{
public:
    int Statue=5;
    int speed=Enemy_Speed;
    int x,y;
    sf::Texture Tex;
};
extern Enemy* Enemy_Group_list[Enemy_max];
void DrawEnemy(sf::RenderWindow &win, sf::Sprite* hclEnt);
Enemy* SpawnEnemy(double,double,sf::Texture*,int);
void SpawnEnemyGroup(sf::Texture*);
sf::Sprite* SpawnEnemyEntity(Enemy*);
bool refreshEnemyGroup(Enemy**);
#endif //ASH_ENEMY_H
