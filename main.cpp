#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, h, m;
    cin >> a;
    cin >> c;
    cin >> b;
    cin >> d;
    if (a == b){
        h = 24;
    }else{
        if (a < b){
            h = b - a;
        }else{
            h = (24 - a) + b;
        }
    }
    if (c == d){
        m = 0;
    }else{
        if (c < d){
            m = d - c;
            if (h == 24){
                h = 0;
            }
        }else{
            h = h - 1;
            m = (60 - c) + d;
        }
    }
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" <<endl;
    return 0;
}
