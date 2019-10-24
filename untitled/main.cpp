#include <iostream>
using namespace std;
int Max_SoNguyen(int N)
{
    int Max = 0;
    while (N > 0)
    {
        int t = N % 10;

        if (t > Max)
            Max = t;

        N = N / 10;
    }
    return Max;
}

int Dem_Max(int N)
{
    int X = Max_SoNguyen(N);
    int dem = 0;
    while (N > 0)
    {
        int t = N % 10;

        if (t == X)
            dem++;

        N = N / 10;
    }
    return dem;
}


int main()
{
    int N;
    cin >> N;

    int demMax = Dem_Max(N);
    cout << "" << demMax << endl;

}