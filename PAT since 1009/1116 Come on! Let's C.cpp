//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//map<string, int>visit;
//map<string, int>mmap;
//bool prime(int num) {
//	if (num == 2 || num == 3)return true;
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)return false;
//	}
//	return true;
//}
//int main() {
//	int n;
//	string name;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> name;
//		mmap[name] = i;
//	}
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name;
//		if (mmap.find(name) == mmap.end()) {
//			printf("%s: Are you kidding?", name.c_str());
//		}
//		else {
//			if (visit.find(name) == visit.end()) {
//				visit[name] = 1;
//				int rank = mmap[name];
//				if (rank == 1) {
//					printf("%s: Mystery Award", name.c_str());;
//				}
//				else if (prime(rank)) {
//					printf("%s: Minion", name.c_str());
//				}
//				else {
//					printf("%s: Chocolate", name.c_str());
//				}
//			}
//			else {
//				printf("%s: Checked", name.c_str());
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}