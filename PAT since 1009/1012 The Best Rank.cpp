//#include<iostream>
//#include<algorithm>
//#include<map>
//#include <string.h>
///*23分*/
//using namespace std;
//
//int N, M;
//class student {
//public:
//	char StudentID[7];
//	int C, M, E;
//	double A;
//	char rank[4] = { 'A','C' ,'M' ,'E' };
//	int rank_num[4];
//	double getScore(int  type) {
//		switch (type) {
//		case 0:
//			return A;
//		case 1:
//			return C;
//		case 2:
//			return M;
//		case 3:
//			return E;
//		}
//	}
//	void setRank(int rank, int  type) {
//		switch (type) {
//		case 0:
//			rank_num[0] = rank;
//			break;
//		case 1:
//			rank_num[1] = rank;
//			break;
//		case 2:
//			rank_num[2] = rank;
//			break;
//		case 3:
//			rank_num[3] = rank;
//			break;
//		}
//	}
//	void compare() {
//		changeValue(rank[0]) > changeValue(rank[1]) ? cout << rank[0] : cout << rank[1];
//		cout << "\n";
//	}
//	int changeValue(char ch) {
//		switch (ch) {
//		case 'A':
//			return 4;
//		case 'C':
//			return 3;
//		case 'M':
//			return 2;
//		case 'E':
//			return 1;
//		}
//	}
//	void bestRank() {
//		for (int i = 1; i < 4; i++) {
//			int temp = rank_num[i];
//			char name = rank[i];
//			int j = i - 1;
//			while (j >= 0 && temp < rank_num[j]) {
//				rank[j + 1] = rank[j];
//				rank_num[j + 1] = rank_num[j];
//				j--;
//			}
//			rank[j + 1] = name;
//			rank_num[j + 1] = temp;
//		}
//		if (rank_num[0] == rank_num[1]) {
//			printf("%d ", rank_num[0]);
//			compare();
//		}
//		else {
//			printf("%d ", rank_num[0]);
//			cout << rank[0] << endl;
//		}
//	}
//
//};
//int partition(student*& stu, int left, int right, int type) {
//	student temp = stu[left];//将student[left]存放至临时变量temp
//	while (left < right) {
//		while (left < right && stu[right].getScore(type) >= temp.getScore(type))right--;
//		stu[left] = stu[right];
//		while (left < right && stu[left].getScore(type) <= temp.getScore(type))left++;
//		stu[right] = stu[left];
//	}
//	stu[left] = temp;
//	return left;
//}
//void quickSort(student*& stu, int left, int right, int type) {
//	if (left < right) {
//		int pos = partition(stu, left, right, type);
//		quickSort(stu, left, pos - 1, type);
//		quickSort(stu, pos + 1, right, type);
//	}
//}
//void Rank(student*& stu, int len, int type) {
//	quickSort(stu, 0, len, type);
//	for (int i = len; i >= 0; i--) {
//		if (i != len && stu[i].getScore(type) == stu[i + 1].getScore(type)) {
//			stu[i].setRank(stu[i + 1].rank_num[type], type);
//		}
//		else {
//			stu[i].setRank(5 - i, type);
//		}
//	}
//}
//struct ptrCmp
//{
//	bool operator()(const char* s1, const char* s2) const
//	{
//		return strcmp(s1, s2) < 0;
//	}
//};
//
//int main() {
//	scanf_s("%d%d", &N, &M);
//	student* stu = new student[N];
//	char** charArray = new char* [M];
//	map<char*, student, ptrCmp> studentMap;
//	for (int i = 0; i < N; i++) {
//		cin >> stu[i].StudentID;
//		scanf_s("%d%d%d", &stu[i].C, &stu[i].M, &stu[i].E);
//		stu[i].A = ((double)stu[i].C + (double)stu[i].M + (double)stu[i].E) / 3.0;
//	}
//	for (int i = 0; i < 4; i++) {
//		Rank(stu, N - 1, i);
//		for (int j = 0; j < N; j++) {
//			cout << stu[j].getScore(i) << " ";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << stu[i].rank_num[j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		studentMap[stu[i].StudentID] = stu[i];
//	}
//
//	for (int i = 0; i < M; i++) {
//		charArray[i] = new char[7];
//		cin >> charArray[i];
//	}
//	for (int i = 0; i < M; i++) {
//		map<char*, student, ptrCmp>::iterator iter = studentMap.find(charArray[i]);
//		if (iter != studentMap.end()) {
//			iter->second.bestRank();
//		}
//		else {
//			printf("N/A\n");
//		}
//	}
//	return 0;
//}