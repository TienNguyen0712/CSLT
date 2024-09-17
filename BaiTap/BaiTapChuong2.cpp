#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    //BAI TAP 2.1
    //CAU A
   /* int n; 
    cout<<"Nhap so n: "; cin>>n;
    int d = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            d++;
        if (d == 2)
            cout<<"La so nguyen to";
            else 
            cout<<"Khong la so nguyen to";
            */
    //CAU B
    /* 
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
    */
    //CAU C
    /*int sum = 0, c;
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
    */
   //CAU D
   /*int e, sum = 0;
   for (; n != 0; n = n/10)
   {
        e = n % 10;
        sum = sum*10 + e;
   }
   cout<<"So nghich dao cua n: "<<sum;
   */
   //CAU E
    /*int f,bientam,  sum = 0;
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
    */
   //CAU F
   /*
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
   */
  //CAU G
/*  int slxh;
  slxh = pow(n, 6);
  cout<<"So lan xuat hien la: "<<slxh;
  */
  //CAU H
/*    int tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich = tich*i;
    }
        cout<<"Trung binh nhan la: "<<round(pow(tich, 1.0/n) * 100)/100;
*/
    //BAI TAP 2.2
    //CAU A
    /*int n1, tich1 = 1, sum1 = 0; 
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

   return 0;

}