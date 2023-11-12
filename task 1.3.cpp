//Даны вещественные x1, x2, x3, x4.Поменять значения переменных так, чтобы
//x1 > x2 > x3 < x4

#include <iostream>

using namespace std;

#define FIRST_METHOD 1
#define SECOND_METHOD 2


int main()
{
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	int x4 = 0;
	int tmp = 0;
	int method = 0;

	cout << "enter numbers " << endl;
	cin >> x1 >> x2 >> x3 >> x4;
	cout << endl << "choose method: " << endl;
	cout << " 1 - if" << endl << " 2 - ? : " << endl;
	cin >> method;
	cout << endl;

	if (FIRST_METHOD == method)
	{
		if (x2 < x3)
		{
			tmp = x2;
			x2 = x3;
			x3 = tmp;
		}
		else if (x4 < x3)
		{
			tmp = x4;
			x4 = x3;
			x3 = tmp;
		}

		if (x2 < x3)
		{
			tmp = x2;
			x2 = x3;
			x3 = tmp;
		}
		else if (x4 < x3)
		{
			tmp = x4;
			x4 = x3;
			x3 = tmp;
		}

		if (x1 < x2)
		{
			tmp = x1;
			x1 = x2;
			x2 = tmp;
		}

		if (x2 < x3)
		{
			tmp = x2;
			x2 = x3;
			x3 = tmp;
		}
		else if (x4 < x3)
		{
			tmp = x4;
			x4 = x3;
			x3 = tmp;
		}

	}
	else if (SECOND_METHOD == method)
	{
		(x2 < x3) ? (tmp = x2, x2 = x3, x3 = tmp) : (x4 < x3) ? (tmp = x4, x4 = x3, x3 = tmp) : printf("");
		(x2 < x3) ? (tmp = x2, x2 = x3, x3 = tmp) : (x4 < x3) ? (tmp = x4, x4 = x3, x3 = tmp) : printf("");
		(x1 < x2) ? (tmp = x1, x1 = x2, x2 = tmp) : printf("");
		(x2 < x3) ? (tmp = x2, x2 = x3, x3 = tmp) : (x4 < x3) ? (tmp = x4, x4 = x3, x3 = tmp) : printf("");
	}
	else
	{
		cout << "invalid method" << endl;
		return 0;
	}

	cout << x1 << " > " << x2 << " > " << x3 << " < " << x4;

	return 0;
}


