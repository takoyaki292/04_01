#include <stdio.h>
#include "EnemyBullet.h"
int main()
{
	//EnemyBullet‚ðŒÄ‚Ño‚µ
	EnemyBullet* enemyBullet = new EnemyBullet();
	//EnemyBullet‚Ì’†‚ÌUpdate‚ðŒÄ‚Ño‚µ
	enemyBullet->Update();
	
	delete enemyBullet;
	return 0;
}