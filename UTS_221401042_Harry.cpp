#include <iostream>
using namespace std;

// function untuk bintang bagian atas segitiga
void upper_star(int i)
{
    for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
}

// function untuk bintang bagian bawah segitiga
void lower_star(int i)
{
    for (int j = 0; j < i ; j++)
        {
            cout << "* ";
        }
}

// function untuk spasi
void spaces(int i, int n)
{
    for (int j = 0; j < 2 * n - 2 * i - 2; j++)
        {
            cout << "  ";
        }
}

int main(void)
{
    int n;

    // minta input dari user
    cout << "Masukkan input: ";
    cin >> n;

    // bagian atas segitiga
    for (int i = n - 1; i > 0; i--)
    {
        // bintang kiri
        upper_star(i);
        // spasi tengah
        spaces(i,n);
        // bintang kanan
        upper_star(i);

        cout << endl;
    }

    // bagian bawah segitiga
    for (int i = 1; i < n; i++)
    {
        // bintang kiri
        lower_star(i);
        // spasi tengah
        spaces(i,n);
        // bintang kanan
        lower_star(i);
        cout << endl;
    }
}