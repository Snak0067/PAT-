//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//bool prime(int num) {
//	if (num <= 1)return false;
//	for (int i = 2; i * i <= num; i++)
//		if (num % i == 0)return false;
//	return true;
//}
//int sexy(int num) {
//	if (!prime(num))return -1;
//	if (prime(num - 6))return num - 6;
//	if (prime(num + 6))return num + 6;
//	return -1;
//}
//
//int main() {
//	int num;
//	cin >> num;
//	int sex = sexy(num);
//	if (sex != -1) {
//		printf("Yes\n%d", sex);
//	}
//	else {
//		printf("No\n");
//		do {
//			num++;
//		} while (sexy(num) == -1);
//		printf("%d", num);
//	}
//
//	return 0;
//}