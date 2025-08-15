#include "State.h"
#include <iostream>

using namespace std;

int main()
{
	int hp = 0; // ������� �Է��� ���� ���� ����
	int mp = 0;
	int ad = 0;
	int df = 0;
	State s; // State Ŭ����

	
	while (hp <= 50 || mp <= 50) // hp, mp ���� �ϳ��� 50 ������ �� ���Է� �ޱ� ���� �ݺ���
	{
		cout << "HP �Է�: ";
		cin >> hp;

		cout << "MP �Է�: ";
		cin >> mp;
		
		if (hp <= 50 || mp <= 50) // �ٽ� �Է��϶�� ���� ����� ���� ���ǹ�
		{
			cout << "HP�� MP�� ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���." << endl;
		}
	}

	s.setHP(hp); // �Է¹��� hp���� State�� HP�� ����.
	s.setMP(mp); // �Է¹��� mp���� State�� MP�� ����.

	while (ad <= 0 || df <= 0) // ad, df ���� �ϳ��� 0 ������ �� ���Է� �ޱ� ���� �ݺ���
	{
		cout << "���ݷ� �Է�: ";
		cin >> ad;

		cout << "���� �Է�: ";
		cin >> df;

		if (ad <= 0 || df <= 0) // �ٽ� �Է��϶�� ���� ����� ���� ���ǹ�
		{
			cout << "���ݷ°� ������ ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���." << endl;
		}
	}

	s.setAD(ad); // �Է¹��� ad���� State�� AD�� ����.
	s.setDF(df); // �Է¹��� df���� State�� DF�� ����.

	int CounthpPotion = 0; // hp ���� ����
	int CountmpPotion = 0; // mp ���� ����

	s.setPotion(5, &CounthpPotion, &CountmpPotion);

	cout << "* ������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��)" << endl << "=====================================================================" << endl;

	int num = 0; // ������ �Է� ���� ���� ����

	//���� ���� �ý��� ����
	
	cout << "1. HP ȸ�� 2. MP ȸ�� 3. HP ��ȭ 4. MP ��ȭ 5. ���� ��ų ��� 6. �ʻ�� ��� 7. ������" << endl;
	while(num <= 7)
	{
		cout << "��ȣ�� �������ּ���: ";
		cin >> num; // ������ �Է�

		if (num == 1 && CounthpPotion > 0)
		{
			hp += 20;
			CounthpPotion -= 1;
			cout << "HP 20ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl << "���� HP : " << hp << endl << "���� HP���� : " << CounthpPotion << endl;
		}
		else if (num == 1 && CounthpPotion <= 0)
		{
			cout << "HP������ �����մϴ�." << endl;
		}
		else if (num == 2 && CountmpPotion > 0)
		{
			mp += 20;
			CountmpPotion -= 1;
			cout << "MP 20ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl << "���� MP : " << mp << endl << "���� MP���� : " << CountmpPotion << endl;
		}
		else if (num == 2 && CountmpPotion <= 0)
		{
			cout << "MP������ �����մϴ�." << endl;
		}
		else if (num == 3)
		{
			hp *= 2;
			cout << "HP�� 2�� ȸ���ƽ��ϴ�. ���� HP: " << hp << endl;
		}
		else if (num == 4)
		{
			mp *= 2;
			cout << "MP�� 2�� ȸ���ƽ��ϴ�. ���� HP: " << mp << endl;
		}
		else if (num == 5 && mp > 50)
		{
			mp -= 50;
			cout << "* ��ų�� ����Ͽ� MP�� 50 �Ҹ�Ǿ����ϴ�." << endl << "���� MP: " << mp << endl;
		}
		else if (num == 5 && mp <= 50)
		{
			cout << "MP�� �����Ͽ� ��ų ����� �Ұ��մϴ�." << endl;
		}
		else if (num == 6 && mp > 0)
		{
			mp /= 2;
			cout << "* �ʻ�⸦ ����Ͽ� MP 50% �Ҹ��մϴ�." << endl << "���� MP: " << mp << endl;
		}
		else if (num == 6 && mp <= 0)
		{
			cout << "MP�� �����Ͽ� �ʻ�� ����� �Ұ��մϴ�." << endl;
		}
		else if (num == 7)
		{
			cout << "���α׷��� �����մϴ�.";
			return 0;
		}
	}
}