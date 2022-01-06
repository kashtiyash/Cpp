
#include <iostream>
using namespace std;


int main(){

    int number;
    int min,max;

    cout << "Enter the minimum range: ";
    cin >> min;

   cout << "Enter the maximum range: ";
    cin >> max;

    cout << "\n\n\nOdd numbers in given range are:\t\tEven numbers in given range are: "<<endl;


    for(number = min;number <= max; number++)

         if(number % 2 !=0)
             cout <<"| " <<number<< " |"<<endl;

         else if(number % 2 ==0)
             cout <<"\t\t\t\t\t\t"<<"| "<< number << " |"<<endl;

    cout<<endl;



    return 0;
}
