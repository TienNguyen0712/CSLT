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
