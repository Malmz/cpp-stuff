#include <iostream>
#include "testclass.h"
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

int factorial(int n) {
  if (n==1) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}


int main() {
    TestClass t;
	cout << factorial(5) << endl << t.returnHi();
	return 0;
}
