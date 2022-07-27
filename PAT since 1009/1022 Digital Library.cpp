//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<map>
//using namespace std;
//
//struct book {
//	string id, title, author, publisher, year;
//	map<string, int>keywords;
//	bool operator <(const book& mybook)const {
//		return id < mybook.id;
//	}
//	bool operator >(const book& mybook)const {
//		return id > mybook.id;
//	}
//};
//
//int main() {
//	int n, m;
//	string content;
//	scanf_s("%d", &n);
//	getline(cin, content);
//	vector<book>books;
//	for (int i = 0; i < n; i++) {
//		book b;
//		getline(cin, b.id);
//		getline(cin, b.title);
//		getline(cin, b.author);
//		string keywords = "";
//		getline(cin, keywords);
//		int index = keywords.find(" ");
//		while (index != string::npos) {
//			b.keywords[keywords.substr(0, index)] = 1;
//			keywords = keywords.substr(index + 1, keywords.length());
//			index = keywords.find(" ");
//		}
//		b.keywords[keywords] = 1;
//		getline(cin, b.publisher);
//		getline(cin, b.year);
//		books.push_back(b);
//	}
//	scanf_s("%d", &m);
//	getline(cin, content);
//
//	sort(books.begin(), books.end(), less<book>());
//
//	for (int i = 0; i < m; i++) {
//		getline(cin, content);
//		cout << content << endl;
//		int type = content[0] - '0';
//		content = content.substr(content.find_first_of(':') + 2, content.length());
//		bool match = false;
//		switch (type)
//		{
//		case 1:
//			for (int i = 0; i < books.size(); i++) {
//				if (content.compare(books[i].title) == 0) {
//					cout << books[i].id << endl; match = true;
//				}
//			}
//			break;
//		case 2:
//			for (int i = 0; i < books.size(); i++) {
//				if (content.compare(books[i].author) == 0) {
//					cout << books[i].id << endl; match = true;
//				}
//			}
//			break;
//		case 3:
//			for (int i = 0; i < books.size(); i++) {
//				if (books[i].keywords.find(content) != books[i].keywords.end()) {
//					cout << books[i].id << endl; match = true;
//				}
//			}
//			break;
//		case 4:
//			for (int i = 0; i < books.size(); i++) {
//				if (content.compare(books[i].publisher) == 0) {
//					cout << books[i].id << endl; match = true;
//				}
//			}
//			break;
//		case 5:
//			for (int i = 0; i < books.size(); i++) {
//				if (content.compare(books[i].year) == 0) {
//					cout << books[i].id << endl; match = true;
//				}
//			}
//			break;
//		default:
//			break;
//
//		}
//		if (match == false)cout << "Not Found" << endl;
//
//	}
//
//	return 0;
//}