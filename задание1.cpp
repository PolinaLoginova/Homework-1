#include <iostream>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;
    if (N==1){
        cout << N << "Unit";
        return 0;
        }
    for (int i = 2; i<N; i++)
        { if (N%i == 0)
        {
        cout << N << "Composite";
        return 0;
        }
        }
    cout << N << "Prime";
    return 0;
}
