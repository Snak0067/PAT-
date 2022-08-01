//#include<iostream>
//#include<string>
//#include<map>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//long int N;
//map<long int, int>digit;
//int prime(int x) {
//	if (x == 1)return 2;
//	if (x == 2)return 3;
//	bool match = true;
//	while (match) {
//		x++;
//		match = false;
//		for (int i = 2; i <= sqrt(x); i++) {
//			if (x % i == 0) {
//				match = true;
//				break;
//			}
//		}
//	}
//	return x;
//}
//int main() {
//	scanf_s("%ld", &N);
//	long int M = N;
//	int currentPrime = 2;
//	while (N != 0 && currentPrime <= N) {
//		int exponent = 0;
//		while (N % currentPrime == 0) {
//			exponent++;
//			N = N / currentPrime;
//		}
//		if (exponent >= 1)digit[currentPrime] = exponent;
//		currentPrime = prime(currentPrime);
//	}
//	map<long int, int>::iterator iter = digit.begin();
//	printf("%ld=", M);
//	if (M == 1)printf("1");
//	else {
//		if (iter->second > 1) {
//			printf("%d^%d", iter->first, iter->second);
//		}
//		else {
//			printf("%d", iter->first);
//		}
//		iter++;
//		while (iter != digit.end()) {
//			printf("*");
//			if (iter->second > 1) {
//				printf("%d^%d", iter->first, iter->second);
//			}
//			else {
//				printf("%d", iter->first);
//			}
//			iter++;
//		}
//	}
//	
//	return 0;
//}