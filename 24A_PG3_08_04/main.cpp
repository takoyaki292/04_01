#include <stdio.h>
#include "EnemyBullet.h"
int main()
{
	//EnemyBullet���Ăяo��
	EnemyBullet* enemyBullet = new EnemyBullet();
	//EnemyBullet�̒���Update���Ăяo��
	enemyBullet->Update();
	
	delete enemyBullet;
	return 0;
}