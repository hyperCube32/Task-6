#include <iostream>

using namespace std;

void IO()
{
    cout << "Введите  размер n квадратной Матрицы A(n x n) > ";
    int n;
    cin >> n;
    int** A = new int* [n];

    for (int i = 0; i < n; i++)
    {
        A[i] = new int[n];
    }
   

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            A[i][k] = 1 - abs(i % 2 - k % 2);
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            cout << A[i][k] << "  ";
        }
        cout << endl << endl;
    }

    
    for (int i = 0; i < n; i++)
    {
        delete[] A[i];
    }
    delete[] A;
}

int main()
{
    setlocale(0, "");
    char uslovie = 0;
    cout << "Начать вычисления - y Выйти - n > ";
    cin >> uslovie;
    cout << endl;
    while (uslovie != 'n')
    {
        IO();
        cout << endl;
        cout << "повтоорить вычисление y - да n - нет  > ";
        cin >> uslovie;
        cout << endl;
    }
}
