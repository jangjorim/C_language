#include <stdio.h>             // 프로그램에서 선언해야 하는 구문을 작성해 두었다.
#include<windows.h>
#include <stdlib.h>
#include <conio.h> 
#include<mmsystem.h>
#pragma comment(lib, "winmm.lib")
#pragma warning(disable:4996)            // scanf 오류문제 해결
#define music1 "D:\\Codes\\뻐꾸기c\\프로젝트 2 연구용 1\\프로젝트 2 연구용\\헤네시스 - FloralLife.wav"
#define music2 "D:\\Codes\\뻐꾸기c\\프로젝트 2 연구용 1\\프로젝트 2 연구용\\Interstellar-First Step.wav"



int time();
int box();
int login();
void gotoxy(int x, int y);
void game_start();
void item();
void stop();
void list();
void p_print();
void story();
void hint();
void music();
void music_1();
