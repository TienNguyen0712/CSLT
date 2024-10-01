#include<bits/stdc++.h> //Thư viện tổng
using namespace std;
        //Xoa phan tu thu k trong mang
    void xoaphantu(int a[], int &c, int k){
        for (int i = k; i < c; i++)
                a[i] = a[i + 1];
                c--;
    }
        //Them phan tu x vao vi tri thu k trong mang
    void themphantu(int a[], int &d, int k, int x){
        for (int j = k; i < d; i--)
            a[i] = a[i - 1];
            a[k] = x;
            d++;
    }
        //Tinh tong theo kieu tra ve
    int tinhtong(int a[], int &b){
        int s = 0, i;
        for (i = 0; i < b; i++) {s  = s + a[i]};
        return s;
    }
int main(){
    //Vidu1 //Nhap cac phan tu
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
            //Duyet cac phan tu
    for (int j = 0; j < n; i++)
    {
        /*Cau lenh duyet phan tu*/
    }
            //Tinh tong
    int s = 0;
    int n; cout<<"Nhap so phan tu cua mang: "; cin>>n;
    int b[n];
    for (int z = 0; z < n; z++)
    {
        s = s + b[z];
    }
    cout<<s;
            //Dem so phan tu thoa dieu kien
        int dem = 0;
    int n; cout<<"Nhap so phan tu cua mang: "; cin>>n;
    int c[n];
    for (int x = 0; x < n; x++)
    {
        /*Cau lenh dieu kien*/
        dem++;
    }
    cout<<dem;
    return 0;
}