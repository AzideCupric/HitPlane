//
// Created by Azide on 2021/6/19.
//
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "collision.h"
#include "bullet.h"
#include "enemy.h"
#include <iostream>

int HitScore=0;

bool collision_check(sf::Sprite& a,sf::Sprite& b){
    sf::FloatRect a_box=a.getGlobalBounds();
    sf::FloatRect b_box=b.getGlobalBounds();
    return a_box.intersects(b_box);
}

void bullet_collision(sf::Sprite* emy,sf::Sprite& ash,sf::Texture* hclTex,sf::Sound& hit){
    for(int i=0;i<Enemy_max;i++){
        for(int j=0;j<Clip_Capacity;j++){
            if(collision_check(emy[i],AshBulletGroup[j])&&Enemy_Group_list[i]->Statue==5) {
                std::cout << "1";
                emy[i].setTexture(hclTex[1]);
                Enemy_Group_list[i]->Statue = 4;
                AshBulletClips[j]=NULL;
                hit.play();
                ++HitScore;
            }
        }
        if(Enemy_Group_list[i]->Statue<5)
            emy[i].setTexture(hclTex[5-Enemy_Group_list[i]->Statue]);
    }
}