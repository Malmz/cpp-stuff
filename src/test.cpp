#include <iostream>
using namespace std;

void loopInOut() {
	int x[5];
	for(int i=0;i < 4; i++) {
		cin >> x[i];
	}
	for(int i=0;i < 4; i++) {
		cout << x[i];
	}
}



int main() {
	srand(time(NULL));
	cout << rand() << endl;
	return 0;
}
