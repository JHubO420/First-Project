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
//	//cout << "donut 면적은 " << area << endl;
//
//	//area = pizza.getArea();
//	//cout << "pizza 면적은 " << area << endl;
//
//
//	//cout << "포인터 p의 접근>> " << endl;
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
//	cout << "객체 배열 생성>> " << endl;
//	//Circle circleArray[3]; //Circle 객체 배열 생성
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
//	//	cout << "Circle(배열) " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//	//}
//
//	//p = circleArray;
//	//for (int i = 0; i < 3; i++) {
//	//	cout << "Circle(포인트 이용) " << i << "의 면적은 " << p->getArea() << endl;
//	//	p++;//? 
//	//}
//	
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << "Circle(배열) [" << i << "]["<<j<< "]의 면적은 " << circleArray[i][j].getArea() << endl;
//		}
//	}
//};
