#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    while (true)
    {
        double x;
        cout << "������� ����� > ";
        cin >> x;
        if (x == 0)
        {
            cout << "������ �� ���� �� ����!" << endl;
            continue;
        }
        if (x < 0)
        {
            break;
        }
        cout << "1 / " << x << " = " << 1.0 / x << endl;
    }
    

}
