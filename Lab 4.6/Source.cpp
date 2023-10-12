#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S1,S2;
	int n, k;
	S1 = 0;
	n = 1;
	while (n <= 18)

	{
		S2 = 0;
		k = n;
		while (k <= 20)

		{
			S1 += sqrt(abs(1.0 - ((k * 1.0) / n))) / (2 * (n * n) + (k * k));

			k++;

		}
		S2 += S1;
		n++;  

	}
	cout << S2 << endl;
	S1 = 0;
	n = 1; 
	do
	{
		S2 = 0;
		k = n;
		do
		{
			S1 += sqrt(abs(1.0 - ((k * 1.0) / n))) / (2 * (n * n) + (k * k));
			k++;
		} while (k <= 20);
		S2 += S1;
		n++;
	} while (n <= 18);
	cout << S2 << endl;
	S1 = 0;
	for (n = 1; n <= 18; n++)

	{
		S2 = 0;
		for (k = n; k <= 20; k++)

		{
			S1 += sqrt(abs(1.0 - ((k * 1.0) / n))) / (2 * (n * n) + (k * k));

		}
		S2 += S1;
	}
	cout << S2 << endl;
	S1 = 0;
	for (n = 18; n >= 1; n--)
		

	{
		S2 = 0; 
		for (k = 20; k >= n; k--)
		{
			S1 += sqrt(abs(1.0 - ((k * 1.0) / n))) / (2 * (n * n) + (k * k));
		}
		S2 += S1;
	}
	cout << S2 << endl;
	return 0;
}