/*
* �������� - ������ �� for ����� - ������� �� ���������
* ���� �� - 10.2017
*/

#include <iostream>

using namespace std;

int main()
{
    //��������� ���
    cout << "*| ";
    for (int i = 1; i < 10; ++i)
        cout << "\t" << i;
    cout << endl;

    //������������ �����
    cout << "--";
    for (int i = 1; i < 10; ++i)
        cout << "--------";
    cout << endl;

    //������ ������� ��� �� ���
    for (int a = 1; a < 10; ++a)
    {
        cout << a << "| ";
        for (int b = 1; b < 10; ++b)
        {
            cout << "\t" << a*b;
        }
        cout << endl;
    }
    return 0;
}
