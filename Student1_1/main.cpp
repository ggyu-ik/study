#include "State.h"
#include <iostream>

using namespace std;

int main()
{
	int hp = 0; // 사용자의 입력을 받을 변수 선언
	int mp = 0;
	int ad = 0;
	int df = 0;
	State s; // State 클래스

	
	while (hp <= 50 || mp <= 50) // hp, mp 둘중 하나라도 50 이하일 시 재입력 받기 위한 반복문
	{
		cout << "HP 입력: ";
		cin >> hp;

		cout << "MP 입력: ";
		cin >> mp;
		
		if (hp <= 50 || mp <= 50) // 다시 입력하라는 문구 출력을 위한 조건문
		{
			cout << "HP나 MP의 값이 너무 작습니다. 다시 입력해주세요." << endl;
		}
	}

	s.setHP(hp); // 입력받은 hp값을 State의 HP에 저장.
	s.setMP(mp); // 입력받은 mp값을 State의 MP에 저장.

	while (ad <= 0 || df <= 0) // ad, df 둘중 하나라도 0 이하일 시 재입력 받기 위한 반복문
	{
		cout << "공격력 입력: ";
		cin >> ad;

		cout << "방어력 입력: ";
		cin >> df;

		if (ad <= 0 || df <= 0) // 다시 입력하라는 문구 출력을 위한 조건문
		{
			cout << "공격력과 방어력의 값이 너무 작습니다. 다시 입력해주세요." << endl;
		}
	}

	s.setAD(ad); // 입력받은 ad값을 State의 AD에 저장.
	s.setDF(df); // 입력받은 df값을 State의 DF에 저장.

	int CounthpPotion = 0; // hp 포션 개수
	int CountmpPotion = 0; // mp 포션 개수

	s.setPotion(5, &CounthpPotion, &CountmpPotion);

	cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl << "=====================================================================" << endl;

	int num = 0; // 선택지 입력 받을 변수 선언

	//스탯 관리 시스템 시작
	
	cout << "1. HP 회복 2. MP 회복 3. HP 강화 4. MP 강화 5. 공격 스킬 사용 6. 필살기 사용 7. 나가기" << endl;
	while(num <= 7)
	{
		cout << "번호를 선택해주세요: ";
		cin >> num; // 선택지 입력

		if (num == 1 && CounthpPotion > 0)
		{
			hp += 20;
			CounthpPotion -= 1;
			cout << "HP 20회복되었습니다. 포션이 1개 차감됩니다." << endl << "현재 HP : " << hp << endl << "남은 HP포션 : " << CounthpPotion << endl;
		}
		else if (num == 1 && CounthpPotion <= 0)
		{
			cout << "HP포션이 부족합니다." << endl;
		}
		else if (num == 2 && CountmpPotion > 0)
		{
			mp += 20;
			CountmpPotion -= 1;
			cout << "MP 20회복되었습니다. 포션이 1개 차감됩니다." << endl << "현재 MP : " << mp << endl << "남은 MP포션 : " << CountmpPotion << endl;
		}
		else if (num == 2 && CountmpPotion <= 0)
		{
			cout << "MP포션이 부족합니다." << endl;
		}
		else if (num == 3)
		{
			hp *= 2;
			cout << "HP가 2배 회복됐습니다. 현재 HP: " << hp << endl;
		}
		else if (num == 4)
		{
			mp *= 2;
			cout << "MP가 2배 회복됐습니다. 현재 HP: " << mp << endl;
		}
		else if (num == 5 && mp > 50)
		{
			mp -= 50;
			cout << "* 스킬을 사용하여 MP가 50 소모되었습니다." << endl << "현재 MP: " << mp << endl;
		}
		else if (num == 5 && mp <= 50)
		{
			cout << "MP가 부족하여 스킬 사용이 불가합니다." << endl;
		}
		else if (num == 6 && mp > 0)
		{
			mp /= 2;
			cout << "* 필살기를 사용하여 MP 50% 소모합니다." << endl << "현재 MP: " << mp << endl;
		}
		else if (num == 6 && mp <= 0)
		{
			cout << "MP가 부족하여 필살기 사용이 불가합니다." << endl;
		}
		else if (num == 7)
		{
			cout << "프로그램을 종료합니다.";
			return 0;
		}
	}
}