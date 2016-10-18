#include "testclass.h"
#include <string>
using namespace std;
TestClass::TestClass(string a) : s(a) {
}
string TestClass::returnHi() {
    return s;
}
