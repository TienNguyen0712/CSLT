#include <bits/stdc++.h>

using namespace std;
void timK();
int cau2_1(int n);
int cau2_2(int n);
void nhap(int a[], int b);
void xuat(int a[], int b);
void timMax(int a[], int b);
void lonthuK(int a[], int n);
void sapxep(int a[], int n);
void daycon(int a[], int n);

int main(){
    //CAU 1
    timK();
    //CAU 2
    int n;
    cout << "Nhap n: "; cin >> n;
    cau2_1(n);
    cau2_2(n);
    //CAU 3
    int n;
    cout << "Nhap so phan tu: "; cin >> n;
    int arr[n];
    cout << "Nhap " << n << " phan tu: ";
    nhap(arr, n);
    //CAU A
    timMax(arr, n);
    //CAU B
    lonthuK(arr, n);
    //CAU C
    sapxep(arr, n);
    xuat(arr, n);
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
void nhap(int a[], int b){
    for(int i = 0; i < b; i++)
        cin >> a[i];
}
void xuat(int a[], int b){
    for(int i = 0; i < b; i++){
        cout << a[i] <<  " ";
    }
    cout << endl;
}
void timMax(int a[], int b){
    int max = INT_MIN;
    for(int i = 0; i < b; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    cout << "GTLN: " << max << endl;
}
void swap(int &c, int &d){
    int temp = c;
    c = d;
    d = temp;
}
void lonthuK(int a[], int n){
    int k; cout << "Nha so lon thu k: "; cin >> k;
    for(int i = 0; i < n; i++){
        for (int j = 1; j < n; j++)
        {
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    cout << "Gia tri lon thu " << k << ": " << a[k] << endl;
}

void sapxep(int a[], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if(a[i] % 2 == 0 && a[j] % 2 != 0) swap(a[i], a[j]);
        }
    }
}
bool nt(int a){
    if( a < 2) return false;
    if( a == 2) return true;
    for (int i = 2; i < sqrt(a) + 1; i++)
    {
        return false;
    }
    return true;
}
void daycon(int a[], int n){
    int b[n], d = 0;
    for (int i = 0; i < n; i++)
    {
        if(nt(i)) d++; b[i] = d;
        cout << b[i] << " ";
    }
}
