#include <iostream>
#include <ncurses.h>
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

void cursesTest() {
  char users_name[ 100 ];

  initscr();
  (void)echo();

  addstr( "What is your name> " );
  refresh();
  getnstr( users_name, sizeof( users_name ) - 1 );

  clear();

  printw( "Greetings and salutations %s!\n", users_name );
  refresh();

  printw( "\n\n\nPress ENTER to quit." );
  refresh();
  getnstr( users_name, sizeof( users_name ) - 1 );

  endwin();
  }

int main() {
    //TestClass t("testing bob svensson");
	//cout << factorial(5) << endl << t.returnHi();
    cursesTest();
    return 0;
}
