// Program to demonstrate printing pattern of alphabets
#include <iostream>
using namespace std;


void contalpha(int n)
{
	int num = 65;

	// Outer loop to handle number of rows
	// n in this case
	for (int i = 0; i < n; i++) {

		// Inner loop to handle number of columns
		// values changing acc. to outer loop
		for (int j = 0; j <= i; j++) 
        {
			char ch = char(num);
			cout << ch << " ";
			num = num + 1;
		}

		cout << endl;
	}
}

int main()
{
	int n = 5;

	// Function Call
	contalpha(n);
	return 0;
}
