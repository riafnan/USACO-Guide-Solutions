#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s = "ComputerScience"; 
    auto pos = s.find("Science");
    if(pos != string::npos)
    {
        cout<<"found at index "<<pos;
    }
}
