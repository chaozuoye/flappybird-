#pragma once
class Obstacle
{
public:
	int shape = 0;
	int x = 960;
	bool is_close = false;	//若当前障碍对象已被小鸟触碰到则将该对象里的触碰判断关闭避免多次触碰
	void draw();/*更新并绘制障碍*/
	Obstacle(const int shape);//传一个整数，选择障碍物类型
};