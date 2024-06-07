#pragma once
class EnemyBullet
{
public:
	EnemyBullet();
	//接近の関数
	void Approach();
	//射撃の関数
	void Shooting();
	//離脱の関数
	void Withdrawal();

	void Update();
private:
	//関数テーブルの関数
	static void(EnemyBullet::* Action[])();
};

