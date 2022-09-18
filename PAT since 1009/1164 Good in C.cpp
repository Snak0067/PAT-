//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//char letter[26][7][5];
//
//
//int main() {
//	for (int i = 0; i < 26; i++) {
//		for (int j = 0; j < 7; j++) {
//			for (int k = 0; k < 5; k++) {
//				cin >> letter[i][j][k];
//			}
//		}
//	}
//	string sentence;
//	getline(cin, sentence);
//	getline(cin, sentence);
//	vector<string>s;
//	string temp;
//	transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
//	for (int i = 0; i < sentence.size(); i++)
//	{
//		if (sentence[i] < 'a' || sentence[i]>'z') {
//			if (temp.size() > 0) {
//				s.push_back(temp);
//				temp.clear();
//			}			
//		}
//		else {
//			temp.push_back(sentence[i]);
//		}
//	}
//	if (temp.size() > 0)s.push_back(temp);
//	for (int i = 0; i < s.size(); i++) {
//		int wordLen = s[i].length();
//		for (int j = 0; j < 7; j++) {
//			for (int k = 0; k < wordLen; k++) {
//				for (int u = 0; u < 5; u++) {
//					cout << letter[s[i][k] - 'a'][j][u];
//				}
//				if (k < wordLen - 1)cout << " ";
//			}
//			cout << "\n";
//		}
//		if (i < s.size() - 1)cout << "\n";
//	}
//	return 0;
//}