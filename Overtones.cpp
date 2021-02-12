#include <iostream> 
using namespace std;

void calculate(int x)
{
	
	int i;
	for(i=1;i<17;i++)
	{
		x=x*(i+1)/(i);
		cout<<x<<" ";
	
		}
	}

int main()
{
	int x;
	cin>>x;
calculate(x);

}
