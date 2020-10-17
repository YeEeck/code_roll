#include <iostream>
#include <fstream>
#include <windows.h>
#include <ctime>
#include <random>

using namespace std;

void prtline() {
    int delay_s;
    ifstream infile;
    default_random_engine e(time(nullptr));
    uniform_int_distribution<unsigned> ran(0, 52);
    infile.open("code.txt", ios::in);
    string line;
    system("color 02");
    while (getline(infile, line)) {
        delay_s = ran(e);
        if (delay_s >= 50) {
            delay_s = 250;
        }
        Sleep(delay_s);
        cout << line << endl;
    }
}

void prtchar() {
    int delay_s;
    ifstream infile;
    default_random_engine e(time(nullptr));
    uniform_int_distribution<unsigned> ran(0, 16);
    infile.open("code.txt", ios::in);
    string line;
    system("color 02");
    while (getline(infile, line)) {
        delay_s = ran(e);
        if (delay_s >= 15) {
            delay_s = 250;
        }
        for (char i:line) {
            cout << i;
            if (i != ' ') {
                Sleep(3);
            }
        }
        Sleep(delay_s);
        cout << endl;
    }
}

int main() {
    prtchar();
    return 0;
}