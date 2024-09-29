#include <bits/stdc++.h>
using namespace std;
void nhap(int &tu, int&mau){
    cin>>tu>>mau;
}
void xuat(int &tu, int &mau){       //Toi gian phan so
    int m, n;
    if(tu > mau) {m = tu; n = mau;} else {n = tu; m = mau;}
    int r = m%n;
    while (r != 0)
    {
        m = n;
        n  = r;
        r = m % n;
    }
    cout<<tu/n<<"/"<<mau/n<<endl;
}
void tong(int tu1, int mau1, int tu2, int mau2, int &tu, int &mau){
    tu = tu1*mau2 + tu2*mau1;
    mau = mau1*mau2;
}
void hieu(int tu1, int mau1, int tu2, int mau2, int &tu, int &mau){
    tu = tu1*mau2 - tu2*mau1;
    mau = mau1*mau2;
}
void tich(int tu1, int mau1, int tu2, int mau2, int &tu, int &mau){
    tu = tu1*tu2;
    mau = mau1*mau2;
}
void thuong(int tu1, int mau1, int tu2, int mau2, int &tu, int &mau){
    tu = tu1*mau2;
    mau = tu2*mau1;
}
void nhap(int &n){
    cin>>n;
}
int caua(int a){
    int dem = 0;
    for (int i = 0; i < a; i++)
    {
        dem++;
    }
    return dem;
}
void caub(int b){
    for (int i = 1; i <= b; i++)
    {
        cout<<i<<endl;
    }
}
int songuyento(int a){
    if(a < 2){
        return 0;
    }
    int d = sqrt(a);
    int j;
    for (j = 2; j <= d + 1; j++)
    {
        if(a % j == 0){
            return 1;
        }
    }
    return 0;
}
void cauc(int b){
    int dem = 0, i  = 2;
    while (dem < b)
    {
        if(songuyento(i)){
            cout<<i;
            dem++;
        }
        i++;
    }
}
int daonguoc(int a){
    int m = 0;
    while (a > 0)
    {
        m = m*10+a%10;
        a = a/10;
    }
    return m;
}
void caud(int b){
    for (int i = 1; i <= b; i++)
    {
        if(songuyento(i)){
            if(songuyento(daonguoc(i))){
                cout<<i;
            }
        }
    }
}
void cauf(int b){
    int i;
    for (i = 2; i <= b; i++)
    {
        if(songuyento(i)){
        int d = pow(i, 2) - 1;
            for (int j = d; j <= b;)
            {
            if(songuyento(d)){
                cout<<d<<" ";
                }
            }
        }
    }
    
}
void caue(int b){
    int i;
    for (i = 2; i <= b; i++)
    {
        if(songuyento(i)){
            //Them code
        }
    }
    
}
long long giaithua(int a){
    if(a == 1 || a == 0) return 1;
    else 
    return a * giaithua(a-1);
}
int sofib(int a){
    if(a == 1 || a == 2) return 1;
    else 
    return sofib(a-1)+sofib(a-2);
}
int tinhXn(int a){
    if( a == 0) return 1;
    else
    return tinhXn(a-1)+tinhYn(a-2);
}
int tinhYn(int a){
    if(a == 0) return 1;
    else
    return 3*tinhXn(a-1) + 2*tinhYn(a-1);
}
int tinhAn(int a){
    if( a == 1) return 1;
    int s = 0;
    for (int i = 0; i <= a; i++)
    {
        s = s + tinhAn(i);
    }
    return s*a;
}
int main(){
    //Vidu1
    int tu1,mau1,tu2,mau2,tu,mau;
    nhap(tu1, mau1);
    nhap(tu2, mau2);
    tong(tu1, mau1, tu2, mau2, tu, mau); xuat(tu,mau);
    hieu(tu1, mau1, tu2, mau2, tu, mau); xuat(tu,mau);
    tich(tu1, mau1, tu2, mau2, tu, mau); xuat(tu,mau);
    thuong(tu1, mau1, tu2, mau2, tu, mau); xuat(tu,mau);
    return 0;
    //Vidu2
    int n;
    cout<<"Nhap n: "; nhap(n);
    cout<<"Ket qua cau a: "<<caua(n)<<endl;
    caub(n); cout<<endl;
    cauc(n); cout<<endl;
    caud(n); cout<<endl;
    caue(n); cout<<endl;
    cauf(n); 
    return 0;
    //Vidu3
    int n;
    cout<<"Nhap n: "; cin>>n;
    giaithua(n);
    return 0;
    //Vidu4
    int n;
    cout<<"Nhap n: "; cin>>n;
    sofib(n);
    return 0;
    //Vidu5
    int n;
    cout<<"Nhap n: "; cin>>n;
    tinhXn(n);
    tinhYn(n);
    return 0;
    //Vidu6
    int n;
    cout<<"Nhap n: "; cin>>n;
    tinhAn(n);
    return 0;
}