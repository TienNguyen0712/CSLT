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
    return s*n;
}
bool nt(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true; 

}

bool dx(int num) {
    string s = to_string(num);
    return s == string(s.rbegin(), s.rend());
}

void timK() {
    for (int num = 10001; num < 100000; num += 2) {
        if (dx(num) && nt(num)) {
            cout << num <<  " ";
        }
    }
}