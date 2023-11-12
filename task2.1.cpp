#include <iostream>
using namespace std;
int main()
{
    int a = 1, n, k, b, sum1 = 0, sum2 = 0;//1 - сумма первых (которые справо)
    cin >> n >> k;
	b = n;

	while ((b /= 10) > 0)
	{
		a++;
	}

	if (k > a)
	{
		cout << "nelga";
	}
	else
	{
		sum1 += n % 10;
		sum2 += n / int(pow(10 , a));
		for (int i = 1; i < k; i++)
		{
			sum1 += (n % int(pow(10 , i+1))) / int(pow(10, i));
			sum2 += (n / int(pow(10 , a - i))) % 10;
		}

		if (sum1 == sum2)
		{
			cout << "sovpodaet";
		}
		else
		{
			cout << "ne sovpodaet";
		}
	}

}

