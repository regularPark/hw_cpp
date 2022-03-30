#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

///* 2-1 */
//class Tower {
//private:
//	int height;
//public:
//	Tower();
//	Tower(int h);
//	int getHeight() { return height; } 
//};
//
//Tower::Tower() {
//	height = 1;
//}
//
//Tower::Tower(int h) {
//	height = h;
//}
//
//int main() {
//	Tower myTower;
//	Tower seoulTower(100);
//	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
//	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
//
//	return 0;
//}


///* 2-2 */
//
//class Account {
//private:
//	int num, bal;
//	string name;
//public:
//	Account(string name, int num, int bal);
//	string getOwner() { return name; }
//	double deposit(int money) { bal += money; return bal; }
//	double withdraw(int money) { bal -= money; return bal; }
//	double inquiry() { return bal; }
//};
//
//Account::Account(string name_, int num_, int bal_) {
//	num = num_; name = name_; bal = bal_;
//}
//
//int main() {
//	Account a("kitae", 1, 5000); a.deposit(50000);
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//	int money = a.withdraw(20000);
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//	return 0;
//}-