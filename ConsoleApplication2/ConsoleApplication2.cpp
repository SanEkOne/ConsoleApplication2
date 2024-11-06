#define _CRT_SECURE_NO_WARNINGS  

#include <iostream>  
#include <ctime>  
#include <string.h>  

using namespace std;

struct square {
private:
	int side;
public:
	square(int side) {
		this->side = side;
	}

	square() {
		side = 4;
	}

	void PrintInfo() {
		cout << side << endl;
	}

	void PrintPerimeter() {
		cout << side * 4 << endl;
	}

	void PrintPlane() {
		cout << side * 2 << endl;
	}
};
struct rombus {
private:
	int side;
	int firstDiagonal;
	int secondDiagonal;
public:
	rombus(int side, int firstDiagonal, int secondDiagonal) {
		this->side = side;
		this->firstDiagonal = firstDiagonal;
		this->secondDiagonal = secondDiagonal;
	}

	rombus() {
		side = 4;
		firstDiagonal = 6;
		secondDiagonal = 4;
	}

	void PrintInfo() {
		cout << side << endl;
		cout << firstDiagonal << endl;
		cout << secondDiagonal << endl;
	}

	void PrintPerimeter() {
		cout << side * 4 << endl;
	}

	void PrintPlane() {
		cout << firstDiagonal * secondDiagonal / 2 << endl;
	}
};
struct rectangle {
private:
	int side;
	int secondSide;
public:
	rectangle(int side, int secondSide) {
		this->side = side;
		this->secondSide = secondSide;
	}

	rectangle() {
		side = 4;
		secondSide = 6;
	}

	void PrintInfo() {
		cout << side << endl;
		cout << secondSide << endl;
	}

	void PrintPerimeter() {
		cout << (side + secondSide) * 2 << endl;
	}

	void PrintPlane() {
		cout << side * secondSide << endl;
	}
};

struct trapezoid {
private:
	int backSide;
	int upSide;
	int downSide;
public:
	trapezoid(int backSide, int upSide, int thirdSide) {
		this->backSide = backSide;
		this->upSide = upSide;
		this->downSide = downSide;
	}

	trapezoid() {
		backSide = 4;
		upSide = 6;
		downSide = 8;
	}

	void PrintInfo() {
		cout << backSide << endl;
		cout << upSide << endl;
		cout << downSide << endl;
	}

	void PrintPerimeter() {
		cout << (backSide * 2 + upSide + downSide) << endl;
	}

	void PrintPlane() {
		cout << (upSide * downSide) * backSide / 2 << endl;
	}
};

int main() {
	square obj;
	cout << "Square" << endl;
	cout << "Side: ";
	obj.PrintInfo();
	cout << "Perimeter: ";
	obj.PrintPerimeter();
	cout << "Plane: ";
	obj.PrintPlane();
	cout << endl;
	rombus obj3;
	cout << "rombus" << endl;
	cout << "Sides: " << endl;
	obj3.PrintInfo();
	cout << "Perimeter: ";
	obj3.PrintPerimeter();
	cout << "Plane: ";
	obj3.PrintPlane();
	cout << endl;
	rectangle obj4;
	cout << "rectangle" << endl;
	cout << "Sides: " << endl;
	obj4.PrintInfo();
	cout << "Perimeter: ";
	obj4.PrintPerimeter();
	cout << "Plane: ";
	obj4.PrintPlane();
	cout << endl;
	trapezoid obj5;
	cout << "trapezoid" << endl;
	cout << "Sides: " << endl;
	obj5.PrintInfo();
	cout << "Perimeter: ";
	obj5.PrintPerimeter();
	cout << "Plane: ";
	obj5.PrintPlane();
}