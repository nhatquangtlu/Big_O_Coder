#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c, delta;
	double x1, x2;
	cin >> a >> b >> c;
	
	delta = b * b - 4 * a*c;
	if (delta < 0)
		cout << "no solution";
	else if (delta == 0)
		cout << setprecision(2) << fixed << (double)-b / (2 * a);
	else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		if (x1 <= x2)
			cout << setprecision(2) << fixed << x1 << " " << setprecision(2) << fixed << x2;
		else
			cout << setprecision(2) << fixed << x2 << " " << setprecision(2) << fixed << x1;
	}
}