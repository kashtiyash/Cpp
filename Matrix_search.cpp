// C++ program to search an element in row-wise and column-wise sorted matrix
#include <bits/stdc++.h>

using namespace std;

/* Searches the element x in mat[][]. If the element is found, then prints its position
and returns true, otherwise prints "not found" and returns false */

int search(int mat[5][5], int n, int x)
{
	if (n == 0)
		return -1;
	
	//traverse through the matrix
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		//if the element is found
		if(mat[i][j] == x)
		{
			cout<<"Element found at ("<<
						i << ", " << j << ")\n";
			return 1;
		}
	}

	cout << "\n Element not found";
	return 0;
}

int main()
{
	int mat[5][5] = {{ 15, 25, 35, 45,79 },
					 { 27, 29, 37, 48, 8 },
					 { 32, 33, 39, 50, 9 },
					 { 51, 56, 78, 89, 73},
	                 { 101, 453, 556, 776,689}};

	search(mat, 5, 56);

	return 0;
}