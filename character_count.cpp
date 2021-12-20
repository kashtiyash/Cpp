#include <iostream>
using namespace std;

int main()
{
    //Enter the desired string as you want. 

    string str = "This is the demo string to check the program is running or not .";
    cout<<str<<endl;

    char checkCharacter;
    cout<<"Enter the character to check :- ";

    cin>>checkCharacter;   
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

return 0;
}
