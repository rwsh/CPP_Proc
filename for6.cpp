#include <iostream> // подключаем библиотеку ввода/вывода

using namespace std; // используем пространство имен стандартной библиотеки

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    while (true)
    {
        double x;
        cout << "¬ведите число > ";
        cin >> x;
        if (x == 0)
        {
            cout << "ƒелить на ноль не могу!" << endl;
            continue;
        }
        if (x < 0)
        {
            break;
        }
        cout << "1 / " << x << " = " << 1.0 / x << endl;
    }
    

}
