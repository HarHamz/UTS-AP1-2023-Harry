#include <iostream>
using namespace std;

int main(void)
{
    int n, b = 0;

    // minta input dari user
    cout << "Masukkan input: ";
    cin >> n;

    // bagian atas segitiga
    for (int i = n - 1; i > 0; i--)
    {
        // bintang kiri
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        // spasi tengah
        for (int j = 0; 2 * b > j; j++)
        {
            cout << "  ";
        }
        // bintang kanan
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        b++;
        cout << endl;
    }
    b = n-1;
    // bagian bawah segitiga
    for (int i = 1; i < n; i++)
    {
        // bintang kiri
        for (int j = 0; j < i ; j++)
        {
            cout << "* ";
        }
        // spasi tengah
        for (int j = 0; j < 2 * n - 2 * i - 2; j++)
        {
            cout << "  ";
        }
        // bintang kanan
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        b--;
        cout << endl;
    }
}