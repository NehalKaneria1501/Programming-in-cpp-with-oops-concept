#include<iostream>
using namespace std;
int main()
{
    int a=5,b=10;
    int temp;
    cout<<"Before swap:"<<a<<""<<b<<endl; 
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap:"<<a<<""<<b; 
    return 0;
}
