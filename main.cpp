#define RusLoc _setmode(_fileno(stdout), _O_U16TEXT); _setmode(_fileno(stdin),  _O_U16TEXT); _setmode(_fileno(stderr), _O_U16TEXT)

#include <iostream>
#include <fcntl.h>

using std::wcout;
using std::wcin;
using std::swap;
using std::endl;

void tref(int y, int &x){
    RusLoc;
    if (y > x) return;
    wcout << y << " ";
    tref((y*3), x);
    tref((y*5), x);
    tref((y*7), x);
}

int main() {
    RusLoc;

    int x = 100;
    wcout << L"Введите x" << endl;
    wcin >> x;
    tref(1, x);
    wcout << endl;
    return 0;
}
