//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//double temp, num[3];
//int index[3];
//
//int main() {
//	for (int i = 0; i < 3; i++) {
//		scanf_s("%lf", &num[i]);
//		for (int j = 0; j < 2; j++) {
//			scanf_s("%lf", &temp);
//			if (temp > num[i]) {
//				num[i] = temp;
//				index[i] = j + 1;
//			}
//		}
//
//	}
//	for (int i = 0; i < 3; i++) {
//		switch (index[i]) {
//		case 0:
//			cout << "W ";
//			break;
//		case 1:
//			cout << "T ";
//			break;
//		case 2:
//			cout << "L ";
//			break;
//		}
//	}
//	printf("%.2f", (num[0] * num[1] * num[2] * 0.65 - 1) * 2);
//	return 0;
//}