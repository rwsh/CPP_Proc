#include <iostream> // ?????????? ?????????? ?????/??????

using namespace std; // ?????????? ???????????? ???? ??????????? ??????????

int main()
{
    setlocale(LC_ALL, "Russian"); // ????????????? ????????? 

    int a; // ??????? ??????????
    cout << "??????? ????? > "; // ??????? ??????
    cin >> a; // ??????????? ???????? ? ?????????, ?????????? ????????? ??????????????????
    if (a > 0) // ????????? ???????
    {
        cout << "??? ????????????? ?????" << endl; // ?????????? ??????, ???? ??????? - ???????
    }
    else
    {
        cout << "??? ????? ????????????? ??? ????? ????" << endl; // ?????????? ??????, ???? ??????? - ?????
    }

}
