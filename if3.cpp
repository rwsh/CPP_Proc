#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    int a = 7, b = 8, res;
    char c; 
    cout << "������� + ��� * > "; // ������� ������
    cin >> c; // ����������� �������� � ���������
    switch (c) // ��������� ��������
    {
    case '+': // ���� +
        res = a + b;
        break; // �����, ����� �� ���������� ��� ������
    case '*': // ���� -
        res = a * b;
        break;
    default:
        res = 0; // ����� ���������, ���� ��� ���������� �����
    }
    cout << "��������� = " << res << endl;
}
