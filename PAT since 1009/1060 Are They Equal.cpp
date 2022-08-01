//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//char a[10000], b[10000], A[10000], B[10000];
//
//int main() {
//	int n, p = 0, q = 0;
//	scanf_s("%d", &n);
//	cin >> a >> b;
//	//cnta 和 cntb 通过扫描字符串得到小数点所在的下标
//	int cnta = strlen(a), cntb = strlen(b);
//	for (int i = 0; i < strlen(a); i++) {
//		if (a[i] == '.') {
//			cnta = i; 
//			break;
//		}
//	}
//	for (int i = 0; i < strlen(b); i++) {
//		if (b[i] == '.') {
//			cntb = i; 
//			break;
//		}
//	}
//	//考虑到可能前面有多余的零，用p和q通过扫描字符串使 p q 开始于第一个非0（且非小数点）处的下标
//	int indexa = 0, indexb = 0;
//	while (a[p] == '0' || a[p] == '.')p++;
//	while (b[q] == '0' || b[q] == '.')q++;
//	//根据小数点的位置和第一个数字的位置进行判断指数
//	// 如果cnta >= p ，说明小数点在第一个开始的非0数的下标的右边，那么科学计数法的指数为cnta - p ; 否则应该为cnta - p + 1; 字符串b同理
//	if (cnta >= p) {//123.45 cnta=3 p=0 cnta为 3		
//		cnta = cnta - p; //12345 cnta=5 p=0 cnta= 5
//	}
//	else {//0.0123 cnta=1 p=3 cnta = -1  
//		cnta = cnta - p + 1;
//	}
//	if (cntb >= q) {//123.45 cnta=3 p=0 cnta为 3		
//		cntb = cntb - q; //12345 cnta=5 p=0 cnta= 5
//	}
//	else {//0.0123 cnta=1 p=3 cnta = -1  
//		cntb = cntb - q + 1;
//	}
//	//如果 p 和 q 等于字符串长度， 说明字符串是 0
//	if (p == strlen(a))cnta = 0;
//	if (q == strlen(b))cntb = 0;
//	while (indexa < n) {
//		if (a[p] != '.' && p < strlen(a)) {
//			A[indexa++] = a[p];
//		}
//		else if (p >= strlen(a))A[indexa++] = '0';
//		p++;
//	}
//	while (indexb < n) {
//		if (b[q] != '.' && q < strlen(b)) {
//			B[indexb++] = b[q];
//		}
//		else if (q >= strlen(b))
//			B[indexb++] = '0';
//		q++;
//	}
//	if (strcmp(A, B) == 0 && cnta == cntb) {
//		printf("YES 0.%s*10^%d", A, cnta);
//	}
//	else {
//		printf("NO 0.%s*10^%d 0.%s*10^%d", A, cnta, B, cntb);
//	}
//	return 0;
//}