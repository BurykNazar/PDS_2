#include<iostream>
#include<Windows.h>

using namespace std;

struct PQR {
	bool p = false;
	bool q = false;
	bool r = false;
};

bool endFuncHandle(PQR pqr) {
	return pqr.p != true && pqr.q != true && pqr.r != true;
}

bool checkXOR(PQR pqr) {
	return pqr.q != pqr.r;
}

bool checkAND(PQR pqr) {
	return pqr.p && checkXOR(pqr);
}

void displayTable() {
	PQR pqr;
	cout << "Таблиця істинності для функції p AND (q XOR r):" << endl;
	cout << "_________________________________________" << endl;
	cout << "| p | q | r | q XOR r | p AND (q XOR r) |" << endl;
	cout << "|___|___|___|_________|_________________|" << endl;

	for (int i = 7; i >= 0; i--) {
		pqr.p = i & 4;
		pqr.q = i & 2;
		pqr.r = i & 1;

		bool xorResult = checkXOR(pqr);
		bool finalResult = pqr.p && xorResult;

		cout << "| " << pqr.p << " | " << pqr.q << " | " << pqr.r << " |";
		cout << "   " << xorResult << "     |       " << finalResult << "         |" << endl;
		cout << "|___|___|___|_________|_________________|" << endl;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	displayTable();

	return 0;
}