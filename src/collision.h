//
// Created by Azide on 2021/6/19.
//

#ifndef ASH_COLLISION_H
#define ASH_COLLISION_H
extern int HitScore;
bool collision_check(sf::Sprite&,sf::Sprite&);
void bullet_collision(sf::Sprite* ,sf::Sprite& ,sf::Texture*,sf::Sound&);
#endif //ASH_COLLISION_H
