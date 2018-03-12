#include<iostream>
using namespace std;
class addition
{
    public:
    int n,m,l;
    void getdata()
    {
        cout<<"enter the value n and m"<<endl;
        cin>>n>>m;
        l=n-m;
        cout<<"sum is"<<endl;
        }
};
class odd:public addition
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
    odd d;
    d.getdata();
    d.showdata();
    return 0;
}
