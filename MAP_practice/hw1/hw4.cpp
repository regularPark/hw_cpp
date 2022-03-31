#include <iostream>
#include <string>
using namespace std;


///* 4-1 */
//int main() {
//	int *p = new int[5];
//	cout << "정수 5개 입력 >> ";
//	double sum = 0;
//	for (int i = 0; i < 5; i++) {
//		cin >> p[i];
//		sum += p[i];
//	}
//	cout << "평균 " << sum / 5 << endl;
//	delete[] p;
//}


///* 4-2 (1)*/
//int main() {
//	string str;
//	cout << "문자열 입력 >> ";
//	getline(cin, str);
//	int len = str.length();
//	int cnt = 0;
//	for (int i = 0; i < len; i++) {
//		if (str[i] == 'a') cnt++;
//	}
//	cout << "문자 a는 " << cnt << "개 있습니다."<<endl;
//}

///* 4-2 (2)*/
//int main() {
//	string str;
//	cout << "문자열 입력 >> ";
//	getline(cin, str);
//
//	int cnt = 0;
//	int i = -1;
//	while (true) {
//		i = str.find('a', i + 1);
//		if (i == -1) break;
//		cnt++;
//	}
//
//	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
//}


///* 4-3 */
//int main() {
//	string str;
//	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
//	while (str != "exit") {
//		cout << ">> ";
//		getline(cin, str);
//		
//		if (str == "exit") break;
//		int len = str.length();
//		for (int i = len; i >= 0; i--) {
//			cout << str[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}


///* 4-4 */
//
//class Circle {
//	int radius; // 원의 반지름 값
//public:
//	void setRadius(int r) { this->radius = r; } // 반지름을 설정한다.
//	double getArea() { return 3.14 * radius * radius; } // 면적을 리턴한다.
//};
//
//
//
//int main() {
//	int cnt =0, r;
//	Circle *pArray = new Circle[3];
//	for (int i = 0; i < 3; i++) {
//		cout << "원 " << i + 1 << "의 반지름 >> ";
//		cin >> r;
//		pArray[i].setRadius(r);
//		if (pArray[i].getArea() > 100) cnt++;		
//	}
//	cout << "면적이 100보다 큰 원은 " << cnt << "개입니다.";
//	delete pArray;
//}



///* 4-5 */
//class Circle {
//	int radius; // 원의 반지름 값
//public:
//	void setRadius(int r) { this->radius = r; } // 반지름을 설정한다.
//	double getArea() { return 3.14 * radius * radius; } // 면적을 리턴한다.
//};
//
//
//
//int main() {
//	int cnt = 0, r,n;
//	cout << "원의 개수 >> ";
//	cin >> n;
//
//	Circle *pArray = new Circle[n];
//
//	for (int i = 0; i < n; i++) {
//		cout << "원 " << i + 1 << "의 반지름 >> ";
//		cin >> r;
//		pArray[i].setRadius(r);
//		if (pArray[i].getArea() > 100) cnt++;
//	}
//	cout << "면적이 100보다 큰 원은 " << cnt << "개입니다.";
//	delete pArray;
//}



///* 4-6 */
//class Person {
//	string name;
//	string tel;
//public:
//	Person();
//	string getName() { return name; }
//	string getTel() { return tel; }
//	void set(string name, string tel) { this->name = name; this->tel = tel; }
//};
//
//Person::Person(){}
//
//int main() {
//	string n, t;
//	Person *pArray = new Person[3];
//
//	cout << "이름과 전화번호를 입력해주세요."<< endl;
//	
//	for (int i = 0; i < 3; i++) {
//		cout << "사람 " << i + 1 << " >> ";
//		cin >> n >> t;
//		pArray[i].set(n, t);
//	}
//
//	cout << "모든 사람의 이름은 ";
//	for (int i = 0; i < 3; i++) {
//		cout << pArray[i].getName() << " ";
//	}
//
//	string who;
//	cout << "전화번호를 검색합니다. 이름을 입력하세요 >> ";
//	cin >> who;
//	for (int i = 0; i < 3; i++) {
//		if (pArray[i].getName() == who) {
//			cout << "전화번호는 " << pArray[i].getTel() << endl;
//			break;
//		}
//	}
//}


/* 4-7 */
class Player {

};