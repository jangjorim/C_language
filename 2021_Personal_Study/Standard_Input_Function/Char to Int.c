//#include <stdio.h>
//
//void main() {
//	// pos_num �� �� �ڸ��� ���� ����, num�� ������ ��ȯ�� ���ڸ� ������ ����, 
//	int pos_num = 100, num = 0, i, temp_num;
//	// ������ ��ȯ�� ���ڿ� //
//	char num_string[4] = "123";
//
//	for (i = 0; i < 3; i++) {
//		// �� �׸��� ����ȭ��
//		temp_num = num_string[i] - '0';
//		// ����ȭ �� ���ڸ��� �µ��� �����ִ� �۾��� ��
//		num = num + temp_num * pos_num;
//		// 100 -> 10 -> 1 �̷��� ���� �ڸ����� ���� 10���� �������ش�.
//		pos_num = pos_num / 10;
//	}
//	// ��ȯ�� ���ڿ��� ��ȯ�� �������� ���
//	printf("%s -> %d \n", num_string, num);
//}