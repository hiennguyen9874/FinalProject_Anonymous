#pragma once
#include "cocos2d.h"
#include "MapTMX.h"
#include "GameValue.h"

USING_NS_CC;

class MiddleScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene(bool boolean);
	static MiddleScene* createWithLoad(bool boolean);
	bool initWithLoad(bool boolean);

	void update(float dt);
private:
	int m_loadingStep = 0;
	float m_fTimeFrame = 1 / 15.0f;
	int m_iNumFrame = 0;
};