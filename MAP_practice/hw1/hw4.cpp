#include <iostream>
#include <string>
using namespace std;


///* 4-1 */
//int main() {
//	int *p = new int[5];
//	cout << "���� 5�� �Է� >> ";
//	double sum = 0;
//	for (int i = 0; i < 5; i++) {
//		cin >> p[i];
//		sum += p[i];
//	}
//	cout << "��� " << sum / 5 << endl;
//	delete[] p;
//}


///* 4-2 (1)*/
//int main() {
//	string str;
//	cout << "���ڿ� �Է� >> ";
//	getline(cin, str);
//	int len = str.length();
//	int cnt = 0;
//	for (int i = 0; i < len; i++) {
//		if (str[i] == 'a') cnt++;
//	}
//	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�."<<endl;
//}

///* 4-2 (2)*/
//int main() {
//	string str;
//	cout << "���ڿ� �Է� >> ";
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
//	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
//}


///* 4-3 */
//int main() {
//	string str;
//	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
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
//	int radius; // ���� ������ ��
//public:
//	void setRadius(int r) { this->radius = r; } // �������� �����Ѵ�.
//	double getArea() { return 3.14 * radius * radius; } // ������ �����Ѵ�.
//};
//
//
//
//int main() {
//	int cnt =0, r;
//	Circle *pArray = new Circle[3];
//	for (int i = 0; i < 3; i++) {
//		cout << "�� " << i + 1 << "�� ������ >> ";
//		cin >> r;
//		pArray[i].setRadius(r);
//		if (pArray[i].getArea() > 100) cnt++;		
//	}
//	cout << "������ 100���� ū ���� " << cnt << "���Դϴ�.";
//	delete pArray;
//}



///* 4-5 */
//class Circle {
//	int radius; // ���� ������ ��
//public:
//	void setRadius(int r) { this->radius = r; } // �������� �����Ѵ�.
//	double getArea() { return 3.14 * radius * radius; } // ������ �����Ѵ�.
//};
//
//
//
//int main() {
//	int cnt = 0, r,n;
//	cout << "���� ���� >> ";
//	cin >> n;
//
//	Circle *pArray = new Circle[n];
//
//	for (int i = 0; i < n; i++) {
//		cout << "�� " << i + 1 << "�� ������ >> ";
//		cin >> r;
//		pArray[i].setRadius(r);
//		if (pArray[i].getArea() > 100) cnt++;
//	}
//	cout << "������ 100���� ū ���� " << cnt << "���Դϴ�.";
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
//	cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���."<< endl;
//	
//	for (int i = 0; i < 3; i++) {
//		cout << "��� " << i + 1 << " >> ";
//		cin >> n >> t;
//		pArray[i].set(n, t);
//	}
//
//	cout << "��� ����� �̸��� ";
//	for (int i = 0; i < 3; i++) {
//		cout << pArray[i].getName() << " ";
//	}
//
//	string who;
//	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
//	cin >> who;
//	for (int i = 0; i < 3; i++) {
//		if (pArray[i].getName() == who) {
//			cout << "��ȭ��ȣ�� " << pArray[i].getTel() << endl;
//			break;
//		}
//	}
//}


/* 4-7 */
class Player {

};