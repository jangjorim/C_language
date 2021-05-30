//#include <stdio.h>
//
//void main() {
//	// pos_num 은 각 자리에 곱할 숫자, num은 정수로 변환될 숫자를 저장할 변수, 
//	int pos_num = 100, num = 0, i, temp_num;
//	// 정수로 변환할 문자열 //
//	char num_string[4] = "123";
//
//	for (i = 0; i < 3; i++) {
//		// 각 항목을 정수화함
//		temp_num = num_string[i] - '0';
//		// 정수화 후 각자리에 맞도록 곱해주는 작업을 함
//		num = num + temp_num * pos_num;
//		// 100 -> 10 -> 1 이렇게 다음 자릿수를 위해 10으로 나누어준다.
//		pos_num = pos_num / 10;
//	}
//	// 변환전 문자열과 변환후 정수값을 출력
//	printf("%s -> %d \n", num_string, num);
//}