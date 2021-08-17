#include "potato.h"

void music()
{
	PlaySound(TEXT(music1), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void music_1()
{
	PlaySound(TEXT(music2), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}