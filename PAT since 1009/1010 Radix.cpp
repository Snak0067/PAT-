//#include<iostream>
//using namespace std;
///*
//��һ�������ǿ��ǵ�����̫��������longlong����
//Ȼ����ö��ַ�����С�߽��� λ��������+1 �� ���߽���N1+1
//*/
//int tag, radix, product = 1;
//char n1[11], n2[11];//�ַ����� ÿλ0-z
//int N1[11], N2[11];//������������ ÿλ0-35
//int changeArray(char* n, int* N);
//int number = 0;
//int maxNum(int* N);
//
//int main() {
//	scanf_s("%s", &n1, sizeof(n1));
//	scanf_s("%s", &n2, sizeof(n2));
//	scanf_s("%d", &tag);
//	scanf_s("%d", &radix);
//	//�����֪�Ľ����ǵ�һ�����ģ���ô�Ƚ���һ����ת����10��������ʾ
//	if (tag == 1) {
//		for (int i = changeArray(n1, N1) - 1; i >= 0; i--) {
//			number += N1[i] * product;
//			product *= radix;
//		}
//		int N2Len = changeArray(n2, N2);
//		for (int myRadix = maxNum(N2) + 1; myRadix <= 10000; myRadix++) {
//			int localSum = 0;
//			product = 1;
//			for (int i = N2Len - 1; i >= 0; i--) {
//				localSum += N2[i] * product;
//				product *= myRadix;
//			}
//			if (localSum == number) {
//				myRadix == 1 ? myRadix = 2 : myRadix = myRadix;
//				printf_s("%d", myRadix);
//				return 0;
//			}
//		}
//		printf_s("Impossible");
//		return 0;
//	}
//	else {
//		for (int i = changeArray(n2, N2) - 1; i >= 0; i--) {
//			number += N2[i] * product;
//			product *= radix;
//		}
//		int N1Len = changeArray(n1, N1);
//		for (int myRadix = maxNum(N1) + 1; myRadix <= 10000; myRadix++) {
//			int localSum = 0;
//			product = 1;
//			for (int i = N1Len - 1; i >= 0; i--) {
//				localSum += N1[i] * product;
//				product *= myRadix;
//			}
//			if (localSum == number) {
//				myRadix == 1 ? myRadix = 2 : myRadix = myRadix;
//				printf_s("%d", myRadix);
//				return 0;
//			}
//		}
//		printf_s("Impossible");
//		return 0;
//	}
//
//	return 0;
//}
//int changeArray(char* n, int* N) {
//	int length = 0;
//	for (int i = 0; n[i] != '\0'; i++) {
//		if (n[i] >= '0' && n[i] <= '9') {
//			N[i] = n[i] - '0';
//		}
//		else if (n[i] >= 'a' && n[i] <= 'z') {
//			N[i] = n[i] - 'a' + 10;
//		}
//		length++;
//	}
//	return length;
//}
//int maxNum(int* N) {
//	int max = N[0];
//	for (int i = 1; N[i] != '\0'; i++) {
//		if (max < N[i])max = N[i];
//	}
//	return max;
//}