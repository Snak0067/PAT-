//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//long long maxCommonFactor(long long a, long long b) {
//	long long maxCommon = 1;
//	if (max(a, b) % min(a, b) == 0)return min(a, b);
//	bool hasFactor = true;
//	while (hasFactor) {
//		hasFactor = false;
//		long long minn = min(a, b);
//		for (int i = 2; i < minn; i++)
//		{
//			if (a % i == 0 && b % i == 0) {
//				maxCommon *= i;
//				hasFactor = true;
//				a /= i;
//				b /= i;
//				break;
//			}
//		}
//	}
//	return maxCommon;
//}
//long long numerator[105];
//long long denominator[105];
//
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	string num;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		int sp = num.find('/');
//		numerator[i] = stoi(num.substr(0, sp));
//		denominator[i] = stoi(num.substr(sp + 1, num.length()));
//	}
//	long long son = numerator[0], mom = denominator[0];
//	for (int i = 1; i < n; i++)
//	{
//		long long mula, mulb, target;
//		long long othermom = denominator[i], otherson = numerator[i];
//		if (othermom == 0 || otherson == 0)continue;
//		if (mom == 0 || son == 0) {
//			mom = othermom;
//			son = otherson;
//			continue;
//		}
//		long long comfac = maxCommonFactor(mom, othermom);
//		if (comfac == 1) {
//			target = othermom * mom;
//			mula = othermom;
//			mulb = mom;
//		}
//		else {
//			target = (othermom / comfac) * (mom / comfac) * comfac;
//			mula = target / mom;
//			mulb = target / othermom;
//		}
//		mom = target;
//		son = son * mula + mulb * otherson;
//		if (mom != 0 && son != 0) {
//			comfac = maxCommonFactor(mom, son);
//			mom = mom / comfac;
//			son = son / comfac;
//		}
//	}
//	long int Inter = son / mom;
//	if (son == 0) {
//		printf("%d", 0);
//	}
//	else if (son % mom == 0) {
//		printf("%d", Inter);
//	}
//	else if (Inter != 0) {
//		printf("%d %d/%d", Inter, son % mom, mom);
//	}
//	else {
//		printf("%d/%d", son % mom, mom);
//	}
//	return 0;
//}