#include <bits/stdc++.h>
using namespace std;
int col_number;
bool sort_2DArray_byCol(const vector<int> &a, const vector<int> &b)
{

    return a[col_number] < b[col_number];
}

int main()
{
    int m_cols, n_rows;
    cout << "Enter number of rows" << endl;
    cin >> n_rows;
    cout << "Enter number of cols" << endl;
    cin >> m_cols;
    vector<vector<int>> array(n_rows, vector<int>(m_cols));

    for (int i = 0; i < n_rows; i++)
        for (int j = 0; j < m_cols; j++)
            array[i][j] = (rand() % 100);

    cout << "The 2D-Array before sorting :" << endl;

    for (int i = 0; i < n_rows; i++)
    {
        for (int j = 0; j < m_cols; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    cout << "Enter the column number to sort the 2-D list based on column: ";
    cin >> col_number;
    col_number -= 1; // index start from 0
    sort(array.begin(), array.end(), sort_2DArray_byCol);
    cout << "The 2D Array after sorting is:\n";
    for (int i = 0; i < n_rows; i++)
    {
        for (int j = 0; j < m_cols; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    return 0;
}
