#pragma once
#include <random>
class Lives
{
public:
	bool is_close = false;	//若当前血瓶对象已被小鸟触碰到则将该对象里的触碰判断关闭避免多次触碰
	int x = 1110;
	int y = 0;
	void draw();
	Lives(const int y);
};