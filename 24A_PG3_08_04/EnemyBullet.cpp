#include "EnemyBullet.h"
#include <stdio.h>

//関数テーブル
void(EnemyBullet::* EnemyBullet::Action[])() =
{
	&EnemyBullet::Approach,
	&EnemyBullet::Shooting,
	&EnemyBullet::Withdrawal,
};
//コンストラクタ
EnemyBullet::EnemyBullet()
{
}

//接近
void EnemyBullet::Approach()
{
	printf("接近\n");
	Action[0] = &EnemyBullet::Approach;
}
//射撃
void EnemyBullet::Shooting()
{
	printf("射撃\n");
	Action[1] = &EnemyBullet::Approach;
}
//離脱
void EnemyBullet::Withdrawal()
{
	printf("離脱\n");
	Action[2] = &EnemyBullet::Approach;
}


void EnemyBullet::Update()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*Action[i])();
	}
}

