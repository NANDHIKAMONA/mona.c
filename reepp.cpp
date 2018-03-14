#include <iostream>
using namespace std;
class center
{
	public:
	int n=2;
	void getdata()
{
		cin>>n;
	}
};
class calc:public center
{
	int l=1,r=3;
	public:
	void showdata()
	{
		if(n>l&&n<r)
		{
	cout<<"yes"<<endl;
}
else
{
	cout<<"no"<<endl;
}
}
};
int main()
{
	calc c;
	c.getdata();
	c.showdata();
	return 0;
}
