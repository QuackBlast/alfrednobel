//
//  spaceman.h
//  F4
//
//  Created by Jonas Wåhslén on 2016-02-26.
//  Copyright © 2016 Jonas Wåhslén. All rights reserved.
//

#ifndef spaceman_h
#define spaceman_h

#include <stdio.h>
#include <stdlib.h>

typedef struct SpaceMan_type *SpaceMan;

int getSpacemanPositionX(SpaceMan s);
int getSpacemanPositionY(SpaceMan s);
SpaceMan createSpaceMan(int x, int y);

#endif /* spaceman_h */
