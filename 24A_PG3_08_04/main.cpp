#include <stdio.h>
#include "EnemyBullet.h"
int main()
{
	//EnemyBulletを呼び出し
	EnemyBullet* enemyBullet = new EnemyBullet();
	//EnemyBulletの中のUpdateを呼び出し
	enemyBullet->Update();
	
	delete enemyBullet;
	return 0;
}