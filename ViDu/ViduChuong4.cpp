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
    //Vidu1 
    //Nhap cac phan tu
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
    //Dat linh canh
    //Q3
        #include <bits/stdc++.h>

        using namespace std;

        void nhap(int a[], int n);
        void sontMax(int a[], int n);
        int main(){
            int n;
            cout << "Nhap so phan tu cua Mang: "; cin >> n;
            int a[n];
            nhap(a, n);
            sontMax(a, n);
            return 0;
        }
        void nhap(int a[], int n){
            cout << "Nhap so phan tu cua Mang: ";
            for(int i = 0; i < n; i++)
                cin >> a[i];
        }
        int sont(int n){
            if (n < 2) return false;
            for(int i = 2; i  < sqrt(n) + 1; i++){
                if(n % i == 0 ) return false;
            }
            return n;
        }
        void sontMax(int a[], int n){
            int max = a[0];
            for(int i = 1 ; i < n; i++){
                if(sont(a[i]) > max) max = sont(a[i]);
            }
            cout << "So nguyen to lon nhat trong Mang la: " << max;
        }

    //Q4
#include <bits/stdc++.h>

using namespace std;

void nhap(int a[], int n);
void sontMin(int a[], int n);
int main(){
    int n;
    cout << "Nhap so phan tu cua Mang: "; cin >> n;
    int a[n];
    nhap(a, n);
    sontMin(a, n);
    return 0;
}
void nhap(int a[], int n){
    cout << "Nhap so phan tu cua Mang: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
}
int sont(int n){
    if (n < 2) return false;
    for(int i = 2; i  < sqrt(n) + 1; i++){
        if(n % i == 0 ) return false;
    }
    return n;
}
void sontMin(int a[], int n){
    int min = a[0];
    for(int i = 1 ; i < n; i++){
        if(sont(a[i]) < min) min = sont(a[i]);
    }
    cout << "So nguyen to nho nhat trong Mang la: " << max;
}

    //Thuat toan tim kiem
    //Dat linh canh 
    //Q1
    void nhap(int a[], int n);
    void timkiem(int a[], int n);
        int main(){
            int n;
            cout << "Nhap so phan tu cua mang: "; cin >> n;
            int a[n];
            nhap(a, n);
            timkiem(a, n);
            return 0;
        
        }
   void nhap(int a[], int n){
        cout << "Nhap phan tu cho Mang: ";
        for(int i = 0; i < n; i++)
                cin >> a[i];
        }
   void timkiem(int a[], int n){
        int x, d, dem = 0;
        cout << "Nhap phan tu muon tim: "; cin >> x;
    for(int i = 0; i < n; i++)
        if(a[i] == x){
            d = i;
            dem = 1;
            break;
        }
    if(dem == 1){
        cout << d;
    } else {
        cout << "-1";
    }
}
    //Q2
   void nhap(int a[], int n);
   void timkiem(int a[], int n);
   int main(){
      int n;
      cout << "Nhap so phan tu cua mang: "; cin >> n;
      int a[n];
      nhap(a, n);
      timkiem(a, n);
      return 0;
   }
 void nhap(int a[], int n){
    cout << "Nhap phan tu cho Mang: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
 }
 void timkiem(int a[], int n){
    int x, d, dem = 0;
    cout << "Nhap phan tu muon tim: "; cin >> x;
    for(int i = 0; i < n; i++)
        if(a[i] == x){
            d = i;
            dem = 1;
        }
    if(dem == 1){
        cout << d;
    } else {
        cout << "-1";
    } 
 }
    //MANG 2 CHIEU 
    //Nhap vao mang 2 chieu 
    int m, n;
    cout<<"Nhap so hang: "; cin>>m;
    cout<<"Nhap so cot: "; cin>>n;
    int arr[n][m];
    for (int i = 0; i < m; i++)
    for( int j = 0; j < n; j++)
        cin>>arr[i][j];
    //Xuat mang 2 chieu
    for(int c = 0; c < m; c++){
        for(int z = 0; z < n; z++)
            cout<<arr[c][z];
    }
    //Tinh tong 
    int sum = 0;
     for(int c = 0; c < m; c++){
        for(int z = 0; z < n; z++)
            sum+=arr[c][z];
    }
    cout<<sum;
    //Dem phan tu thoa dieu kien
        int dem = 0;
     for(int c = 0; c < m; c++){
        for(int z = 0; z < n; z++)
            if (/*Dieu kien bai toan*/)
                dem++;
    }
    cout<<dem;
    //Tim gia tri lon nhat
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(arr[i][j] > max) max = arr[i][j]; 
        }
    }
    cout << max;
    //Tim gia tri nho nhat
    int min = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(arr[i][j] < min) min = arr[i][j]; 
        }
    }
    cout << min;
    //Tong cac phan tu moi hang
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
           sum += arr[i][j]; 
            }
    }
    cout << sum;
    //Tong cac phan tu moi cot
    for(int j = 0; j < n; j++){
        int sum = 0;
        for(int i = 0; i < m; i++){
           sum += arr[i][j]; 
            }
    }
    cout << sum;
    //Gia tri lon nhat moi dong
    for(int i = 0; i < n; i++){
        int max = 0;
        for(int j = 0; j < m; j++){
           if(arr[i][j] > max) max = arr[i][j]; 
            }
    }
    cout << max;
    //Gia tri lon nhat moi cot
    for(int i = 0; i < n; i++){
        int max = 0;
        for(int j = 0; j < m; j++){
           if(arr[i][j] > max) max = arr[i][j]; 
            }
    }
    cout << max;
    //Tong cac phan tu tren duong cheo chinh 
    int sum = 0;
    for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    sum = sum + a[i][i];
    }
    cout << sum;
    //Tong cac so tren duong cheo phu
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i][n-i-1];
    }
    cout << sum;
    //Tong cac so thuoc tam giac duoi
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++)
        sum = sum + a[i][j];
    }
    cout << sum;
    //Tong cac so tren tam giac tren
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++)
        sum = sum + a[i][j];
    }
    cout << sum;
}
