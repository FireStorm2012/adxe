/*
 * Copyright (c) 2022 @aismann; Peter Eismann, Germany; dreifrankensoft
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software
 * in a product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#ifndef __SIMPLE_SNAKE_SCENE_H__
#define __SIMPLE_SNAKE_SCENE_H__

#include "cocos2d.h"

const int snakeBodies = 10;
const int StartBodies = 4;

class SimpleSnake : public cocos2d::Scene
{
public:
    virtual bool init() override;

    // a selector callback
    void menuCloseCallback(Ref* sender);
    virtual void update(float delta) override;
    void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);

    cocos2d::Vec2 offset;
    cocos2d::DrawNode* mydraw;

    // game stuff
    int N = 64, M = 36;
    int size    = 20;
    int w       = size * N;
    int h       = size * M;
    float level = 0.1;
    float myScore[snakeBodies + StartBodies];

    float startLevelTime = 0.0;
    float endLevelTime   = 0.0;

    int dir, num = StartBodies;
    cocos2d::Label* myScoreLabel[snakeBodies + StartBodies + 1];
};

#endif  // __SIMPLE_SNAKE_SCENE_H__
