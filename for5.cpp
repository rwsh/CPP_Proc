#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    int n;
    do
    {
        cout << "������� ����� ���� > ";
        cin >> n;
    } 
    while (n == 0); // ���������� �� ��� ���, ���� ������������ ������ 0

}
