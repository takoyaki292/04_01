#pragma once
class EnemyBullet
{
public:
	EnemyBullet();
	//�ڋ߂̊֐�
	void Approach();
	//�ˌ��̊֐�
	void Shooting();
	//���E�̊֐�
	void Withdrawal();

	void Update();
private:
	//�֐��e�[�u���̊֐�
	static void(EnemyBullet::* Action[])();
};

