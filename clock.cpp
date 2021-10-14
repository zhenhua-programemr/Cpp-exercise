#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class time
{
private:
	 int minute,sec;
public:
	time(int i=0,int j=0):minute(i),sec(j){}
	friend void clock(time &a1, time a2);
};
void clock(time &a1, time a2) 
{
	int i = 0, j = 0;
	if(a1.minute==a2.minute)
	{
			for (j = a1.sec; j < a2.sec; j++) 
			{
				cout << a1.minute<< " : " << j << endl;
			}
	}
	else if (a1.minute < a2.minute) 
	{
		for (j = a1.sec; j < 60; j++)
		{
			cout << a1.minute << " : " << j << endl;
		}
		if((a1.minute+1)== a2.minute)
		{	for(j=0;j<=a2.sec;j++)
			{
				cout << a2.minute << " : " << j << endl;
			}
		}
		if ((a1.minute + 1) < a2.minute) 
		{
			for (i = a1.minute + 1; i < a2.minute; i++) 
			{
				for(j=0;j<60;j++)
				{
					cout << i << " : " << j <<endl;
				}
			}
			for (j = 0; j <= a2.sec; j++) 
			{
				cout << i << " : " << j <<endl;
			}
		}
	}
	else cout << "Your inout is wrong";
}
int main() 
{
	time t1(3, 20), t2(5,50);
	clock(t1, t2);
	return 0;
}
