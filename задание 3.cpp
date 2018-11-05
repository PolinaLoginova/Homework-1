#include <iostream>

using namespace std;

int main()
{
    unsigned int input, sum = 0, lengh = 0;
    float avarage;
    do {
        cin >> input;
        sum += input;
        lengh++;
    }
    while (input != 0);
           avarage = (float)sum/(float)lengh;
        cout << avarage;

    return 0;
}
