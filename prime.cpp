#include <iostream>
#include <cmath>

using namespace std;

void prime_t(float);

int main(){
    float n, x;
    // Enter number of primality tests
    cin >> n; 
    if(floor(n)==n && n<100000){
        for(int i=0; i<n; i++){
            cin >> x; 
            prime_t(x);
        }
    }
    return 0;
}

void prime_t(float x){
    float result;
    if(floor(x)==x && x>1 && x<10000){
        for(int i=2; i<x; i++){
            result = x / i;
            if(result==floor(result)){
                cout << "NO" << endl;
                return;
            }
        }
    } else
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;
}