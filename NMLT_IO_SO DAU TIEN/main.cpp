#include<iostream>
using namespace std;
bool KiemTra_SoTangDan(int N)
{
    int tMax = N % 10;
    N = N / 10;

    while (N > 0)
    {
        int t = N % 10;

        if (t >= tMax)
            return false;
        else
            tMax = t;

        N = N / 10;
    }

    return true;
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    bool kiemtra_SoTangDan = KiemTra_SoTangDan(N);
    if (kiemtra_SoTangDan)
        cout << "YES";
    else
        cout << "NO" << endl;
}