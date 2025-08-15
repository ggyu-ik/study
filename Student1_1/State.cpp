#include "State.h"
#include <iostream>

using namespace std;

void State::setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	*p_HPPotion = count;
	*p_MPPotion = count;

	CountHPPotion = *p_HPPotion;
	CountMPPotion = *p_MPPotion;
}

int State::getHP()
{
	return HP;
}

int State::getMP()
{
	return MP;
}

int State::getAD()
{
	return AD;
}

int State::getDF()
{
	return DF;
}

void State::setHP(int hp)
{
	HP = hp;
}

void State::setMP(int mp)
{
	MP = mp;
}

void State::setAD(int ad)
{
	AD = ad;
}

void State::setDF(int df)
{
	DF = df;
}