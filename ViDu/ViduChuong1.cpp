#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
//ViDu 1 Chuong 1
   int a, b;
    //Nhap chieu dai va chieu rong cua HCN
    cout<<"Nhap chieu dai: ";
    cin>>a;
    cout<<"Nhap chieu rong: ";
    cin>>b;
    //Tinh chu vi va dien tich HCN
    cout<<"Chu vi: "<<(a+b)*2;
    cout<<"\nDien tich: "<<a*b;
    cout<<"\nDuong cheo: "<<sqrt(a*a + b*b)*1.0;
//ViDu 2 Chuong 1
    int c;
    //Nhap so co ba chu so
    cout<<"Nhap so co 3 chu so: ";
    cin>>c;
    //Tinh tong cac so tao nen no
    cout<<"Tong la: "<< c/100 + c%100/10 + c%10;
//ViDu 3 Chuong 1
    int a1, a2, b1, b2, c1, c2;
    //Nhap cac toa do cua diem
    cout<<"Nhap toa do diem A: ";
    cin>>a1; cin>>a2;
    cout<<"Nhap toa do diem B: ";
    cin>>b1; cin>>b2;
    cout<<"Nhap toa do diem C: ";
    cin>>c1; cin>>c2;
    //Tinh cac canh cua tam giac
    //Canh AB
    int ab = sqrt((b1-a1)*(b1-a1) + (b2 - a2)*(b2-a2));
    //Canh AC
    int ac = sqrt((c1-a1)*(c1-a1) + (c2 - a2)*(c2-a2));
    //Canh BC
    int bc = sqrt((c1-b1)*(c1-b1) + (c2 - b2)*(c2-b2));
    //Tinh nua chu vi 
    int NuaChuVi = (ab + ac + bc)/2;
    //Tinh dien tich va Ban Kinh
    float DienTich = sqrt(NuaChuVi*(NuaChuVi-ab)*(NuaChuVi-ac)*(NuaChuVi-bc));
    float BanKinh = (ab*ac*bc)/45;
    //Tinh trong tam
    cout<<"Trong tam cua tam giac ABC: "<<(a1 + b1 + c1)/3 << " "<< (a2 + b2 + c2)/3 ;
    //Tinh dien tich duong tron noi tiep tam giac ABC
    cout<<"\nDien tich duong tron noi tiep tam giac ABC: "<<(BanKinh*BanKinh)*M_PI*1.1;
    //Tinh dien tich duong tron ngoai tiep tam giac ABC
    cout<<"\nDien tich duong tron ngoai tiep tam giac ABC: "<<((BanKinh/NuaChuVi)*(BanKinh/NuaChuVi))*M_PI*1.1;
   //ViDu 4 Chuong 1
   int x, y;
   cout<<"Nhap so a: ";
   cin>>x;
   cout<<"Nhap so b: ";
   cin>>y;
   if (x != 0){
    cout<<"Phuong trinh co nghiem: "<<-y/x;
   } else if (x == y)
   {
    cout<<"Phuong trinh co vo so nghiem!";
   } else {
    cout<<"Phuong trinh vo nghiem!";
   }
   //ViDu 5 Chuong 1
   int canh;
   cout<<"Nhap canh hinh vuong: "; cin>>canh;
   cout<<"Chu vi cua hinh vuong: "<<canh*4;
   cout<<"Dien tich cua hinh vuong: "<<canh*canh;
   cout<<"Duong cheo cua hinh vuong: "<<canh*sqrt(2);
   
    return 0;
}
