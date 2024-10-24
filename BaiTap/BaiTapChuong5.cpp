#include <bits/stdc++.h>

using namespace std;

struct phanso
{
    int tu; 
    int mau;
};
void nhap(phanso a[], int n);
void xuat(phanso a[], int n);
void timMax(phanso a[], int n);
void tongArr(phanso a[], int n);
int main(){
    //BAI TAP 5.1
    int n;
    cout << "Nhap n phan so: "; cin >> n;
    phanso ps[n];
    nhap(ps, n);
    //CÁU A
    timMax(ps,n);
    cout << endl;
    //CAU B 
    tongArr(ps, n);   
    return 0;
}
void nhap(phanso a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu: "; cin >> a[i].tu; 
        cout << "Nhap phan mau: "; cin >> a[i].mau; 
    }
}
void xuat(phanso a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].tu << "/" << a[i].mau << " ";
    }
}
void timMax(phanso a[], int n){
    phanso max;
    max.tu = a[0].tu;
    max.mau = a[0].mau;
    for(int i = 0; i < n; i++){
        if(a[i].tu > max.tu) max.tu = a[i].tu;
        if(a[i].mau > max.mau) max.mau = a[i].mau;
    }
    cout << "Phan so co gia tri lon nhat la: " << max.tu << "/" << max.mau;
}
phanso tongps(phanso &ps1, phanso &ps2){
    phanso ps;
    ps.tu = ps1.tu * ps2.mau + ps2.tu *ps1.mau;
    ps.mau = ps1.mau*ps2.mau;
    return ps;
}
void tongArr(phanso a[], int n){
    phanso sum;
    for (int i = 0; i < n; i+=2)
    for(int j = 1; j < n; j+=2)
        sum = tongps(a[i], a[j]);
    cout << "Tong cua phan so trong Mang la: " << sum.tu << "/" << sum.mau;
}
