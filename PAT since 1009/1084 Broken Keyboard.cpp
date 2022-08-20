//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	string original, typed_out;
//	cin >> original >> typed_out;
//	transform(original.begin(), original.end(), original.begin(), ::toupper);
//	transform(typed_out.begin(), typed_out.end(), typed_out.begin(), ::toupper);
//	unordered_map<char, int>originalMap, typed_out_Map;
//	for (char ch : typed_out)
//	{
//		typed_out_Map[ch]++;
//	}
//	for (char ch : original) {
//		if (typed_out_Map.find(ch) == typed_out_Map.end() && originalMap.find(ch) == originalMap.end()) {
//			originalMap[ch]++;
//			printf("%c", ch);
//		}
//	}
//
//	return 0;
//}