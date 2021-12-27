//Sum of first and last digit of number 
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int number, firstDigit, lastDigit, sum, count;
	
	cout << "\nPlease Enter Number to find Sum of First and Last Digit =  ";
	cin >> number;
	
	count = log10(number);
  	
  	firstDigit = number / pow(10, count);
  	
  	lastDigit = number % 10;
  	
  	sum = firstDigit + lastDigit;
  	
	cout << "\nTotal Number of Digit in a Given Number " << number << " = " << count + 1; 
	cout << "\nThe First Digit in a Given Number       " << number << " = " << firstDigit; 
	cout << "\nThe Last Digit in a Given Number        " << number << " = " << lastDigit; 
	cout << "\nThe Sum of First and Last Digit of      " << number << " = " << sum; 	
 	return 0;
}