#include "potato.h"

void music()			// 일반적인 플레이 음악으로 경로 설정을 통해 원하는 음악을 재생할 수 있다.
{
	PlaySound(TEXT(music1), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void music_1()			// 엔딩 음악 플레이 함수이다.
{
	PlaySound(TEXT(music2), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}