/*
�������� �������� �� �������� �� ������ ��� ����� �� (2017)
���� �� ����� � �������� �� ���-����� ������� >= �� ������ �����������
�� ������� � ������
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main()
{
    unsigned n;
    int array[MAX_SIZE];

    do
    {
        cout << "N= ";
        cin >> n;
    }while (n == 0 || n > MAX_SIZE);

    for (unsigned i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    double sum = 0;
    for (unsigned i = 0; i < n; ++i)
    {
        sum += array[i];
    }
    double avg = sum/n;

    // ����� �� ���� ��������� �����������?
    int min = avg * n;
    for (unsigned i = 0; i < n; ++i)
    {
        if (array[i] >= avg && array[i] < min)
            min = array[i];
    }

    cout << avg << endl << min << endl;
    return 0;
}
