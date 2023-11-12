//Даны вещественные x1, x2, x3, x4. Поменять значения переменных так, чтобы
//x1 > x2 > x3 < x4


#include <iostream>
using namespace std;

int main()
{
    double x, y, R;
    cin >> x >> y >> R;
    bool a, b;
    b = (((-2 * R <= x) && (x <= 0)) && ((-2 * R <= y) && (y <= 0)) && (x + y >= -2 * R));
    a = ((0 <= x) && (x <= 2 * R) && (0 <= y) && (y <= 2 * R) && (x * x + y * y >= R * R));
    if (b || a)
    {
        cout << "point is icluded";
    }
    else
    {
        cout << "point is not icluded";
    }
}


