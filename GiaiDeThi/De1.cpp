#include <bits/stdc++.h>

using namespace std;
void timK();
int cau2_1(int n);
int cau2_2(int n);
int main(){
    //CAU 1
    timK();
    //CAU 2
    int n;
    cout << "Nhap n: "; cin >> n;
    cau2_1(n);
    cau2_2(n);
    //CAU 3
    //CAU A
    //CAU B
    //CAU C
    //CAU D
    //CAU 4
    return 0;
}
int dq1(int n){
    if(n == 1) return 1;
    return n + dq1(n - 1);
}
int cau2_1(int n){
    return dq1(n) * n;
}
int cau2_2(int n){
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s+=i;
    }
    return s * n;
}
bool nt(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    for (int i = 2; i <= sqrt(n) + 1; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
    
}
bool dx(int n){
    int d = 0; int x = n;
    for (int i = n; i != 0; i/=10)
    {
        d = d * 10 + i % 10;
    }
    return d == x;
}
void timK(){
    for (int i = 10001; i < 1000000; i+=2)
    {
        if(nt(i) && dx(i)){
            cout << i << " ";
        }
    }
}
