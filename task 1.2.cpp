//Даны вещественные числа x, y. Определить, принадлежит ли точка с координатами x, y закрашенной части плоскости, включая границы. Числа R, x, y вводятся
//с клавиатуры.


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


