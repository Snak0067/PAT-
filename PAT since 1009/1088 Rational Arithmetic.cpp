//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//long long a, b, c, d;
//long long greatest_common_divisor(long long t1, long long t2) {
//	return t2 == 0 ? t1 : greatest_common_divisor(t2, t1 % t2);
//}
//void func(long long m, long long n) {
//	if (m * n == 0) {
//		printf("%s", n == 0 ? "Inf" : "0");
//		return;
//	}
//	bool flag = (m < 0 && n>0) || (m > 0 && n < 0);
//	m = abs(m);
//	n = abs(n);
//	long long x = m / n;
//	printf("%s", flag ? "(-" : "");
//	if (x != 0)printf("%lld", x);
//	if (m % n == 0) {
//		if (flag)printf(")");
//		return;
//	}
//	if (x != 0)printf(" ");
//	m = m - x * n;
//	long long t = greatest_common_divisor(m, n);
//	m = m / t; n = n / t;
//	printf("%lld/%lld%s", m, n, flag ? ")" : "");
//}
//
//int main() {
//	scanf_s("%lld/%lld %lld/%lld", &a, &b, &c, &d);
//	func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
//	func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
//	func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
//	func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c); printf("\n");
//
//	return 0;
//}