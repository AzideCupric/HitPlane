//
// Created by Azide on 2021/5/31.
//

#include <SFML/Graphics.hpp>
#include "bullet.h"
//创建子弹数组
Bullet* AshBulletClips[Clip_Capacity]={0};
sf::Sprite AshBulletGroup[Clip_Capacity];

void DrawAshBullet(sf::RenderWindow &win,sf::Sprite* bullet){
    for(int i=0;i<Clip_Capacity;i++){
        if(AshBulletClips[i]){
            bullet[i].setPosition(AshBulletClips[i]->x,AshBulletClips[i]->y);
            win.draw(bullet[i]);
            AshBulletClips[i]->y-=Bullet_Speed;
            if(AshBulletClips[i]->y<=0)
                AshBulletClips[i]=NULL;
        }

    }
}

//bullet相关函数
Bullet* Bullet::CreateBullet(double x,double y) {
    auto *NewBullet=new Bullet;
    NewBullet->x=x+47;//+51 使子弹对齐炮口
    NewBullet->y=y-15;
    return NewBullet;
}

void Bullet::Insert(Bullet *pBullet) {
    for(int i=0;i<Clip_Capacity;i++){
        if(!AshBulletClips[i]){
            AshBulletClips[i]=pBullet;
            break;
        }
    }
}

sf::Sprite* SpawnBulletEntity(Bullet* clip,sf::Texture& tex){
    sf::Sprite *pBullet = new sf::Sprite;
    pBullet->setPosition(clip->x,clip->y);
    pBullet->setTexture(tex);
    return pBullet;
}
