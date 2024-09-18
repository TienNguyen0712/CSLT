#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main (){
    //ViDu2
    int ngay, thang, nam;
    cout<<"Nhap thang: "; cin>>thang;
    cout<<"Nhap nam: "; cin>>nam;
    switch (thang)
    {
    case 1:
        ngay = 31;
        break;
    case 3:
        ngay = 31;
        break;
    case 5:
        ngay = 31;
        break;
    case 7:
        ngay = 31;
        break;
    case 8:
        ngay = 31;
        break;
    
    case 10:
        ngay = 31;
        break;
    case 12:
        ngay = 31;
        break;
    case 4:
        ngay = 30;
        break;
    case 6:
        ngay = 30;
        break;
    case 9:
        ngay = 30;
        break;
    case 11:
        ngay = 30;
        break;
    }
    if (thang == 2)
    {
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {ngay = 29;} else {ngay = 28;}
    }
    cout<<"Thang "<<thang<<" nam "<<nam<<" co "<<ngay<<" ngay";

    //ViDu3
    int count = 1;
    long n;
    cout<<"Nhap so n: "; cin>>n;
    for (long i = 1; i <= n/2; i++)
    {
        if (n % i)
        {
            count++;
        }
        
    }
    cout<<"So uoc la so duong: "<<count;

    //ViDu4
    long n;
    int sum = 0;
    cout<<"Nhap so n: "; cin>>n;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout<<"Tong cua so do la: "<<sum;
    
    //Q&A 
    //Tim UCLN, BCNN
    int a, b, t, ucln, bcnn;
    cout<<"Nhap so a: "; cin>>a;
    cout<<"Nhap so b: "; cin>>b;
    a > b ? t = a : t = b;
    for (int i = 1; i <= t; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ucln = i;
        }
        
    }
    bcnn = (a*b)/ucln;
    cout<<"UCLN"<<"("<<a<<","<<b<<")"<<": "<<ucln;
    cout<<"\nBCNN"<<"("<<a<<","<<b<<")"<<": "<<bcnn;
    
    int a1, b1, c, d, t, ucln;
    cout<<"Nhap so a: "; cin>>a1;
    cout<<"Nhap so b: "; cin>>b1;
    cout<<"Nhap so c: "; cin>>c;
    cout<<"Nhap so d: "; cin>>d;
    int tu = a1*d + b1*c;
    int mau = b1*d;
    tu > mau ? t = tu : t = mau;
    for (int i = 1; i <= t; i++)
    {
        if (tu % i == 0 && mau % i == 0)
        {
            ucln = i;
        }
    }
    cout<<a1<<"/"<<b1<<" + "<<c<<"/"<<d<<"= "<<(tu/ucln)<<"/"<<(mau/ucln);
    
   long n;
   int sum = 0, bien;
   do {
    cout<<"Nhap n: "; cin>>n; sum = sum + n; 
   } while (n != 0);
   cout<<"Tong cac so do la: "<<sum;
  //ViDu5
  int pass = 1111;
  int matkhau;
  do {
    cout<<"Nhap pass: "; cin>>matkhau;
    if (matkhau != pass)
    {
        cout<<"Ban nhap lai\n";
    } else {
        cout<<"Ban nhap dung\n";
        cout<<"Mat khau la: "<<pass;
    }
  } while (matkhau != pass);
    //Q1 Nhap 3 canh tam giac tinh P va S
    int a, b, c;
    cout<<"Nhap canh 1: "; cin>>a;
    cout<<"Nhap canh 2: "; cin>>b;
    cout<<"Nhap canh 3: "; cin>>c;
    if (a > 0 && b > 0 && c > 0)
    {
        if (a + b > c && b + c > a && c + a > b)
        {
            int p = (a+b+c)/2;
            cout<<"\nChu vi la: "<<p*2;
            cout<<"\nDien tich: "<<sqrt(p*(p-a)*(p-b)*(p-c));
        } else {
        cout<<"Khong phai tam giac";
        } 
    }
   //Keo, bua, bao
   // a = 97, b = 104, k = 107;
   char ch;
   char ch1 = 'k', ch2 = 'b', char3 = 'a';
    cout<<"Nhap keo, bua, bao: "; cin>>ch;
   switch (int(ch))
   {
   case 107:
    cout<<"b"<<" Thua";
    break;
   case 97:
    cout<<"k"<<" Thua";
    break;
   case 104:
    cout<<"a"<<" Thua";
    break;
   }
    return 0;
}