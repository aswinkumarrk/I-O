#include <iostream>
using namespace std;
int main()
{
     int a=0;
     int N;
     cin>>N;
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
            a = a + i + j;
        }
    }
    cout<<"the value of a"<<a;


    return 0;
}
