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
bool sont(int n){
    if (n < 2) return false;
    int d = 0;
    for (int i = 2; i <= sqrt(n) + 1; i++)
    {
        if(n % i == 0) d++;
    }
    if(d == 2) return true;
}
bool sohc(int n){
    int sum = 1;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            sum += i + (n / i);
        }
    }
    return sum == n && n != 1;
}
bool socp(int n){
    int x = sqrt(n);
    return  x*x == n;
}
void hoanvi(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void sapxep(int a[], int &n){
    for (int i = 0; i < n; i++)
    for (int j = i + 1; j  < n; j++)
    if(a[i] < a[j])
        hoanvi(a[i], a[j]);
}
void
int main(){
    //BAI TAP 4.1
    int n;
    cout<<"Nhap so co trong mang: "; cin>>n;
    int t;
    cout<<"Nhap so lon thu k trong mang: "; cin>>t;
    int a[n];
    int s = 0, demnt = 0, demcp = 0, demhc = 0;
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
        //CAU D
        sapxep(a, n);
        cout<<a[t];
        //CAU E
        if(sont(a[i])) hoanvi()
    }

    cout<<"Trung binh cong cua cac so trong mang: "<<fixed<<setprecision(2)<<float(s/n)<<"\n";
    cout<<"Co "<<demnt<<" so nguyen to trong mang\n";
    cout<<"Co "<<demcp<<" so chinh phuong trong mang\n";
    cout<<"Co "<<demhc<<" so hoan chinh trong mang\n";
    return 0;
}
