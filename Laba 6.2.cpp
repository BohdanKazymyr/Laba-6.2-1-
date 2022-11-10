#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int Create(int* a, const int size, int Low, int High)
{
	double i = 0;
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
	return 0;
}
int Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
	return 0;
}
int Sum(const int size, int a[])
	{
		int i;
		int sum = 0;
		for (i = 0; i < size; i++)
			if (i % 2 == 0)
				sum = sum + a[i];
			else
				sum += 0;
		return sum*1.0 / 10.0;
	}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 21;
	int i = 0;
	int a[n];
	int Low = 15;
	int High = 85;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "S = " << Sum(n, a) << endl;
	
}