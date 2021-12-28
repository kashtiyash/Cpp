#include <iostream>
#include <string>
using namespace std;

void Time_Convert(int num) 
{
	bool flag;
	int hr = 0;
	do
	{
		flag = false;
		if (num >= 60)
		{
			hr++;
			num -= 60;
			flag = true;
		}
	} while (flag);
	
	cout << "\nHours : "<< hr <<" Minutes : "<< num << endl;
}

int main() 
{
    int usr_time;
    cout<<"Enter the Time in Minutes :- ";
    cin>>usr_time;
	Time_Convert(usr_time);
	return 0;
}