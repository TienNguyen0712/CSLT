#include <bits/stdc++.h>

using namespace std;

struct phanso
{
    int tu; 
    int mau;
};
struct point
{
    int x;
    int y;
};
struct donthuc {
    int somu;
    int heso;
    int soc;
};
struct tamgiac {
    int a;
    int b;
    int c;
};
void nhapdiem(point a[], int n);
void dem(point a[], int n);
void xuatdiem(point a, int n);
void nhap(phanso a[], int n);
void xuat(phanso a[], int n);
void timMax(phanso a[], int n);
void tongArr(phanso a[], int n);
void sapxepArr(phanso a[], int n);
void capgannhaunhat(point a[], int n);
void demdiem(point a[], int n);
void nhapdonthuc(donthuc a[], int n);
void ketquadathuc(donthuc a[], int n);
void nhap(tamgiac a[], int n);
void sMax(tamgiac a[], int n);
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
    //CAU C
    sapxepArr(ps, n);
    xuat(ps, n);
    //BAI TAP 5.2
    //CAU A
    int n;
    cout << "Nhap so diem can tao: "; cin >> n;
    point p[n];
    nhapdiem(p, n);
    dem(p, n);
    //CAU B
    cout << endl;
    capgannhaunhat(p, n);
    //CAU C
    cout << endl;
    demdiem(p, n);
    //BAI TAP 5.3
    int n;
    cout << "Nhap so da thuc: "; cin >> n;
    donthuc Arr[n];
    nhapdonthuc(Arr, n);
    ketquadathuc(Arr, n);
    //BAI TAP 5.4
    int n;
    cout << "Nhaqp so tam giac: "; cin >> n;
    tamgiac Arr[n];
    nhap(Arr, n);
    sMax(Arr, n);
    //BAI TAP 5.5
    //CAU A
    //CAU B
    //CAU C
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
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
bool sosanhlonhon(phanso ps1, phanso ps2){
    return ps1.tu * ps2.mau > ps2.tu * ps1.mau; 
}
void sapxepArr(phanso a[], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if(sosanhlonhon(a[i], s[j]))
                swap(a[i], a[j]);
        }
    }
}
void nhapdiem(point a[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap diem thu " << i + 1 << endl;
        cout << "Nhap diem x: "; cin >> a[i].x;
        cout << "Nhap diem y: "; cin >> a[i].y;
    }
}
void dem(point a[], int n){
    int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, d = 0;
    for(int i = 0; i < n; i++){
        if(a[i].x > 0 && a[i].y > 0) dem1++;
        if(a[i].x < 0 && a[i].y > 0) dem2++;
        if(a[i].x < 0 && a[i].y < 0) dem3++;
        if(a[i].x > 0 && a[i].y < 0) dem4++; 
        if(a[i].x == 0 || a[i].y == 0) d++;
    }
    cout << "Diem thuoc ve moi goc phan tu thu I la: " << dem1 << endl;
    cout << "Diem thuoc ve moi goc phan tu thu II la: " << dem2 << endl;
    cout << "Diem thuoc ve moi goc phan tu thu III la: " << dem3 << endl;
    cout << "Diem thuoc ve moi goc phan tu thu IV la: " << dem4 << endl;
    cout << "Diem nam tren cac truc toa do: " << d;
}
void xuatdiem(point a[], int n){
    for (int i = 0; i < n; i++)
    {   
        cout << "Diem thu " << i + 1 << endl;
        cout << "( " << a[i].x << ";" << a[i].y << " )"; 
    }
    
}
float kc(point a, point b){
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
void capgannhaunhat(point a[], int n){
    float min = INT_MAX; int kc1, kc2;
    for (int i = 0; i < n; i++)
    for (int j = i+1; j < n; j++)
    if(kc(a[i], a[j]) < min){
        min = kc(a[i], a[j]);
        kc1 = i;
        kc2 = j;
    }
    cout << kc1 + 1 << " " << kc2 + 1 << " " << min;
}
void demdiem(point a[], int n){
    int d1 = 0, d2 = 0, d3 = 0;
    for (int i = 0; i < n; i++)
    {
        if((3 * a[i].x + 4 * a[i].y + 1) > 0) d1++;
        if((3 * a[i].x + 4 * a[i].y + 1) == 0) d2++;
        if((3 * a[i].x + 4 * a[i].y + 1) < 0) d3++;
    }
    cout << "Co " << d1 << " diem nam tren duong thang 3x+4y+1=0" << endl;
    cout << "Co " << d2 << " diem nam duoi duong thang 3x+4y+1=0" << endl;
    cout << "Co " << d3 << " diem thuoc duong thang 3x+4y+1=0" << endl;
}
void nhapdonthuc(donthuc a[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap he so da thuc " << i + 1 << ": "; cin >> a[i].heso;
        cout << "Nhap so mu da thuc " << i + 1 << ": "; cin >> a[i].somu;
    }
    cout << "Nhap so C: "; cin >> a[n-1].soc;
}
void ketquadathuc(donthuc a[], int n){
    int x, temp;
    cout << "Nhap x: "; cin >> x;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        temp = a[i].heso * pow(x, a[i].somu);
        s+=temp;
    }
    
    cout << "Ket qua la cau da thuc la: " << s + a[n-1].soc;
}
void nhap(tamgiac a[], int n){
    for (int i = 0; i < n; i++){
        cout << "Nhap canh a tam giac thu: " << i + 1 << ": "; cin >> a[i].a;
        cout << "Nhap canh b tam giac thu: " << i + 1 << ": "; cin >> a[i].b;
        cout << "Nhap canh c tam giac thu: " << i + 1 << ": "; cin >> a[i].c;
    
    }
}
float s(tamgiac a){
    float p = (a.a + a.b + a.c)/2;
    float s = sqrt(p*(p-a.a) * (p-a.b) * (p-a.c));
    return s;
}
void sMax(tamgiac a[], int n){
    int max = INT_MIN, sum = 0;
    for(int i = 0; i < n; i++){
        if(s(a[i]) > max) max = s(a[i]);
        sum+=s(a[i]);
    }
    cout << "Dien tich lon nhat trong cac tam gia la: " << fixed << setprecision(2) << max << endl;
    cout << "Tong cua cac tam giac la: " << sum;
}
