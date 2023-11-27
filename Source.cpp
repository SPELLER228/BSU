#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double x, xn, dx, y1=0,y2=0,E=0.000001,y2i;
	int n,i,N;
	cin >> x >> xn >> dx;
	n = (xn - x) / dx;
	for (x;x < xn;x += dx)
	{
		x = round(x * 100000) / 100000;
		if (x == 0)
		{
			y1 = 0; y2 = 0; N = 0;
		}
		else 
		{
			y1 = 1 / (pow((1 + x), 3)) - 1;
			i = 1;
			N = 0;
			y2i = 1;
			y2 = 0;
			while ((y2i > E) || (y2i < -E))
			{
				y2i = (pow(-1, i) * (i + 1) * (i + 2) * pow(x, i)) / 2;
				y2 = y2 + y2i;
				i++;
				N++;
			}

		}

			cout
				<< left
				<< setw(5)
				<< x
				<< ' '
				<< left
				<< setw(10)
				<< y1
				<< ' '
				<< left
				<< setw(10)
				<< y2
				<< ' '
				<< left
				<< setw(10)
				<< N
				<< endl;
		
		
	}
		
	
	
	return 0;
}