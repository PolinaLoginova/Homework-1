#include <iostream>
#include <string>
using namespace std;

int main()
{ int N;
  //cout << "N =";
  cin >> N; // размерность массива
   int a=0; // номер элемента массива
   int arr[N];
   int sum=0;
   // input array
    for (a = 0; a < N; a++)
        {
       // cout << "arr[" << a << "]:";
        cin >> arr[a];
        }
   for (a = 0; a < N; a++)
        {
        //cout << arr[a] << " "<< endl;

        }

    for (a = 0; a < N; a++)
        {
            if (arr[a]%72==0)
               {
                   if (arr[a]%27!=0)
                    {
                        sum = sum + arr[a];
                    }
                    else {a+1;}
                }
            else
                {
                    if (arr[a]%27==0)
                        {
                        sum = sum + arr[a];
                        }
                    else {a+1;}
                }
        }
       // cout << "summa = " << sum ;
       cout << sum;
    return 0;
}
