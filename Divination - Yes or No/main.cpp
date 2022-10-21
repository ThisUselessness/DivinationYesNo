#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

string text;

int main() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	SetConsoleTitle(L"Divination - Yes or No");
	setlocale(LC_ALL, "rus");
	while (true) {
		getline(cin, text);
		int random = 1 + rand() % 2;
		if (random == 1) { cout << "- Yes\n"; Sleep(100); }
		else if (random == 2) { cout << "- No\n"; Sleep(100); }
	}
}