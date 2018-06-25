

#include <iostream>

using namespace std;
int main()
{
    int N;
 int a = 0, b = 0;
 cin>>N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a = a + j;
        }
    }
    for (int k = 0; k < N; k++) {
        b = b + k;
    } 
    cout<<"the value of a"<<a<<"\n"<<"value of b"<<b;


    return 0;
}
