//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>v;
//vector<int>ans;
//int main() {
//	int n, num = 0, lastIndex = -2, index = 0, temp = -1;
//	long long sum = 0;
//	scanf_s("%d", &n);
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &v[i]);
//		sum += v[i];
//	}
//	sort(v.begin(), v.end());
//	//bool continuous = false;
//	//while ((num < n / 2 || continuous || v[index] == temp) && index < n) {
//	//	if (num >= n / 2 && v[index] != temp) {
//	//		break;
//	//	}
//	//	if (v[index] != temp) {
//	//		num++;
//	//		lastIndex++;
//	//		ans.push_back(v[index]);
//	//		temp = v[index];
//	//		continuous = false;
//	//	}
//	//	else {
//	//		continuous = true;
//	//		if (num >= n / 2) {
//	//			if (lastIndex >= 0) {
//	//				ans[lastIndex] = v[index];
//	//				lastIndex--;
//	//			}
//	//			else {
//	//				num++;
//	//				ans.push_back(v[index]);
//	//			}
//	//		}
//	//		else {
//	//			num++;
//	//			ans.push_back(v[index]);
//	//		}
//	//	}
//	//	index++;
//	//}
//	for (int i = 0; i < n / 2; i++)
//	{
//		sum -= v[i] * 2;
//	}
//	printf("%d %lld", n % 2, sum);
//
//	return 0;
//}