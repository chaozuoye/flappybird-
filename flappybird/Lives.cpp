#include "Lives.h"
#include "Control.h"
#include <cstdio>
extern Control* now;
void Lives::draw()
{
	if (!is_close)
	{
		now->putImage("./Pic/Lives.png", x, y, 50, 50);
	}
	x -= now->Lives_dx;
	if ((x > 50 && x < 200) && (now->Bird_y <= y + 60 && now->Bird_y >= y) && (!is_close))	//判断是否在触碰范围且未被锁住，避免多次加血和播放音效
	{
		if (now->Hp < 3)
		{
			now->Hp++;
			now->playSound("./Music/addlives.wav");	//吃到爱心音效
		}
		is_close = true;
	}
}
Lives::Lives(int y)
{
	this->y = y;
}