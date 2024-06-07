#include "EnemyBullet.h"
#include <stdio.h>

//�֐��e�[�u��
void(EnemyBullet::* EnemyBullet::Action[])() =
{
	&EnemyBullet::Approach,
	&EnemyBullet::Shooting,
	&EnemyBullet::Withdrawal,
};
//�R���X�g���N�^
EnemyBullet::EnemyBullet()
{
}

//�ڋ�
void EnemyBullet::Approach()
{
	printf("�ڋ�\n");
	Action[0] = &EnemyBullet::Approach;
}
//�ˌ�
void EnemyBullet::Shooting()
{
	printf("�ˌ�\n");
	Action[1] = &EnemyBullet::Approach;
}
//���E
void EnemyBullet::Withdrawal()
{
	printf("���E\n");
	Action[2] = &EnemyBullet::Approach;
}


void EnemyBullet::Update()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*Action[i])();
	}
}

