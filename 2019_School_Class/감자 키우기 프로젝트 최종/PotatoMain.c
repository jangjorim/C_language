#include "potato.h"


int main()
{
	login();			// �α����� ����
	game_start();		// ������ ���۵ǰ�
	music();			// ������ ����ȴ�.
	while (1)
	{
		box();			// box()�Լ� �ȿ����� �ð��� �带�� �ֵ��� �Ͽ���. 
		Sleep(1000);
		system("cls");
	}
}
