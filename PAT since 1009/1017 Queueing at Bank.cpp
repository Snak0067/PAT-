//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct node {
//	int hour, minute, second, time, process, timeToServe, timeToFinish;
//};
//bool cmp(node a, node b) {
//	return a.time < b.time;
//}
//bool cmp_serve(node a, node b) {
//	return a.timeToFinish > b.timeToFinish;
//}
//int main() {
//	int N, M, begin = 8 * 60 * 60, end = 17 * 60 * 60 + 1, count = 0;
//	double cost = 0.0;
//	cin >> N >> M;
//	vector<node>data(N);
//	vector<node>window;
//	for (int i = 0; i < N; i++) {
//		scanf_s("%d:%d:%d", &data[i].hour, &data[i].minute, &data[i].second);
//		cin >> data[i].process;
//		if (data[i].process > 60) data[i].process = 60;
//		data[i].time = data[i].hour * 60 * 60 + data[i].minute * 60 + data[i].second;
//	}
//	sort(data.begin(), data.end(), cmp);
//	for (int i = 0; i < M; i++)data[i].timeToServe = begin;
//	for (int i = 0; i < data.size(); i++) {
//		if (data[i].time < end) {
//			count++;
//			if (window.size() < 3) {
//				data[i].timeToFinish = data[i].timeToServe + data[i].process * 60;
//				window.push_back(data[i]);
//				if (data[i].timeToServe > data[i].time) cost += (data[i].timeToServe - data[i].time);
//			}
//			else {
//				sort(window.begin(), window.end(), cmp_serve);
//				data[i].timeToServe = window.back().timeToFinish;
//				if (data[i].timeToServe > data[i].time) cost += (data[i].timeToServe - data[i].time);
//				data[i].timeToFinish = data[i].timeToServe + data[i].process * 60;
//				window.pop_back();
//				window.push_back(data[i]);
//			}
//		}
//	}
//	count == 0 ? printf("0.0\n") : printf("%.1lf", cost / count / 60);
//	return 0;
//}