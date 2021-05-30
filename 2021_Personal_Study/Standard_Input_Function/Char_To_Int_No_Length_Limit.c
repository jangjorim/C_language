//#include <stdio.h>
//#include <string.h>			// 문자열 길이를 구하는 strlen 함수를 사용하기 위한 헤더파일 
//
//void main() {
//	int pos_num = 1, num = 0, i, count;
//	char num_string[4] = "123";
//
//	// 문자열의 길이를 구해서 저장
//	count = strlen(num_string);
//	
//	// 문자열의 길이만큼 자릿수의 위치를 맞춰줘야 하므로 실행되는 구문이다.
//	for (i = 0; i < count - 1; i++) pos_num = pos_num * 10;
//
//	// 문자열의 길이만큼 반복한다.
//	for (i = 0; i < count; i++) {
//		num = num + (num_string[i] - '0') * pos_num;
//		printf("%d ", num);
//		pos_num = pos_num / 10;
//	}
//	printf(" %s - > %d \n", num_string, num);
//}