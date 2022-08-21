//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//unordered_map<char, int>beads_provided;
//unordered_map<char, int>beads_need;
//int extra = 0, missing = 0;
//
//int main() {
//	string bead1, bead2;
//	cin >> bead1 >> bead2;
//	for (char ch : bead1)beads_provided[ch]++;
//	for (char ch : bead2)beads_need[ch]++;
//	unordered_map<char, int>::iterator it = beads_need.begin();
//	while (it != beads_need.end()) {
//		beads_provided[it->first] -= it->second;
//		if (beads_provided[it->first] < 0) {
//			missing += abs(beads_provided[it->first]);
//		}
//		it++;
//	}
//	if (missing > 0) {
//		printf("No %d", missing);
//	}
//	else {
//		unordered_map<char, int>::iterator it = beads_provided.begin();
//		while (it != beads_provided.end()) {
//			extra += it->second;
//			it++;
//
//		}
//		printf("Yes %d", extra);
//	}
//	return 0;
//}