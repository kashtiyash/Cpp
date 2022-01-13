#include<iostream>
#define size 5      //defing the array size
using namespace std;

class leftRotate
{
    private:
        int i;
        int array[size];
  
    public:
        void getArr();
        void displayArr();
        void rotateByOne();
        void displayLRotate();


};
int main()
{
    cout<<"\t\tLeft Rotation Program \n\n\n";
    leftRotate l1;
    l1.getArr();
    cout<<"Displaying Array before Rotation : "<<endl;
    l1.displayArr();
    l1.displayLRotate();

    
}

void leftRotate ::getArr()
{   
    cout<<"Enter the 5 elements of Array : "<<endl;
    for ( i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<endl;
    
}

void leftRotate :: displayArr()
{
    cout<<"[ ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<", ";
    }
    cout<<" ]";
    cout<<endl;
    
}

void leftRotate :: rotateByOne()
{
    
        int i,first;
        first = array[0];

        for(i=0;i<size-1;i++)
        {
            array[i]=array[i+1];
        }
        array[size-1]=first;
    
}

void leftRotate :: displayLRotate()
{
    int num;
    cout<<"\nEnter number of times to left rotate: ";
    cin>>num;
    cout<<endl;

    num = num % size;
    for(int i=1;i<=num;i++)
        rotateByOne();

    cout<<"Displaying Array After Rotation by [ "<<num<<" ] : "<<endl;
    displayArr();
    cout<<endl;
}