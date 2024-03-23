//
//  Alien.h
//  F4
//
//  Created by Jonas Wåhslén on 2016-02-26.
//  Copyright © 2016 Jonas Wåhslén. All rights reserved.
//

#ifndef alien_h
#define alien_h

#include <stdio.h>

typedef struct Alien_type *Alien;

int getAlienPositionX(Alien a);
int getAlienPositionY(Alien a);
Alien createAlien(int x, int y);
void setAlienPositionY(Alien a, int y);
void setY(Alien a, int y);
int getAlienWidth();
int getAlienHeight();
int getAlienFrame(Alien a);
void AlienTick(Alien a);

#endif /* Alien_h */
