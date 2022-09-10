//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	string school;
//	int rank, num = 0, tws = 0;
//	double score = 0;
//};
//unordered_map<string, int>mmap;
//vector<node>v;
//bool cmp(node a, node b) {
//	if (a.tws != b.tws)return a.tws > b.tws;
//	if (a.num != b.num)return a.num < b.num;
//	return a.school < b.school;
//}
//int main() {
//	string id, institution;
//	int	n, index = 0;
//	double score;
//	cin >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> id;
//		scanf("%lf", &score);
//		cin >> institution;
//		transform(institution.begin(), institution.end(), institution.begin(), ::tolower);
//		if (mmap.find(institution) == mmap.end()) {
//			mmap[institution] = index++;
//			v[mmap[institution]].school = institution;
//		}
//		v[mmap[institution]].num++;
//		switch (id[0])
//		{
//		case 'A':
//			v[mmap[institution]].score += score;
//			break;
//		case 'B':
//			v[mmap[institution]].score += (score / 1.5);
//			break;
//		case 'T':
//			v[mmap[institution]].score += (score * 1.5);
//			break;
//		default:
//			break;
//		}
//	}
//	for (int i = 0; i < index; i++)
//	{
//		v[i].tws = (int)(v[i].score);
//	}
//	sort(v.begin(), v.end(), cmp);
//	printf("%d\n", index);
//	for (int i = 0; i < index; i++)
//	{
//		if (i == 0) {
//			printf("1 %s %d %d\n", v[i].school.c_str(), v[i].tws, v[i].num);
//			v[i].rank = 1;
//		}
//		else if (v[i].tws == v[i - 1].tws) {
//			v[i].rank = v[i - 1].rank;
//			printf("%d %s %d %d\n", v[i].rank, v[i].school.c_str(), v[i].tws, v[i].num);
//		}
//		else {
//			v[i].rank = i + 1;
//			printf("%d %s %d %d\n", v[i].rank, v[i].school.c_str(), v[i].tws, v[i].num);
//		}
//	}
//
//	return 0;
//}