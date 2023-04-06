

#include <iostream>
using namespace std;

enum color { black, white }; //color enum with members black and white 

const int n = 2; //dimentions of the images
const int m = 3;

bool isnegative(color A[][m], color B[][m]) //checking if A is the opposite of B
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (A[i][j] == B[i][j]) 
            {
                return false;
            }
        }
    }
    return true; 
}

int main()
{

    color A1[n][m] = { {black, white, black},
                     {white, black, white} }; 

    color B1[n][m] = { {white, black, white},
                     {black, white, black} };

    if (isnegative(A1, B1))
        cout << "A is the negative of B"<<endl;
    else
        cout << "A is not the negative of B"<<endl;

    color A2[n][m] = { {black, white, black},
                     {white, black, white} };

    color B2[n][m] = { {white, black, white},
                     {black, black, black} };

    if (isnegative(A2, B2))
        cout << "A is the negative of B"<<endl;

    else
        cout << "A is not the negative of B"<<endl;

    return 0;
}
