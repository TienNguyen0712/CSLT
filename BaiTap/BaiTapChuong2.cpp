#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int Rand(int a, int b){
    return a + (int)(rand()*(b - a + 1.0)/(1.0 + RAND_MAX));
}

int main(){
    //BAI TAP 2.1
    //CAU A
    int n; 
    cout<<"Nhap so n: "; cin>>n;
    int d = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            d++;
        if (d == 2)
            cout<<"La so nguyen to";
            else 
            cout<<"Khong la so nguyen to";
    //CAU B
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0){
            sum = sum + i;
        }
    }
    if (sum == n){
        cout<<"La so hoan chinh";
    } else {
        cout<<"Khong la so hoan chinh";
    }
    //CAU C
    int sum = 0, c;
    if (n < 10)
    {
        cout<<"La so doi xung";
    }
    for (; n != 0; n = n/10)
    {
        c = n % 10;
        sum = sum*10 + c;
    }
    if (sum == i)
    {
        cout<<"La so doi xung";
    } else {
        cout<<"Khong la so doi xung";
    }
   //CAU D
   int e, sum = 0;
   for (; n != 0; n = n/10)
   {
        e = n % 10;
        sum = sum*10 + e;
   }
   cout<<"So nghich dao cua n: "<<sum;
   //CAU E
    int f,bientam,  sum = 0;
    bientam = n;
    for (; n != 0; n = n / 10)
    {
        f = n % 10;
        sum  = sum + f * f * f;
    }
    
    if (sum == bientam)
    {
        cout<<"La so Armstrong";
    } else {
        cout<<"Khong la so Armstrong";
    }
   //CAU F
   int d = 0;
   double bien = pow(n, 2) - 1;
   for (int i = 1; i < n; i++)
   {
        if (int(bien) % i == 0)
        {
            d++;
        }   
   }

   if (d == 2)
   {
    cout<<"Khong la so nguyen to Mersenne";
   } else {
    cout<<"La so nguyen to Mersenne";
   }
  //CAU G
  int slxh;
  slxh = pow(n, 6);
  cout<<"So lan xuat hien la: "<<slxh;
  //CAU H
    int tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich = tich*i;
    }
        cout<<"Trung binh nhan la: "<<round(pow(tich, 1.0/n) * 100)/100;
    //CAU H
        int a, b,  cout1 = 0, cout2 = 0, cout3 = 0, cout4 = 0, cout5 = 0, cout6 = 0;
    cout<<"Nhap so lan tung xuc xac: "; cin>>a;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < a; i++)
    {   
        b = Rand(1,6);
        switch (b)
        {
        case 1:
            cout1++;
        case 2: 
            cout2++;
        
        case 3:
            cout3++;
        case 4: 
            cout4++;
        case 5:
            cout5++;
        case 6: 
            cout6++;
        };
    }
    cout<<"So lan xuat hien mat 1: "<<cout1;
    cout<<"\nSo lan xuat hien mat 2: "<<cout2;
    cout<<"\nSo lan xuat hien mat 3: "<<cout3;
    cout<<"\nSo lan xuat hien mat 4: "<<cout4;
    cout<<"\nSo lan xuat hien mat 5: "<<cout5;
    cout<<"\nSo lan xuat hien mat 6: "<<cout6;

    //BAI TAP 2.2
    //CAU A
    int n1, tich1 = 1, sum1 = 0; 
    cout<<"Nhap vao so n: "; cin>>n1;
    for (int i = 1; i <= n1; i++)
    {
        tich1 = tich1 * i;
        sum1 = sum1 + tich1;
    }
        cout<<sum1; */
    //CAU B
    int n1, tich2 = 1, sum2 = 0;
    cout<<"Nhap vao so n: "; cin>>n1;
    for (int i = 1; i <= n1; i++)
    {
        tich2 = tich2 * i;
        for (int k = i; k < i*2; i++)
        {
            sum2 = sum2 + tich2;
        }
        
    }
    cout<<sum2;
    //BAI TAP 2.3
    int m, n = 1, sum = 0;
    cout<<"Nhap m: "; cin>>m;
    while (sum < m)
    {
        sum = sum + n;
        n++;
    }
    cout<<"n nho nhat sao cho tong be hon m la: "<<n;
    //BAI TAP 2.4
   //Sửa code thêm
   int n, bien1, bien2, bien3;
   cout<<"Nhap n: "; cin>>n;
   for ( int x = 1; x < sqrt(n); ++x)
   {
    for ( int y = x + 1; y < sqrt(n - x*x); ++y)
    {
        int z = x*x + y*y; 
        if ( z <= n)
        {
            bien1 = x; bien2 = y; bien3 = z;
            cout<<"x: "<<bien1<<"\ny: "<<bien2<<"\nz: "<<bien3;
        }   
    }
   }
   
  //BAI TAP 2.5
  int d, m, y;
  cout<<"Nhap ngay: "; cin>>d;
  cout<<"Nhap thang: "; cin>>m;
  cout<<"Nhap nam: "; cin>>y;
  if (d < 32 && m < 13 && y > 0)
  {     
        cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le";
        cout<<"\n"<<d-1<<"/"<<m<<"/"<<y<<" la ngay ke truoc ngay "<<d<<"/"<<m<<"/"<<y;
        cout<<"\n"<<d+1<<"/"<<m<<"/"<<y<<" la ngay ke sau ngay "<<d<<"/"<<m<<"/"<<y;
  } else {
        cout<<d<<"/"<<m<<"/"<<y<<" khong la ngay hop le";
        }

  //BAI TAP 2.6
  //CAU A
    int ngay, thang, nam, sum = 0, songay;
    cout<<"Nhap ngay: "; cin>>ngay;
    cout<<"Nhap thang: "; cin>>thang;
    cout<<"Nhap nam: "; cin>>nam;
    for (int i = 1; i < thang; i++)
    {   
        switch (i)
        {
        case 1:
            songay = 31;
            break;
        case 3:
            songay = 31;
            break;
        case 4:
            songay = 30;
            break;
        case 5:
            songay = 31;
            break;
        case 6:
            songay = 30;
            break;
        case 7:
            songay = 31;
            break;
        case 8:
            songay = 31;
            break;
        case 9:
            songay = 30;
            break;
        case 10:
            songay = 31;
            break;
        case 11:
            songay = 30;
            break;
        case 12:
            songay = 31;
        case 2:
            nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0) ? songay = 28 : songay = 29;
        }
        sum = sum + songay;
    }
        cout<<ngay<<"/"<<thang<<"/"<<nam<<" la ngay thu "<<sum + ngay<<" trong nam";
    //CAU B
    int ngaysinhcongdannam, thangsinhcongdannam, namsinhcongdannam;
    cout<<"Nhap ngay sinh cong dan nam: "; cin>>ngaysinhcongdannam;
    cout<<"Nhap thang sinh cong dan nam: "; cin>>thangsinhcongdannam;
    cout<<"Nhap nam sinh cong dan nam: "; cin>>namsinhcongdannam;
    cout<<"Ngay bat dau den tuoi nghi huu cua cong dan nam: "<<ngaysinhcongdannam<<"/"<<thangsinhcongdannam<<"/"<<namsinhcongdannam+60;
    //CAU C
    int ngaysinhcongdannu, thangsinhcongdannu, namsinhcongdannu;
    cout<<"Nhap ngay sinh cong dan nu: "; cin>>ngaysinhcongdannu;
    cout<<"Nhap thang sinh cong dan nu: "; cin>>thangsinhcongdannu;
    cout<<"Nhap nam sinh cong dan nu: "; cin>>namsinhcongdannu;
    cout<<"Ngay bat dau den tuoi nghi huu cua cong dan nu: "<<ngaysinhcongdannu<<"/"<<thangsinhcongdannu<<"/"<<namsinhcongdannu+55;
   //BAI TAP 2.7 
   //CAU A
   int sothang;
   float laisuatvay;
   double sotien;
   cout<<"Nhap so tien muon vay: "; cin>>sotien;
   cout<<"Nhap so thang se tra: "; cin>>sothang;
   cout<<"Nhap lai suat vay trong 1 nam: "; cin>>laisuatvay;
   laisuatvay  = laisuatvay/100;
   int tongtien = sotien + (sotien * laisuatvay * sothang/12);
   cout<<tongtien;

   //CAU B SUA CODE THÊM
   int sothang;
   float laisuatvay;
   double sotien;
   cout<<"Nhap so tien muon vay: "; cin>>sotien;
   cout<<"Nhap so thang se tra: "; cin>>sothang;
   cout<<"Nhap lai suat vay trong 1 nam: "; cin>>laisuatvay;
   return 0;
}
