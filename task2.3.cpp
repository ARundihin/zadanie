#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,kolvo; //131
    bool prostoe = 1;
    cin >> n;
    kolvo = n / 2;
    if (n < 999 && n > 100)
    {
        a = n / 100;
        c = n % 10;
        b = n % 100 / 10;

        if (a == b || b == c || a == c)
        {
            if (a == b)
            {
                for (int i = 2; i < kolvo; i++)
                {
                    if ((c * 100 + b * 11) % i == 0 || (b * 101 + c * 10) % i == 0 || (b * 110 + c) % i == 0)
                    {
                        prostoe = false;
                    }
                }
            }
            else if (c == b)
            {
                for (int i = 2; i < kolvo; i++)
                {
                    if ((a * 100 + b * 11) % i == 0 || (b * 101 + a * 10) % i == 0 || (b * 110 + a) % i == 0)
                    {
                        prostoe = false;
                    }
                }
            }
            else
            {
                for (int i = 2; i < kolvo; i++)
                {
                    if ((b * 100 + a * 11) % i == 0 || (c * 101 + b * 10) % i == 0 || (a * 110 + b) % i == 0)
                    {
                        prostoe = false;
                    }
                }
            }
        }
        else
        {
            for (int i = 2; i < kolvo; i++)
            {
                if ((a * 100 + b * 10 + c) % i == 0 || (a * 100 + c * 10 + b) % i == 0)
                {
                    prostoe = false;
                }
                else if ((b * 100 + a * 10 + c) % i == 0 || (b * 100 + c * 10 + a) % i == 0)
                {
                    prostoe = false;
                }
                else if ((c * 100 + b * 10 + a) % i == 0 || (c * 100 + a * 10 + b) % i == 0)
                {
                    prostoe = false;
                }
            }
        }

        if (prostoe)
        {
            cout << "number super simple";
        }
        else
        {
            cout << "number is not super simple";
        }
    }
    else
    {
        cout << "The number is not three - digit";
    }
}
