#include <iostream>
using namespace std;

void rotateMatrix(int a[][20], int N)
{
    int temp;
    // Consider all matrix cells one by one
    for (int x = 0; x < N / 2; x++)
    {
        // Consider the elements in groups of 4 in the current square
        for (int y = x; y < N-x-1; y++)
        {
            // Store the value of current cell in the 'temp' variable
            temp = a[x][y];

            // Rotation of values from Left to Top
            a[x][y] = a[N-1-y][x];

            // Rotation of values from Bottom to Left
            a[N-1-y][x] = a[N-1-x][N-1-y];

            // Rotation of values from Right to Bottom
            a[N-1-x][N-1-y] = a[y][N-1-x];

            // Assign value of 'temp' to Right
            a[y][N - 1 - x] = temp;
        }
    }
}

void displayMatrix(int a[][20], int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            cout<<a[i][j]<< " ";
        cout<<endl;
    }
}

int main()
{
    int i,j, n, a[20][20];
    cout<<"Enter the order of the matrix: ";
    cin>>n;
    cout<<"Enter the elements of the matrix:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    cout<<"The entered matrix is: \n";
    displayMatrix(a, n);
    cout<<"The 90 degree rotated matrix in clockwise direction is: \n";
    rotateMatrix(a, n);
    displayMatrix(a, n);
    return 0;
}
