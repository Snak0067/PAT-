//#include<iostream>
//#include<cmath>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//map<int, string>cmap;
//
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	cmap[0] = "ling";
//	cmap[1] = "yi";
//	cmap[2] = "er";
//	cmap[3] = "san";
//	cmap[4] = "si";
//	cmap[5] = "wu";
//	cmap[6] = "liu";
//	cmap[7] = "qi";
//	cmap[8] = "ba";
//	cmap[9] = "jiu";
//	cmap[10] = "Shi";
//	cmap[100] = "Bai";
//	cmap[1000] = "Qian";
//	cmap[10000] = "Wan";
//	bool pre = false, hasZero = false, hasFirst = false;
//
//	if (n < 0) {
//		printf("Fu");
//		n = abs(n);
//		hasFirst = true;
//	}
//	if (n / 100000000 != 0) {
//		if (hasFirst) {
//			printf(" %s Yi", cmap[n / 100000000].c_str());
//		}
//		else {
//			printf("%s Yi", cmap[n / 100000000].c_str());
//			hasFirst = true;
//		}
//
//		n %= 100000000;
//		pre = true;
//	}
//	int digit[4] = { 0 }, temp = n / 10000, mult = 1000, positive = n / 10000;
//	for (int i = 3; temp != 0 && i >= 0; i--)
//	{
//		int d = temp % 10;
//		temp /= 10;
//		digit[i] = d;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		if (digit[i] == 0 && pre) {
//			hasZero = !hasZero;
//		}
//		else if (digit[i] > 0) {
//			if (hasZero && pre) {
//				printf(" ling");
//				pre = false;
//				hasZero = false;
//			}
//			if (hasFirst) {
//				printf(" %s", cmap[digit[i]].c_str());
//			}
//			else {
//				printf("%s", cmap[digit[i]].c_str());
//				hasFirst = true;
//			}
//			if (cmap[mult] != "yi") {
//				printf(" %s", cmap[mult].c_str());
//			}
//			pre = true;
//		}
//		mult /= 10;
//	}
//	if (positive > 0) {
//		printf(" Wan");
//	}
//	int number[4] = { 0 }, num = n % 10000, mul = 1000;
//	for (int i = 3; num != 0 && i >= 0; i--)
//	{
//		int d = num % 10;
//		num /= 10;
//		number[i] = d;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		if (number[i] == 0 && pre) {
//			hasZero = true;
//		}
//		else if (number[i] > 0) {
//			if (hasZero && pre) {
//				printf(" ling");
//				pre = false;
//				hasZero = false;
//			}
//			if (hasFirst) {
//				printf(" %s", cmap[number[i]].c_str());
//			}
//			else {
//				printf("%s", cmap[number[i]].c_str());
//				hasFirst = true;
//			}
//			if (cmap[mul] != "yi") {
//				printf(" %s", cmap[mul].c_str());
//			}
//			pre = true;
//		}
//		mul /= 10;
//	}
//	cout << endl;
//	return 0;
//}