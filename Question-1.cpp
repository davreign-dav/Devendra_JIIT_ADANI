#include <bits/stdc++.h>
using namespace std;
int main()
{

    int m_cols, n_rows;
    cout << "Enter number of rows" << endl;
    cin >> n_rows;
    cout << "Enter number of cols" << endl;
    cin >> m_cols;
    int array[n_rows][m_cols];

    for (int i = 0; i < n_rows; i++)
        for (int j = 0; j < m_cols; j++)
            array[i][j] = (rand() % 100);

    cout << "The 2D-Array is :" << endl;

    for (int i = 0; i < n_rows; i++)
    {
        for (int j = 0; j < m_cols; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
}