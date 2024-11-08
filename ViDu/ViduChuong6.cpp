#include <bits/stdc++.h>

using namespace std;

struct nhanvien{
    string hovaten;
    int ngay, thang, nam, luongcb, thuong, thuclanh; 
};

void nhap(int *&a, int &n);
void xuat(int *a, int n);
void sapxep(int *a, int n);
int timMax(int *a, int n);
void nhap(int *&a, int &m, int &n, int &x);
void demso(int *a, int m, int n, int x);
void nhap(nhanvien *&a, int &n);
void xuat(nhanvien *a, int n);
void sapxep(nhanvien *a, int n);

int main(){
    //Vidu1
    int ar[] = {12, 10, 11, 18, 13, 6}, *p;
    p = &ar[0];
    printf("%d", *p);
    p = &ar[3];
    printf("%d", *p);
    *p = *p + 100;
    printf("%d", ar[3]);
    p = p - 2;
    printf("%d", *p);
    //Vidu2
    int *ptr, m;
    nhap(ptr, m);
    //CÂU A
    cout << "GTLN: " << timMax(ptr, m) << endl;
    //CAU B
    sapxep(ptr, m);
    xuat(ptr, m);
    delete []ptr;
    //Vidu3
    int *ptr, m ,n , x;
    nhap(ptr, m, n, x);
    //CAU A, B
    demso(ptr, m, n, x);
    //Vidu4
    nhanvien *ptr;
    int n;
    //CAU A
    nhap(ptr, n);
    //CAU B
    sapxep(ptr, n);
    xuat(ptr, n);
    delete[] ptr;
    return 0;
}

void nhap(int *&a, int &n){
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}
void xuat(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}
int timMax(int *a, int n){
    int max = *a;
    for (int i = 0; i < n; i++)
    {
        if(*(a + i) > max) *(a + i) = max;
    }
    return max;
}
void swap(int *a, int *b){
    int t  = *a;
        *a = *b;
        *b = t;
}
void sapxep(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if( *(a + i) > *(a + j)) swap( a + i, a + j);
        }
    }
}
void nhap(int *&a, int &m, int &n, int &x){
    cout << "Nhap so hang: "; cin >> m;
    cout << "Nhap so cot: "; cin >> n;
    a = new int[m * n];
    for(int i = 0; i < m; i ++)
    for (int j = 0; j < n; j++)
        cin >> *(a + n * i + j);
    cout << "Nhap so x: "; cin >> x;
}
void demso(int *a, int m, int n, int x){
    int d = 0; 
    for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
    if(*(a + n * i + j) == x){
        d++;
        cout << i + 1 << " " << j + 1 << endl;
    }
    cout << "Co " << d << " so giong voi x";
}

void nhap(nhanvien *&a, int &n){
    cout << "Nhap so nhan vien: "; cin >> n;
    a = new nhanvien [n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ho va ten: ";  cin.ignore(); getline(cin, (a + i)->hovaten);
        cout << "Nhap ngay thang nam=: "; cin >> (a + i)->ngay >> (a + i)->thang >> (a + i)->nam;
        cout << "Nhap luong co ban: "; cin >> (a + i)->luongcb;
        cout << "Nhap thuong: "; cin >> (a + i)->thuong;
    }
    
}

void xuat(nhanvien *a, int n){
    for (int i = 0; i < n; i++){
        (a + i)->thuclanh = (a + i)->luongcb + (a + i)->thuong;
        cout << "Ho va ten: " << (a + i)->hovaten << endl;
        cout << "Ngay thang nam: " << (a + i)->ngay << "/" << (a + i)->thang << "/" << (a + i)->nam << endl;
        cout << "Luong co ban: " << (a + i)->luongcb << endl;
        cout << "Thuong: " << (a + i)->thuong << endl;
        cout << "Thuc lanh: " << (a + i)->thuclanh << endl;
    }
}
void swap(nhanvien *a, nhanvien *b){
    nhanvien t = *a;
    *a = *b;
    *b = t;
}
void sapxep(nhanvien *a, int n){
    for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
        if((a + i)->thuclanh < (a + j)->thuclanh)
            swap((a + i), (a + j));
}