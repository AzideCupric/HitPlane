//
// Created by Azide on 2021/5/31.
//

#include "ash.h"
#include "bullet.h"
#include "DefNum.hpp"

double AshX = windowX / 2 - 51, AshY = windowY - 126;

void AshMove(double speed) {
    if(AshX>=0&&AshX<=windowX-AshXLength)
        AshX += speed;
    else if(AshX<0)
        AshX= speed;
    else if(AshX>windowX-AshXLength)
        AshX=windowX-AshXLength+speed;
}

void AshFire(double x, double y) {
    Bullet *NewBullet = NewBullet->CreateBullet(x,y);
    NewBullet->Insert(NewBullet);
    /*for (int i = 0; i < Clip_Capacity; i++) {
        if (!AshBulletClips[i]) {
            AshBulletClips[i] = AshBulletClips->CreateBullet();
            break;
        }
    }*/
}