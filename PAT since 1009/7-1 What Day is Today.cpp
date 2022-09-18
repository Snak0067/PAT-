//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//map<int, string> mmap;
//int main() {
//	vector<int>a(3), b(3);
//	int day;
//	string today, right1, right2;
//	mmap[7] = "Sunday";
//	mmap[1] = "Monday";
//	mmap[2] = "Tuesday";
//	mmap[3] = "Wednesday";
//	mmap[4] = "Thursday";
//	mmap[5] = "Friday";
//	mmap[6] = "Saturday";
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &day);
//		a[i] = (day == 0 ? 7 : day);
//	}
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &day);
//		b[i] = (day == 0 ? 7 : day);
//	}
//	bool find = false;
//	for (int i = 0; i < 3 && !find; i++)
//	{
//		for (int j = 0; j < 3 && !find; j++)
//		{
//			if (j - i == b[j] - a[i]) {
//				if (i == 0) {
//					today = mmap[a[i] + 1];
//					right1 = "yesterday";
//				}
//				else if (i == 1) {
//					today = mmap[a[i]];
//					right1 = "today";
//				}
//				else if (i == 2) {
//					today = mmap[a[i] - 1];
//					right1 = "tomorrow";
//				}
//				if (j == 0) right2 = "yesterday";
//				else if (j == 1)right2 = "today";
//				else if (j == 2)right2 = "tomorrow";
//				printf("%s\n%s\n%s\n", today.c_str(), right1.c_str(), right2.c_str());
//				return 0;
//			}
//		}
//	}
//	return 0;
//}