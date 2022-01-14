// Program to print Floyd's triangle
 
#include <iostream>
using namespace std;
  
int main() 
{
    int i, j, rows, counter;
  
    cout << "\n\nEnter the number of rows of Floyd's triangle : ";
    cin >> rows;
  
    // Print Floyd's triangle
    for (counter = 1, i = 1; i <= rows; i++) 
    {
         
        for (j = 1; j <= i; j++) 
        {
            cout << counter++ << "  ";
        }
    cout << endl;
    }
      
return 0;

}