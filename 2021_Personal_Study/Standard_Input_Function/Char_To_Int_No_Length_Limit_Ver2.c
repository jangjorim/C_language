//#include <stdio.h>
//
//void main() {
//	int num = 0, count = 0;
//	char num_string[4] = "123";
//
//	// 문자열이 끝날 때 까지 반복함
//	while (num_string[count] != 0) {
//		// 반복하면서 이전값에 * 10을 해주면서 자릿수를 맞춰준다.
//		num = num * 10 + (num_string[count] - '0');
//		count++;
//	}
//	// 문자열과 문자열을 정수형으로 변환한 값을 출력한다.
//	printf(" %s -> %d \n", num_string, num);
//}