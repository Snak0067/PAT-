//#include<iostream>
//#include<algorithm>
//using namespace std;
////[-2^63,2^63] long long
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		long long a, b, c;
//		scanf("%lld%lld%lld", &a, &b, &c);
//		long long sum = a + b;
//		if (a > 0 && b > 0 && sum < 0) {
//			printf("Case #%d: true\n", i + 1);
//		}
//		else if (a < 0 && b < 0 && sum >= 0) {
//			printf("Case #%d: false\n", i + 1);
//		}
//		else if (sum > c) {
//			printf("Case #%d: true\n", i + 1);
//		}
//		else {
//			printf("Case #%d: false\n", i + 1);
//		}
//	}
//	return 0;
//}