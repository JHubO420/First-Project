//#include <iostream>
//using namespace std;
//
//#include "Circle.h"
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	//double area = donut.getArea();
//	//cout << "donut ������ " << area << endl;
//
//	//area = pizza.getArea();
//	//cout << "pizza ������ " << area << endl;
//
//
//	//cout << "������ p�� ����>> " << endl;
//
//	Circle* p;
//	//p = &donut;
//	//cout << p->getArea() << endl;
//	//cout << (*p).getArea() << endl;
//
//	//p = &pizza;
//	//cout << p->getArea() << endl;
//	//cout << (*p).getArea() << endl;
//
//	cout << "��ü �迭 ����>> " << endl;
//	//Circle circleArray[3]; //Circle ��ü �迭 ����
//
//	//circleArray[0].setRadius(10);
//	//circleArray[1].setRadius(20);
//	//circleArray[2].setRadius(30);
//
//	Circle circleArray[2][3];
//
//	circleArray[0][0].setRadius(1);
//	circleArray[0][1].setRadius(2);
//	circleArray[0][2].setRadius(3);
//	circleArray[1][0].setRadius(4);
//	circleArray[1][1].setRadius(5);
//	circleArray[1][2].setRadius(6);
//
//	//for (int i = 0; i < 3; i++) {
//	//	cout << "Circle(�迭) " << i << "�� ������ " << circleArray[i].getArea() << endl;
//	//}
//
//	//p = circleArray;
//	//for (int i = 0; i < 3; i++) {
//	//	cout << "Circle(����Ʈ �̿�) " << i << "�� ������ " << p->getArea() << endl;
//	//	p++;//? 
//	//}
//	
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << "Circle(�迭) [" << i << "]["<<j<< "]�� ������ " << circleArray[i][j].getArea() << endl;
//		}
//	}
//};
