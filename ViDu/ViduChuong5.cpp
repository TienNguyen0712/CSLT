#include <bits/stdc++.h>

using namespace std;

struct phanso
{
    int tu;
    int mau;
};
struct sophuc
{
    int trc;
    int sau;
};
struct ngaysinh
{
    int ngay;
    int thang;
    int nam;
};

struct hoso
{
    char hovaten[50];
    ngaysinh ns;
    long luongcoban;
    long thuong;
    long thuclanh;
};
struct point
{
    int x;
    int y;
};
void nhapsp(sophuc &sp);
void xuatsp(sophuc &sp);
sophuc tongsp(sophuc sp1, sophuc sp2);
sophuc trusp(sophuc sp1, sophuc sp2);
sophuc nhansp(sophuc sp1, sophuc sp2);
sophuc chiasp(sophuc sp1, sophuc sp2);
void nhapps(phanso &ps);
void xuatps(phanso &ps);
phanso tongps(phanso ps1, phanso ps2); // Cach 1
phanso tongps(phanso ps1, phanso ps2, phanso &ps); // Cach 2
void tongps(phanso ps1, phanso ps2); //Cach 3
phanso hieups(phanso ps1, phanso ps2); //Cach 1
phanso hieups(phanso ps1, phanso ps2, phanso &ps); //Cach 2
void hieups(phanso ps1, phanso ps2); //Cach 3
phanso nhanps(phanso ps1, phanso ps2); //Cach 1
phanso nhanps(phanso ps1, phanso ps2, phanso &ps); //Cach 2
void nhanps(phanso ps1, phanso ps2); //Cach 3
phanso chiaps(phanso ps1, phanso ps2); //Cach 1
phanso chiaps(phanso ps1, phanso ps2, phanso &ps); //Cach 2
void chiaps(phanso ps1, phanso ps2); //Cach 3
void nhap(hoso a[], int n);
void xuat(hoso a[], int n);
void swap(hoso &hs1, hoso &hs2);
void sapxep(hoso a[], int n);
void nhap(point a[], int &n);
void xuly(point a[], int n);
void capdiemgannhaunhat(point a[], int n);
int main(){
    //Vidu1
    phanso ps1, ps2, ps;
    nhapps(ps1);
    nhapps(ps2);
    ps = tongps(ps1, ps2); //Cach 1
    phanso psA = tongps(ps1, ps2, ps); //Cach 2
    xuatps(ps);
    xuatps(psA);
    tongps(ps1, ps2); //Cach 3
    ps = hieups(ps1, ps2); //Cach 1
    phanso psA = hieups(ps1, ps2, ps); //Cach 2
    xuatps(ps);
    xuatps(psA);
    hieups(ps1, ps2); //Cach 3
    ps = nhanps(ps1, ps2); //Cach 1
    phanso psA = nhanps(ps1, ps2, ps); //Cach 2
    xuatps(ps);
    xuatps(psA);
    nhanps(ps1, ps2); //Cach 3
    ps = chiaps(ps1, ps2); //Cach 1
    phanso psA = chiaps(ps1, ps2, ps); //Cach 2
    xuatps(ps);
    xuatps(psA);
    chiaps(ps1, ps2); //Cach 3
    sophuc sp1, sp2, sp, sp_h, sp_t, sp_th;
    nhapsp(sp1);
    nhapsp(sp2);
    sp = tongsp(sp1, sp2);
    sp_h = trusp(sp1, sp2);
    sp_t = nhansp(sp1, sp2);
    sp_th = chiasp(sp1, sp2);
    xuatsp(sp); 
    xuatsp(sp_h); 
    xuatsp(sp_t); 
    xuatsp(sp_th); 
    //Vidu2
    int n;
    cout << "Nhap so nhan vien muon lam ho so: "; cin >> n;
    hoso nv[n];
    nhap(nv, n);
    cout << endl;
    sapxep(nv, n);
    xuat(nv, n);
    //Vidu3
    int n;
    cout << "Nhap so diem muon tao: "; cin >> n;
    point diem[n];
    nhap(diem, n);
    xuly(diem, n);
    capdiemgannhaunhat(diem, n);
    return 0;
}

void nhapps(phanso &ps){
    cout << "Nhap phan tu: "; cin >> ps.tu;
    cout << "Nhap phan mau:  "; cin >> ps.mau;
}
int ucln(int a, int b){
    if (b == 0) return a;
    return ucln(b, a & b);
}
void xuatps(phanso &ps){
    int uc = ucln(ps.tu, ps.mau);
    cout << "Ket qua la: " << ps.tu/uc << "/" << ps.mau/uc;
}
phanso tongps(phanso ps1, phanso ps2){
    phanso ps;
    ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
    return ps;
}
phanso tongps(phanso ps1, phanso ps2, phanso &ps){
    ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
}
void tongps(phanso ps1, phanso ps2){
    phanso ps;
    ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
    xuatps(ps);    
}
phanso hieups(phanso ps1, phanso ps2){
    phanso ps;
    ps.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
    return ps;
}
phanso hieups(phanso ps1, phanso ps2, phanso &ps){
    ps.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
}
void hieups(phanso ps1, phanso ps2){
    phanso ps;
    ps.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    ps.mau = ps1.mau * ps2.mau;
    xuatps(ps)
}
phanso nhanps(phanso ps1, phanso ps2){
    phanso ps; 
    ps.tu = ps1.tu * ps2.tu;
    ps.mau = ps1.mau * ps2.mau;
    return ps;
}
phanso nhanps(phanso ps1, phanso ps2, phanso &ps){
    ps.tu = ps1.tu * ps2.tu;
    ps.mau = ps1.mau * ps2.mau;

}
void nhanps(phanso ps1, phanso ps2){
    phanso ps; 
    ps.tu = ps1.tu * ps2.tu;
    ps.mau = ps1.mau * ps2.mau;
    xuatps(ps);
}
phanso chiaps(phanso ps1, phanso ps2){
    phanso ps;
    ps.tu = ps1.tu * ps2.mau;
    ps.mau = ps1.mau * ps2.tu;
    return ps;
}
phanso chiaps(phanso ps1, phanso ps2, phanso &ps){
    ps.tu = ps1.tu * ps2.mau;
    ps.mau = ps1.mau * ps2.tu;
}
void chiaps(phanso ps1, phanso ps2){
    phanso ps;
    ps.tu = ps1.tu * ps2.mau;
    ps.mau = ps1.mau * ps2.tu;
    xuatps(ps);
}

void nhapsp(sophuc &sp){
    cout << "Nhap so truoc: "; cin >> sp.trc;
    cout << "Nhap so sau: "; cin >> sp.sau;
}
void xuatsp(sophuc &sp){
    cout << "Ket qua la: " << sp.trc << " " << sp.sau;
}
sophuc tongsp(sophuc sp1, sophuc sp2){
    sophuc sp;
    sp.trc = sp1.trc + sp2.trc;
    sp.sau = sp1.sau + sp2.sau;
    return sp;
}
sophuc truesp(sophuc sp1, sophuc sp2){
    sophuc sp;
    sp.trc = sp1.trc - sp2.trc;
    sp.sau = sp1.sau - sp2.sau;
    return sp;
}sophuc nhansp(sophuc sp1, sophuc sp2){
    sophuc sp;
    sp.trc = sp1.trc * sp2.trc;
    sp.sau = sp1.sau * sp2.sau;
    return sp;
}sophuc chiasp(sophuc sp1, sophuc sp2){
    sophuc sp;
    sp.trc = sp1.trc / sp2.trc;
    sp.sau = sp1.sau / sp2.sau;
    return sp;
}
void nhap(hoso a[], int n){
    for (int i = 0; i < n; i++)
    {   cout << "-------Nhap du lieu cua nhan vien thu " << i + 1 << "--------------" << endl; 
        cout << "Nhap ho va ten: "; fflush(stdin);gets(a[i].hovaten);
        cout << "Nhap ngay thang nam: "; cin >> a[i].ns.ngay >> a[i].ns.thang >> a[i].ns.nam;
        cout << "Nhap luong co ban: "; cin >> a[i].luongcoban;
        cout << "Nhap tien thuong: "; cin >> a[i].thuong;
    }
}
void xuat(hoso a[], int n){
    for(int i = 0; i < n; i++){
        cout << "--------Xuat du lieu cua nhan vien thu " << i + 1 <<"-----------------" << endl;
        cout << "Ho va ten: " << a[i].hovaten << endl;
        cout << "Ngay thang nam: " << a[i].ns.ngay << "/" << a[i].ns.thang << "/" << a[i].ns.nam << endl;
        cout << "Luong co ban: " << a[i].luongcoban << endl;
        cout << "Tien thuong: " << a[i].thuong << endl;
        a[i].thuclanh = a[i].luongcoban + a[i].thuong;
        cout << "Thuc lanh: " <<  a[i].thuclanh << endl;
    }
}
void swap(hoso &hs1, hoso &hs2){
    hoso t = hs1;
        hs1 = hs2;
        hs2 = t;
}
void sapxep(hoso a[], int n){
    for(int i = 0 ; i < n; i++)
    for(int j = i + 1; j < n; j++)
            if (a[i].thuclanh < a[j].thuclanh)
                swap(a[i], a[j]);
}
void nhap(point a[], int &n){
    for(int i = 0; i < n; i++){
        cout << "Nhap toa do diem thu " << i + 1 << endl;
        cin >> a[i].x >> a[i].y;
    }
}
void xuly(point a[], int n){
    int dem = 0, d = 0;
    for(int i = 0; i < n; i++){
        if(a[i].x > 0 && a[i].y > 0 || a[i].x < 0 && a[i].y > 0 || a[i].x < 0 && a[i].y < 0 || a[i].x > 0 && a[i].y < 0){
            dem++;
        }
        if(a[i].x == 0 || a[i].y == 0){
            d++;
        }
    }
    cout << "Co " << dem << " diem nam o goc phan tu" << endl;
    cout << "Co " << d << " diem nam tren truc toa do" << endl;
}
void capdiemgannhaunhat(point a[], int n){
    if( n == 2 ){
        cout << "( " << a[0].x << ";" << a[0].y << " )" << " va " << "( " << a[1].x << ";" << a[1].y << " )" << endl;    
    }  
    int min = sqrt(pow(a[1].x - a[0].x, 2) + pow(a[1].y - a[0].y, 2));  
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(sqrt(pow(a[j].x - a[i].x, 2) + pow(a[j].y - a[i].y, 2)) < min){
                min = sqrt(pow(a[j].x - a[i].x, 2) + pow(a[j].y - a[i].y, 2));
                cout << "( " << a[i].x << ";" << a[i].y << " )" << " va " << "( " << a[j].x << ";" << a[j].y << " )" << endl;    
            }
        }
    }
};

