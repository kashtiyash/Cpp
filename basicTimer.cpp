#include <iostream>
#include <unistd.h>    // For sleep() function

using namespace std;

int main() {
  
    int timer;
    
    cout << "Enter time in seconds: ";
    cin >> timer;
    
    if(timer==0)
    {
        cout<<"Please enter seconds greater than 0.";
    }
    else if(timer<0)
       {
            cout<<"Please enter valid time.";
       }
    else
       {
            cout<<"\n \t-x-x-  Timer Started  -x-x- ";
       }
    
    while (timer > 0) 
    {
     
      cout << endl <<"  "<< timer;
      
      sleep(1);
      
      timer --;
      
      if(timer == 0)
      {
        cout<<"\n \t-x-x-  Timer Ended  -x-x- ";
      }

    }
    
    return 0;
}