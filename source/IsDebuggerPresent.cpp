#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	if (IsDebuggerPresent()) {
		cout << "Nothing to see here... no really..." << endl;
		cin.get();
		return 1;
	}

	cout << "Ah, You got me!!" << endl;
	cin.get();
	return 0;

}
