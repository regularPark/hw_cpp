#include <iostream>
#include <cstring>
#include <cstdlib> 
using namespace std;


///* 1-1 */
//int main() {
//	int n = 0;
//	for (int i = 1; i <= 10; i++) {
//		n += i;
//	}
//	cout << "1에서 10까지 더한 결과는 " << n << "입니다." << endl;
//}

///* 1-2 */
//int main() {
//	char ch[100];
//	cout << "문자들을 입력하라(100개 미만)"<< endl;
//	cin.getline(ch, 100, '\n');
//	int cnt = 0;
//	for (int i = 0; i < 100; i++) {
//		if (ch[i] == 'x')cnt++;
//		else continue;
//	}
//	cout << "x의 개수는 " << cnt << endl; 
//}


///* 1-3 */
//int main() {
//	double arr[5];
//	double max = 0;
//	cout << "5개의 실수를 입력하라 >> ";
//	for (int i = 0; i < 5; i++) {
//		cin >> arr[i];
//		if (max < arr[i]) max = arr[i];
//	}
//	cout << "제일 큰 수 = " << max << endl;
//}


///* 1-4 */
//int main() {
//	string a;
//	cout << "문자열 입력 >> ";
//	getline(cin, a);
//	for (int i = 0; i < a.length(); i++) {
//		for (int j = 0; j <= i; j++) {
//			cout << a[j];
//		}
//		cout << '\n';
//	}
//}



///* 1-5 */
//int main() {
//	char c[100];
//	char *sign, *context;
//
//	int num1, num2;
//
//	while (true) {
//		cout << "?";
//		cin.getline(c, 100);
//		num1 = atoi(strtok_s(c, " ",&context));
//		sign = strtok_s(NULL, " ", &context);
//		num2 = atoi(strtok_s(NULL, " ", &context));
//		if (*sign == '+') {
//			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//		}
//		else if (*sign == '-') {
//			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//		}
//		else if (*sign == '*') {
//			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//		}
//		else if (*sign == '/') {
//			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//		}
//		else if (*sign == '%') {
//			cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
//		}
//	}
//	return 0;	
//}