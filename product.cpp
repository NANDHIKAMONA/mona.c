#include<iostream>
using namespace std;
class first
{
    public:
    int a,b,l;
    void getdata()
    {
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
        l=a*b;
        cout<<"product is"<<endl;
    }
};
class second:public first
{
    public:
    void showdata()
    {
        if(l%2)
        {
            cout<<"odd"<<endl;
        }
        else
        {
            cout<<"even"<<endl;
        }
        }
    };
    int main()
    {
        second s;
        s.getdata();
        s.showdata();
        return 0;
    }

