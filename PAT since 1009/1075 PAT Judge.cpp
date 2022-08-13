//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct people
//{
//	string id;
//	int solved[6] = { -2,-2,-2,-2,-2,-2 };
//	int scores = -1, perfectNum = 0, index = 0;
//	bool activited = false;
//};
//vector<people>v;
//vector<int>problem_score;
//bool cmp(people p1, people p2) {
//	if (p1.scores != p2.scores)return p1.scores > p2.scores;
//	if (p1.perfectNum != p2.perfectNum)return p1.perfectNum > p2.perfectNum;
//	return p1.id < p2.id;
//}
//int main() {
//	int n, k, m, xuhao, score;
//	string userid;
//	scanf_s("%d %d %d", &n, &k, &m);
//	v.resize(n);
//	problem_score.resize(k + 1);
//	for (unsigned i = 1; i <= k; i++)
//	{
//		scanf_s("%d", &problem_score[i]);
//	}
//	for (unsigned i = 0; i < m; i++)
//	{
//		cin >> userid;
//		int id = stoi(userid.c_str());
//		scanf_s("%d %d", &xuhao, &score);
//		people p = v[id - 1];
//		p.id = userid;
//		if (score > p.solved[xuhao]) {
//			if (p.solved[xuhao] > 0) {
//				p.scores = p.scores - p.solved[xuhao] + score;
//			}
//			else if (score >= 0) {
//				if (p.scores == -1)p.scores = 0;
//				p.activited = true;
//				p.scores += score;
//			}
//			p.solved[xuhao] = score;
//			if (score == problem_score[xuhao])p.perfectNum++;
//		}
//		v[id - 1] = p;
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (unsigned i = 0; i < v.size(); i++)
//	{
//		if (v[i].activited) {
//			people p = v[i];
//			if (i == 0) {
//				p.index = 1;
//			}
//			else if (p.scores == v[i - 1].scores) {
//				p.index = v[i - 1].index;
//			}
//			else {
//				p.index = i + 1;
//			}
//			v[i] = p;
//			printf("%d %s %d ", p.index, p.id.c_str(), p.scores);
//			unsigned u;
//			for (u = 1; u < k; u++)
//			{
//				if (p.solved[u] == -2)printf("- ");
//				else if (p.solved[u] == -1 || p.solved[u] == 0)printf("0 ");
//				else printf("%d ", p.solved[u]);
//			}
//			if (p.solved[u] == -2)printf("-\n");
//			else if (p.solved[u] == -1 || p.solved[u] == 0)printf("0\n");
//			else printf("%d\n", p.solved[u]);
//		}
//	}
//	return 0;
//}