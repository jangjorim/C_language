#include "potato.h"

void story()            // 게임 엔딩 스토리
{
	system("cls");
	music_1();      // 기존 음악을 종료하고 게임 엔딩 음악을 실행한다.
	printf("시스템 종료중....\n\n\n");
	Sleep(13000);

	printf("지구는 의문의 전염병에 의해 모든 식물이 말라죽거거나 성장하지 않았다.\n\n");
	Sleep(5000);
	printf("전세계는 전염병백신을 만들고 실험하기 위해 계속 감자 재배 실험을 했다.\n\n");
	Sleep(5000);
	printf("하지만 노력에도 불구하고 프로젝트는 계속 실패했다.\n\n");
	Sleep(5000);
	printf("매일 모래폭풍이 몰아치고 태풍과 해일이 일상이 되었다.\n\n");
	Sleep(5000);
	printf("시간이 지나면서 지구는 황폐화 되고 지구는 더이상 사람이 살 수 없게 되었다.\n\n");
	Sleep(5000);
	printf("일부 생존소에서 살아남은 사람들은 성공할 때 까지 프로젝트를 계속 실행시켰다.\n\n");
	Sleep(5000);
	printf("...\n");
	Sleep(500);
	printf(".......\n\n");
	Sleep(3500);
	printf("END\n");
	Sleep(3500);
	exit(-1);
}
