//1
//22
//333
//444
//5555
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
		cout<<i<<" ";
			sum++;
			j++;
		
		}
		cout<<endl;
		
		i++;
	}
}
