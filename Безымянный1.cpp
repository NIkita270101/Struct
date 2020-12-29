#include <iostream>
#include <iomanip>

using namespace std;

void algorithm(int N){
    for(int r = 0, n = 0; n <= N; ++n)
        {
            r = (r*10+1)%N;
            if (r == 0)
            {
                cout << "������� �����: ";
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
    cout << "������ ��������: �������� ������ ���������, ������: 2-6(090301-����-019)\n";
    cout << "--------------------------------------------------------------------------\n";

    bool active = true;

    while(active){
        int button;
        int N;

        cout << "������� �����: ";
        cin >> N;

        algorithm(N);

        cout << "���������?(1- ��, 2- ���)\n";
        cin >> button;
        if (button == 2){
            active = false;
        }
    }
}
