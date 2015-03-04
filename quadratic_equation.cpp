#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void secondDegree(int a, int b, int c){
	float x,z;
	x = sqrt(b*b-4*a*c);
	z = (-b+x)/(2*a);
	x = (-b-x)/(2*a);
	cout << "root one = " << z << endl;
	cout << "root two = " << x << endl;
}

void firstDegree(int b, int c){
	float x;
	x = -c / b;
	cout << "the only root = " << x << endl;
}

void zeroDegree(){
	cout << "There is no equation at all" << endl;
}

int main(){
	int a, b, c;
	cout << "Enter the coefficients of the equation" << endl;
	cin >> a >> b >> c;
	if (!a==0) secondDegree(a, b, c);
	else if (!b==0) firstDegree(b, c);
	else zeroDegree();
	getch();
	return 0;
}
