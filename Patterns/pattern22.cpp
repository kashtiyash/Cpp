//code to demonstrate printing pattern of alphabets
#include <iostream>
using namespace std;


void alphabet(int n)
{
	int i = 1, j = 0;

	int num = 65;


	char alpha = char(num);
	while (i <= n) {


		while (j <= i - 1) {
			cout << alpha << " ";
			j++;
		}
		alpha++;
		j = 0;
		i++;
	
		cout << endl;
	}
}

int main()
{
	int n = 6;

	alphabet(n);
	return 0;
}
