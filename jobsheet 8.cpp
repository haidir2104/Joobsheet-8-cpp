#include <iostream>
using namespace std;
int main()
{
	int x[59],i;
	for(i=0;i<59;i++)
	{
		cout<<"masukan nilai "<<i+1<<" : ";
		cin>>x[i];
	}
	cout<<endl;
	for(i=0;i<59;i++)
	{
	cout<<"nilai ke "<<i+1<<" = "<<x[i]<<endl;
}
	return 0;
}
