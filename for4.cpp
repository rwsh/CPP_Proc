#include <iostream> // ?????????? ?????????? ?????/??????

using namespace std; // ?????????? ???????????? ???? ??????????? ??????????

int main()
{
    setlocale(LC_ALL, "Russian"); // ????????????? ????????? 

    int x = 0;
    while (x != 7) // ???? x ?? ????? 7 ?????????? ????
    {
        cout << "??????? ????? > "; 
        cin >> x; // ?????? ?????
    }
}
