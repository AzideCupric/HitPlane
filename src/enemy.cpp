//
// Created by Azide on 2021/6/7.
//
#include <SFML/Graphics.hpp>
#include "enemy.h"
#include "DefNum.hpp"
#include <random>
#include <iostream>
Enemy* Enemy_Group_list[Enemy_max];
//初始化随机数引擎
std::default_random_engine rand_eng(time(0));
void DrawEnemy(sf::RenderWindow& win, sf::Sprite* hclEnt){
    for(int i=0;i<Enemy_max;i++) {
        if(Enemy_Group_list[i]->Statue) {
            if (Enemy_Group_list[i]->y <= windowY + EnemySpawnBuffer) {
                Enemy_Group_list[i]->y += Enemy_Group_list[i]->speed;
                hclEnt[i].setPosition(Enemy_Group_list[i]->x, Enemy_Group_list[i]->y);
                if(Enemy_Group_list[i]->Statue<5) {
                    Enemy_Group_list[i]->Statue--;
                }
            }else {
                Enemy_Group_list[i]->Statue = 0;
                std::cout<<"2";
            }
            win.draw(hclEnt[i]);
        }
    }
}
Enemy* SpawnEnemy(double x,double y,sf::Texture *Tex,int type){
    Enemy *new_enemy=new Enemy;
    new_enemy->x=x;
    new_enemy->y=y;
    new_enemy->Tex=Tex[type];
    return new_enemy;
}

void SpawnEnemyGroup(sf::Texture* Tex){
    for(int i=0;i<Enemy_max;i++){
        std::uniform_int_distribution<unsigned> rand(0,84);
        int x=rand(rand_eng)*10;
        int y=-rand(rand_eng)*2-EnemySpawnBuffer;
        Enemy_Group_list[i]= SpawnEnemy(x, y, Tex, 0);
    }
}

sf::Sprite* SpawnEnemyEntity(Enemy* list){
    sf::Sprite *new_entity=new sf::Sprite;
    new_entity->setPosition(list->x,list->y);
    new_entity->setTexture(list->Tex);
    return new_entity;
}

bool refreshEnemyGroup(Enemy** emy){
    bool isAllDied= true;
    for(int i=0;i<Enemy_max;i++){
        if(emy[i]->Statue) {
            isAllDied = false;
            break;;
        }
    }
    return isAllDied;
}