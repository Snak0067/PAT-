//#include<iostream>
//#include<string>
//#include<map>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//unordered_map<string, string>couple;
//map<string, int>single;
//map<string, int>guest;
//vector<string>v;
//
//int main() {
//	int n, k;
//	string man, woman, p;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> man >> woman;
//		couple[man] = woman;
//		couple[woman] = man;
//	}
//	scanf_s("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		cin >> p;
//		guest[p] = 1;
//		if (couple.find(p) == couple.end()) {
//			single[p] = 0;
//		}
//		else {
//			single[p]++;
//			single[couple[p]]++;
//		}
//	}
//	map<string, int>::iterator it = guest.begin();
//	while (it != guest.end()) {
//		if (single[it->first] == 0 || single[it->first] == 1)v.push_back(it->first);
//		it++;
//	}
//	printf("%d\n%s", v.size(), v[0].c_str());
//	for (int i = 1; i < v.size(); i++)
//	{
//		printf(" %s", v[i].c_str());
//	}
//
//	return 0;
//}