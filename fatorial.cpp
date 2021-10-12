#include <cstdlib>
#include <iostream>

using namespace std;

int main()

{
    int n,i,
    fat = 1;
    cout<<"Digite um numero para calcular seu fatorial";
    cin>>n;
    for (i = 1; i < n; i++){
        fat += fat * i;  
    }   
    cout<<"o fatorial de"<<n<<"eh"<<fat;
    
    system("PAUSE");
    return 0;
}
