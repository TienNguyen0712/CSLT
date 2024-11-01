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
struct hoso {
    long manhanvien, luongcb, thuong, thuclanh;
    char hovaten[50];
    int ngaysinh, thangsinh, namsinh;
};

struct thisinh
{
    char sobaodanh[50], hovaten[50];
    float ngoaingu, moncb, moncs, tongdiem;
};
struct phanso
{
    int tu, mau;
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
void nhap(hoso nv[], int &n);
void xepMin(hoso nv[], int n);
void xepMax(hoso nv[], int n);
void xuat(hoso nv[], int n);
void nhap(thisinh a[], int n);
void diemthinhohon5(thisinh a[], int n);
void tatcamonthilonhonhoacbang5(thisinh a[], int n);
void tong3monMax(thisinh a[], int n);
void timsobaodanh(thisinh a[], int n);
void sapxeptangdansobaodanh(thisinh a[], int n);
void xuatmang(thisinh a[], int n);
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
    const int maxm = 100;
    const int maxn = 100;
    phanso a[maxm][maxn];

    //Nhap phan so
    int m, n;
    cout << "Nhap so hang: "; cin >> m;
    cout << "Nhap so cot: "; cin >> n;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap tu va mau [" << i + 1 << ";" << j + 1 << "]: "; cin >> a[i][j].tu >> a[i][j].mau;    
        }
    }
    //CAU A
    int max = INT_MIN, i_max, j_max;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {   
            if((a[i][j].tu/a[i][j].mau) > max) i_max = i; j_max = j;        
        }
    }
    cout << "Phan so lon nhat cua Mang o vi tri [" << i_max << ";" << j_max << "]" << endl;
    //CAU B
    int dem = 0;
    for(int i = 0; i < m; i++){
    for (int j = 0; j < n; j++)
        {   
            if(ucln(a[i][j].tu,a[i][j].mau) == 1) dem++;        
        }
    }
    cout << "Co " << dem << " phan so toi gian";
    //CAU C
        for(int i = 0; i < m; i++){
    for (int j = 0; j < n; j++)
        {   
            if(sosanh(a[i][j], a[i + 1][j])) swap(a[i][j], a[i + 1][j]);        
            if(sosanh(a[i][j], a[i][j + 1])) swap(a[i][j], a[i][j + 1]);     
        }
    }
    //BAI TAP 5.6
    //CAU A
    int n;
    cout << "Nhap so nhan vien: "; cin >> n;
    hoso hs[n];
    nhap(hs, n);
    //CAU B
    int n;
    cout << "Nhap so nhan vien: "; cin >> n;
    hoso hs[n];
    nhap(hs, n);
    xepMin(hs, n);
    xuat(hs, n);  
    //CAU C
    int n;
    cout << "Nhap so nhan vien: "; cin >> n;
    hoso hs[n];
    nhap(hs, n);
    xepMax(hs, n);
    xuat(hs, n);  
    //BAI TAP 5.7
    int n;
    cout << "Nhap so thi sinh: "; cin >> n;
    thisinh a[n];
    nhap(a, n);
    //CAU A
    diemthinhohon5(a, n);
    //CAU B
    tatcamonthilonhonhoacbang5(a, n);
    //CAU C
    tong3monMax(a, n);
    //CAU D
    timsobaodanh(a, n);
    //CAU E
    sapxeptangdansobaodanh(a, n);
    xuatmang(a, n);
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
            if(sosanhlonhon(a[i], a[j]))
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
void nhap(hoso nv[], int &n){
    for(int i = 0; i < n; i++){    
    cout << "Nhap Ma nhan vien: "; cin >> nv[i].manhanvien;
    cout << "Nhap Ho va ten: "; fflush(stdin);gets(nv[i].hovaten);
    cout << "Nhap ngay thang nam sinh: "; cin >> nv[i].ngaysinh >> nv[i].thangsinh >> nv[i].namsinh;
    cout << "Nhap luong co ban: "; cin >> nv[i].luongcb;
    cout << "Nhap thuong: "; cin >> nv[i].thuong;
    nv[i].thuclanh = nv[i].thuong + nv[i].luongcb;
    }
}
void swap(hoso &nv1, hoso &nv2){
    hoso temp  = nv1;
    nv1 = nv2;
    nv2 = temp;
}
void xepMin(hoso nv[], int n){
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        if(nv[i].thuclanh < nv[j].thuclanh)
            swap(nv[i], nv[j]);
}
void xuat(hoso nv[], int n){
    cout << "------------------------------------------" << endl;
    for(int i = 0; i < n; i++){
        nv[i].thuclanh = nv[i].luongcb + nv[i].thuong;
    cout << "- " << "Ma nhan vien: " << nv[i].manhanvien << endl;
        cout << "- " << "Ho va ten: " << nv[i].hovaten << endl;
        cout << "- " << "Ngay sinh thang nam sinh: " << nv[i].ngaysinh << "/"  << nv[i].thangsinh << "/" << nv[i].namsinh << endl;
        cout << "- " << "Luong co ban: " << nv[i].luongcb << endl;
        cout << "- " << "Thuong: " << nv[i].thuong << endl;
        cout << "- " << "Thuc lanh: " << nv[i].thuclanh << endl;
    }
}
void xepMax(hoso nv[], int n){
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        if(nv[i].thuclanh > nv[j].thuclanh)
            swap(nv[i], nv[j]);
}
void nhap(thisinh a[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap so bao danh: "; gets(a[i].sobaodanh);
        cout << "Nhap ho va ten: "; fflush(stdin);gets(a[i].hovaten);
        cout << "Nhap diem mon ngoai ngu: : "; cin >> a[i].ngoaingu;
        cout << "Nhap diem mon co ban: "; cin >> a[i].moncb;
        cout << "Nhap diem mon co so: "; cin >> a[i].moncs;
    }
}
void xuat(thisinh a){
    a.tongdiem = a.moncb + a.moncs + a.ngoaingu;
    cout << "So bao danh: " << a.sobaodanh;
    cout << "Ho va ten: " << a.hovaten;
    cout << "Diem mon ngoai ngu: : " << a.ngoaingu;
    cout << "Diem mon co ban: " << a.moncb;
    cout << "Diem mon co so: " << a.moncs;
    cout << "Tong diem: " << a.tongdiem;
}
void diemthinhohon5(thisinh a[], int n){
    for(int i =0 ; i < n; i++)
    if(a[i].moncb < 5 || a[i].moncs < 5 || a[i].ngoaingu < 5)
        xuat(a[i]);
}
void tatcamonthilonhonhoacbang5(thisinh a[], int n){
    int d = 0;
    for(int i = 0; i < n; i++)
        (a[i].moncb >= 5 && a[i].moncs >= 5 && a[i].ngoaingu >= 5 && (a[i].moncb + a[i].moncb) >= 12){
            d++;
        }
    cout << "Co" << d << " thi sinh";
}
void tong3monMax(thisinh a[], int n){
    thisinh cao = a[0];
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        a[i].tongdiem = a[i].moncb + a[i].moncs + a[i].ngoaingu;
        if(a[i].tongdiem > max) max = a[i].tongdiem; cao = a[i];
    }
    cout << "Thi sinh co tong diem cao nhat: "; xuat(cao);
}
void timsobaodanh(thisinh a[], int n){
    char x[50];
    cout << "Nhap so bao danh muon tim kiem: "; gets(x);
    for (int i = 0; i < n; i++)
    {
        if(a[i].sobaodanh == x){
            xuat(a[i]);
        }
    }
}
void swap(thisinh &ts1, thisinh &ts2){
    thisinh t = ts1;
    ts1 = ts2;
    ts2 = t;
}
void sapxeptangdansobaodanh(thisinh a[], int n){
    for (int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    if((int)a[i].sobaodanh > (int)a[j].sobaodanh)
    swap(a[i], a[j]);
}
void xuatmang(thisinh a[], int n){
    for (int i = 0; i < n; i++)
    {   
        a[i].tongdiem = a[i].moncb + a[i].moncs + a[i].ngoaingu;
        cout << "So bao danh: " << a[i].sobaodanh;
        cout << "Ho va ten: " << a[i].hovaten;
        cout << "Diem mon ngoai ngu: : " << a[i].ngoaingu;
        cout << "Diem mon co ban: " << a[i].moncb;
        cout << "Diem mon co so: " << a[i].moncs;
        cout << "Tong diem: " << a[i].tongdiem;
    }
}
int ucln(int a, int b){
    if(b == 0) return a;
    return ucln(b , a % b);
}
void swap(phanso &a, phanso &b){
    phanso t = a;
    a = b;
    b = t;
}
bool sosanh(phanso ps1, phanso ps2){
    return ps1.tu * ps2.mau > ps2.tu * ps1.mau;
}
