//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//const int maxn = 1005;
////an:多项式A的项数, bn:多项式B的项数 A[1005][2]:第一项 次数 第二项 系数
//int an, bn, power, localPower;
//double  A[maxn][2], coefficient, localCoefficient;
//map<int, double>resultMap;
//int main() {
//	scanf_s("%d", &an);
//	for (int i = 0; i < an; i++) {
//		scanf_s("%lf", &A[i][0]);
//		scanf_s("%lf", &A[i][1]);
//	}
//	scanf_s("%d", &bn);
//	for (int i = 0; i < an; i++) {
//		scanf_s("%d", &power);
//		scanf_s("%lf", &coefficient);
//		for (int j = 0; j < an; j++) {
//			localPower = A[j][0] + power;
//			localCoefficient = A[j][1] * coefficient;
//			if (resultMap.find(localPower) != resultMap.end()) {
//				resultMap[localPower] = resultMap[localPower] + localCoefficient;
//			}
//			else {
//				resultMap[localPower] = localCoefficient;
//			}
//			localPower = 0;
//			localCoefficient = 0;
//		}
//	}
//	printf("%d", resultMap.size());
//	for (map<int, double>::iterator it = resultMap.end(); it != resultMap.begin();) {
//		it--;
//		if (abs(it->second - 0) > 0.00000001) {
//			printf(" %d %.1f", it->first, it->second);
//		}
//	}
//	return 0;
//}