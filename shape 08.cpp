//1
//23
//456
//759
//10 11 13 14
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	int sum=1;
	while (i<=n)
	{
		int j=1;
		while(j<=i)
		{
		cout<<sum<<" ";
			sum++;
			j++;
		
		}
		cout<<endl;
		
		i++;
	}
}
