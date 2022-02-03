/*  C++ Program to Remove or Delete Vowels from a String  */

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[500];
        int len, i, count=0;

        cout<<"\nEnter any string :: ";
        gets(str);

        
        len = strlen(str);
        for(i=0; i<len; i++)
        {
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
                str[i]=='o' || str[i]=='u' || str[i]=='A' ||
                str[i]=='E' || str[i]=='I' || str[i]=='O' ||
                str[i]=='U')
                {
                        count++;
                }
        }
        cout<<"\nVowels in the string :  "<< count <<endl;

        return 0;
}