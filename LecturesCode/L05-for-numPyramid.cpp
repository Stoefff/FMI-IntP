/*
* �������� - ������ �� for ����� - ������� ��������
* ���� �� - 10.2017
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    const int width = 3;
    cout << "n= ";
    cin >> n;

    for (int row = 1; row <= n; ++row)
    {
        //������� ���� ��� �� ���������� - �������� �� ������� ����������

        //������ ������ �������
        for (int i = 0; i < n - row; ++i)
        {
            cout << "   ";
        }
        //���������� ������
        for (int num = 1; num < row; ++num)
        {
            cout.width(width);
            cout << num;
        }
        //���������� ������
        for (int num = row; num > 0; --num)
        {
            cout.width(width);
            cout << num;
        }
        cout << endl;
    }
    return 0;
}
