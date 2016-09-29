#include <iostream>
using namespace std;

void delta() {
    int x;
    cin >> x;
    if(x > 12){
        cout << "du får delta!";
    }
    else{
        cout << "du får inte delta :(";
    }
}

void loopInOut() {
	int x[5];
	for(int i=0;i < 4; i++) {
		cin >> x[i];
	}
	for(int i=0;i < 4; i++) {
		cout << x[i];
	}
}

void randomTest() {
	srand(time(NULL));
	cout << rand() << endl;
}
void overloading1(int x) {
	cout << "Print int: " << x << endl;
}
void overloading1(float x) {
	cout << "Print float: " << x << endl;
}


int main() {
	int x1 = 15;
	float x2 = 82.5;
	overloading1(x1);
	overloading1(x2);
	return 0;
}
