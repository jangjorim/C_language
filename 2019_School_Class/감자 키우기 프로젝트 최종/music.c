#include "potato.h"

void music()			// �Ϲ����� �÷��� �������� ��� ������ ���� ���ϴ� ������ ����� �� �ִ�.
{
	PlaySound(TEXT(music1), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void music_1()			// ���� ���� �÷��� �Լ��̴�.
{
	PlaySound(TEXT(music2), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}