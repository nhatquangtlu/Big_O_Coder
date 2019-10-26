#include <iostream>
using namespace std;

void triangle(int a, int b, int c) {
    if (a + b > c  &&  b + c > a  &&  c + a > b) {
        if (a*a == b*b + c*c  ||  b*b == a*a + c*c  ||  c*c == a*a + b*b)
            if (a == b || a == c || b == c)
                cout << "Tam giac vuong can";
            else
                cout << "Tam giac vuong";
        else if (a == b && b == c)
            cout << "Tam giac deu";
        else if (a == b || a == c || b == c)
            cout << "Tam giac can";
        else
            cout << "Tam giac thuong";
    }
    else
        cout << "Khong la 3 canh cua tam giac";
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    triangle(a, b, c);
    return 0;
}