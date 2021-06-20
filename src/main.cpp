#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <random>
#include "ash.h"
#include "bullet.h"
#include "enemy.h"
#include "collision.h"

static int RealFr=0;
void GetFr();

int main(){
    sf::RenderWindow window(sf::VideoMode(windowX, windowY), "HitPlane");
    window.setFramerateLimit(60);
    //创建背景
    sf::Texture BackgroundTex;
    BackgroundTex.loadFromFile("resources/image/background2.png");
    sf::Sprite Background(BackgroundTex);
    //播放音乐
    sf::Music BGM;
    BGM.openFromFile("resources/sound/game_music.ogg");
    BGM.play();
    sf::SoundBuffer hitBuffer;
    hitBuffer.loadFromFile("resources/sound/bullet.ogg");
    sf::Sound hit;
    hit.setBuffer(hitBuffer);
    //创建计分板
    sf::Font font;
    font.loadFromFile("resources/font/minecraft.ttf");
    sf::Text Score;
    Score.setFont(font);
    Score.setFillColor(sf::Color::Blue);
    Score.setCharacterSize(24);
    Score.setPosition(0,windowY-30);
    //创建Ash
    sf::Texture AshTex[2];
    AshTex[0].loadFromFile("resources/image/shoot.png", AshBox);
    AshTex[1].loadFromFile("resources/image/shoot.png",ColAshBox);
    sf::Sprite Ash;
    Ash.setTexture(AshTex[0]);
    //创建AshBullet
    sf::Texture AshBulletTex;
    AshBulletTex.loadFromFile("resources/image/shoot.png",AshBulletBox);
    sf::Sprite AshBullet;
    AshBullet.setTexture(AshBulletTex);
    //创建敌机：HCL
    sf::Texture HCLTex[2];
    HCLTex[0].loadFromFile("resources/image/shoot.png", HCLBox);
    HCLTex[1].loadFromFile("resources/image/shoot.png", Down1HCLBox);
    HCLTex[2].loadFromFile("resources/image/shoot.png", Down2HCLBox);
    HCLTex[3].loadFromFile("resources/image/shoot.png", Down3HCLBox);
    HCLTex[4].loadFromFile("resources/image/shoot.png", Down4HCLBox);
    sf::Sprite HCL;
    HCL.setTexture(HCLTex[0]);
    //创建敌机组
    sf::Sprite EnemyGroup[Enemy_max];
    //首次敌机生成
    SpawnEnemyGroup(HCLTex);
    for(int i=0;i<Enemy_max;i++){
        EnemyGroup[i] = *SpawnEnemyEntity(Enemy_Group_list[i]);
    }

    //游戏循环
    while(window.isOpen()){
        //init
        GetFr();
        sf::Event event;
        Ash.setPosition(sf::Vector2f(AshX, AshY));
        AshBullet.setPosition(AshX,AshY);
        //功能区
        while(window.pollEvent(event)){
            if(event.type==sf::Event::Closed)
                window.close();
        }
        //子弹撞击检测
        bullet_collision(EnemyGroup,Ash,HCLTex,hit);
        Score.setString("Hit:"+std::to_string(HitScore));
        //刷新敌机组
        if(refreshEnemyGroup(Enemy_Group_list)){
            SpawnEnemyGroup(HCLTex);
            for(int i=0;i<Enemy_max;i++){
                EnemyGroup[i] = *SpawnEnemyEntity(Enemy_Group_list[i]);
            }
        }
        //按键检测
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            AshMove(-Ash_Speed);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            AshMove(Ash_Speed);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)&&RealFr%Fire_Speed==0)
            AshFire(AshX, AshY);
        for(int i=0;i<Clip_Capacity;i++){
            if(AshBulletClips[i]){
                AshBulletGroup[i]=*SpawnBulletEntity(AshBulletClips[i],AshBulletTex);
            }else{
                AshBulletGroup[i].setPosition(-100,0);
            }
        }
        //绘制区
        window.clear();
        window.draw(Background);
        window.draw(Ash);
        DrawEnemy(window, EnemyGroup);
        DrawAshBullet(window,AshBulletGroup);
        window.draw(Score);
        window.display();
        }
    return 0;
}

void GetFr(){
    RealFr++;
    if(RealFr>59)
        RealFr=0;
}