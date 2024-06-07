#pragma once
class EnemyBullet
{
public:
	EnemyBullet();
	//Ú‹ß‚ÌŠÖ”
	void Approach();
	//ËŒ‚‚ÌŠÖ”
	void Shooting();
	//—£’E‚ÌŠÖ”
	void Withdrawal();

	void Update();
private:
	//ŠÖ”ƒe[ƒuƒ‹‚ÌŠÖ”
	static void(EnemyBullet::* Action[])();
};

