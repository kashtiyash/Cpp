#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns;
	
	cout << "\nPlease Enter Matrix rows and Columns to find Upper Triangle =  ";
	cin >> i >> j;
	
	int upperTriMatrix[i][j];
	
	cout << "\nPlease Enter the Matrix Items\n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) 
        {
			cout<<"Element at ["<<rows<<"] ["<<columns<<"] : ";
            cin >> upperTriMatrix[rows][columns];
		}		
	}

 	cout << "\nThe Result of the Upper Triangle Matrix is :\n";
 	for(rows = 0; rows < i; rows++)
  	{
  		cout << "\n";
   		for(columns = 0; columns < j; columns++)
    	{
    		if(columns >= rows)
    		{
    			cout << upperTriMatrix[rows][columns] << " ";
			}
			else
			{
				cout << "0 ";
			}
   	 	}
  	}	

 	return 0;
}