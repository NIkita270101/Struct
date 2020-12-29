#include <iostream>
#include <iomanip>

using namespace std;

void algorithm(int N){
    for(int r = 0, n = 0; n <= N; ++n)
        {
            r = (r*10+1)%N;
            if (r == 0)
            {
                cout << "Кратное число: ";
                for(int i = 0; i <= n; ++i) {
                    cout << 1;
                }
                cout << endl;
                return;
            }
        }
        cout << "NO\n";
}


int main(int argc, const char * argv[])
{
    setlocale(LC_ALL, "Russian");
    cout << "--------------------------------------------------------------------------\n";
    cout << "Работу выполнил: Бережнов Никита Андреевич, Группа: 2-6(090301-ПАСа-019)\n";
    cout << "--------------------------------------------------------------------------\n";

    bool active = true;

    while(active){
        int button;
        int N;

        cout << "Введите число: ";
        cin >> N;

        algorithm(N);

        cout << "Повторить?(1- Да, 2- Нет)\n";
        cin >> button;
        if (button == 2){
            active = false;
        }
    }
}
