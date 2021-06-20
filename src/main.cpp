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
    //��������
    sf::Texture BackgroundTex;
    BackgroundTex.loadFromFile("resources/image/background2.png");
    sf::Sprite Background(BackgroundTex);
    //��������
    sf::Music BGM;
    BGM.openFromFile("resources/sound/game_music.ogg");
    BGM.play();
    sf::SoundBuffer hitBuffer;
    hitBuffer.loadFromFile("resources/sound/bullet.ogg");
    sf::Sound hit;
    hit.setBuffer(hitBuffer);
    //�����Ʒְ�
    sf::Font font;
    font.loadFromFile("resources/font/minecraft.ttf");
    sf::Text Score;
    Score.setFont(font);
    Score.setFillColor(sf::Color::Blue);
    Score.setCharacterSize(24);
    Score.setPosition(0,windowY-30);
    //����Ash
    sf::Texture AshTex[2];
    AshTex[0].loadFromFile("resources/image/shoot.png", AshBox);
    AshTex[1].loadFromFile("resources/image/shoot.png",ColAshBox);
    sf::Sprite Ash;
    Ash.setTexture(AshTex[0]);
    //����AshBullet
    sf::Texture AshBulletTex;
    AshBulletTex.loadFromFile("resources/image/shoot.png",AshBulletBox);
    sf::Sprite AshBullet;
    AshBullet.setTexture(AshBulletTex);
    //�����л���HCL
    sf::Texture HCLTex[2];
    HCLTex[0].loadFromFile("resources/image/shoot.png", HCLBox);
    HCLTex[1].loadFromFile("resources/image/shoot.png", Down1HCLBox);
    HCLTex[2].loadFromFile("resources/image/shoot.png", Down2HCLBox);
    HCLTex[3].loadFromFile("resources/image/shoot.png", Down3HCLBox);
    HCLTex[4].loadFromFile("resources/image/shoot.png", Down4HCLBox);
    sf::Sprite HCL;
    HCL.setTexture(HCLTex[0]);
    //�����л���
    sf::Sprite EnemyGroup[Enemy_max];
    //�״εл�����
    SpawnEnemyGroup(HCLTex);
    for(int i=0;i<Enemy_max;i++){
        EnemyGroup[i] = *SpawnEnemyEntity(Enemy_Group_list[i]);
    }

    //��Ϸѭ��
    while(window.isOpen()){
        //init
        GetFr();
        sf::Event event;
        Ash.setPosition(sf::Vector2f(AshX, AshY));
        AshBullet.setPosition(AshX,AshY);
        //������
        while(window.pollEvent(event)){
            if(event.type==sf::Event::Closed)
                window.close();
        }
        //�ӵ�ײ�����
        bullet_collision(EnemyGroup,Ash,HCLTex,hit);
        Score.setString("Hit:"+std::to_string(HitScore));
        //ˢ�µл���
        if(refreshEnemyGroup(Enemy_Group_list)){
            SpawnEnemyGroup(HCLTex);
            for(int i=0;i<Enemy_max;i++){
                EnemyGroup[i] = *SpawnEnemyEntity(Enemy_Group_list[i]);
            }
        }
        //�������
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
        //������
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