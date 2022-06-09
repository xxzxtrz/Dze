#include <iostream>

using namespace std;

//Задание 1.
int main()
{
    setlocale(0, "");

    int start;
    int end;

    double f;

    cout << "Range then and up: ";
    cin >> start;
    cin >> end;
    while (start <= end)
    {
        f = (start * 1.8) + 32;
        cout << start << "\t" << f << "\n";
        start++;
    }

    //Задание 2.

    setlocale(0, "");

    int num;
    int nummm;

    cout << "Enter the number : ";
    cin >> num;

    nummm = num;

    while (nummm != 0)
    {
        if (num % nummm == 0)
        {
            cout << nummm << " ";
        }
        nummm--;
    }

    //Задание 3. 

    setlocale(0, "");

    int num, tmp, rn = 0;

    cout << "Enter number";
    cin >> num;

    while (num != 0)
    {
        tmp = num % 10;
        rn = rn * 10 + tmp;
        num /= 10;
    }
    setlocale(0, "");
    cout << "Revers" << rn << "\n";
}