#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    int N;
    cout << "������� ���������� ��������� > ";
    cin >> N; // ����������� ����������
    for (int i = 0; i < N; i++) // ���� ��������� N ���
    {
        for (int j = 0; j < N; j++) // ��������� ����
        {
            cout << i + j << "\t"; // � ����� ������ - ���� ���������
        }
        cout << endl; // ����� ������
    }
}
