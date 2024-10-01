#include<bits/stdc++.h> //Thư viện tổng
using namespace std;
//Tinh tong cac chu so trong mang
void tinhtong(int a[], int &n, int i){
    int s = 0, t;
    while (a[i] != 0)
    {
        t = a[i] % 10;
        s = s + t;
        a[i] = a[i]/10;
    }
    cout<<"Tong cua cac chu so cua so trong mang la: "<<s<<" ";
}
int sont(int n){
    int d = 0;
    if(n < 2){return 0;}
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0) d++;
        if(d == 2) return 1;
    }
}
int socp(int n){
    for (int i = 1; i <= n; i++)
    {
        if(i*i == n) return 1;
    }
    return 0;
}
int sohc(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        sum = sum + i;
    }
    if(sum == n) return 1;
}
int main(){
    //BAI TAP 4.1
    int n;
    cout<<"Nhap so co trong mang: "; cin>>n;
    int a[n];
    int s= 0, demnt = 0, demcp = 0, demhc = 0;
    for (int i = 0 ; i < n; i++)
    {
        cin>>a[i];
        //CAU A
        tinhtong(a, n, i);
        cout<<endl;
        //CAU B
        s = s + a[i];
        //CAU C
        if(sont(a[i])) demnt++;
        if(socp(a[i])) demcp++;
        if(sohc(a[i])) demhc++;
    }
    cout<<"Trung binh cong cua cac so trong mang: "<<s<<"\n";
    cout<<"Co "<<demnt<<" so nguyen to trong mang\n";
    cout<<"Co "<<demcp<<" so chinh phuong trong mang\n";
    cout<<"Co "<<demhc<<" so hoan chinh trong mang\n";
    return 0;
}