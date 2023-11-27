#include <iostream>

using namespace std;

bool prost(int);

int main()
{
	int a,b2,b3,b4,b5,b6;
	
	for (int i = 100;i < 1000;i++)
	{
		b2 = i / 100 * 100 + i % 100 / 10 + i % 10 * 10;
		b3 = i / 100 * 10 + i % 10 * 100 + i % 100 / 10;
		b4 = i / 100 * 10 + i % 10 + i % 100 / 10 * 100;
		b5 = i / 100 + i % 10 * 10 + i % 100 / 10*100;
		b6= i / 100  + i % 10 * 100 + i % 100 / 10*10;
		if ((prost(i) == 0) &&(prost(b2)==0)&&(prost(b3)==0)&&(prost(b4)==0)&&(prost(b5)==0)&&(prost(b6)==0))
			cout << i << ' ';
	}
		
	return 0;
}

bool prost(int a)
{
	for (int j = 2;j < sqrt(a);j++)
	{
		if (a % j == 0)
		{
			return 1;
			break;
		}
	}
	return 0;
}