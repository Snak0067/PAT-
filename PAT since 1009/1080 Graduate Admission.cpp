//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct student {
//	int Ge, Gi, index, id;
//	double finalG;
//	vector<int>application;
//};
//bool cmp(student s1, student s2) {
//	if (s1.finalG != s2.finalG)return s1.finalG > s2.finalG;
//	return s1.Ge > s2.Ge;
//}
//int n, m, k;
//vector<int>quota;
//vector<int>school[105];
//vector<student>v;
//int adminLast[105];
//int main() {
//	scanf("%d %d %d", &n, &m, &k);
//	v.resize(n);
//	quota.resize(m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &quota[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		student s;
//		scanf("%d %d", &s.Ge, &s.Gi);
//		s.finalG = (s.Ge * 1.0 + s.Gi) / 2;
//		s.application.resize(k);
//		s.id = i;
//		for (int u = 0; u < k; u++)
//		{
//			scanf("%d", &s.application[u]);
//		}
//		v[i] = s;
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (i == 0) {
//			v[i].index = 1;
//		}
//		else if (v[i].finalG == v[i - 1].finalG && v[i].Ge == v[i - 1].Ge) {
//			v[i].index = v[i - 1].index;
//		}
//		else {
//			v[i].index = i + 1;
//		}
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		student stu = v[i];
//		vector<int>app = v[i].application;
//		for (int u = 0; u < app.size(); u++)
//		{
//			if (quota[app[u]] > school[app[u]].size() || adminLast[app[u]] == stu.index) {
//				school[app[u]].push_back(stu.id);
//				adminLast[app[u]] = stu.index;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		vector<int>stuList = school[i];
//		sort(stuList.begin(), stuList.end(), less<int>());
//		int u;
//		int x = stuList.size() - 1;
//		for (u = 0; u < x; u++)
//		{
//			printf("%d ", stuList[u]);
//		}
//		if (stuList.size() > 0)printf("%d", stuList[u]);
//		printf("\n");
//	}
//	return 0;
//}