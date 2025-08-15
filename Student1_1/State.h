#pragma once

class State
{
private:
	// HP, MP, 공격력, 방어력을 크기 4의 int형 배열로 선언 및 0으로 초기화.
	int HP = 0;
	int MP = 0;
	int AD = 0;
	int DF = 0;
	
	int status[4] = {HP, MP, AD, DF};

	int CountHPPotion = 0;
	int CountMPPotion = 0;

public:

	int getHP();
	int getMP();
	int getAD();
	int getDF();
	
	void setHP(int hp);
	void setMP(int mp);
	void setAD(int ad);
	void setDF(int df);

	void setPotion(int count, int* p_HPPotion, int* p_MPPotion); // call by pointer 사용

};