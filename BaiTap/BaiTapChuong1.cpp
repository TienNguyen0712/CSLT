#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //BAI TAP 1.1
    float a, b, c;
    cout<<"Nhap so a: ";
    cin>>a;
    cout<<"Nhap so b: ";
    cin>>b;
    cout<<"Nhap so c: ";
    cin>>c;
    float delta = b*b - 4*a*c;
    if (a == 0)
    {
        cout<<"Khong phai phuong trinh bac 2 !!!";
    } else {
        if (delta == 0){
            cout<<"Phuong trinh co nghiem kep !!!";
            cout <<"\nNghiem kep la: +-"<<-b/2*a;
        } else if (delta > 0){
            cout<<"Phuong trinh co 2 nghiem phan biet !!!";
            cout<<"\nNghiem x1: "<<(-b-sqrt(delta))/2*a;
            cout<<"\nNghiem x2: "<<(-b+sqrt(delta))/2*a;
        } else {
            cout<<"Phuong trinh vo nghiem !!!";
        }
    }

   //BAI TAP 1.2
    int a1, b1, c1, a2, b2, c2;
    cout<<"Nhap he so a: ";
    cin>>a1;
    cout<<"Nhap he so b: ";
    cin>>b1;
    cout<<"Nhap he so c: ";
    cin>>c1;
    cout<<"Nhap he so a': ";
    cin>>a2;
    cout<<"Nhap he so b': ";
    cin>>b2;
    cout<<"Nhap he so c': ";
    cin>>c2;
    //Phuong phap cong dai so
        if ((a1 == 0) && (b1 == 0) || (a2 == 0) && (b2 == 0))
    {
        cout<<"Khong phai he phuong trinh!!";
    } else {
        if (((b1*a2) - (b2*a1) == 0) && ((c1*a2) - (c2*a1) == 0))
        {
            cout<<"Phuong trinh co vo so nghiem!!!";
        } else if (((b1*a2) - (b2*a1)) != 0)
        {
            int nghiem_y1 = ((c1*a2) - (c2*a1))/((b1*a2) - (b2*a1));
            int nghiem_x1 = (c1 - b1*nghiem_y1)/a1;
            cout<<"Nghiem: "<<"("<<nghiem_x1<<";"<<nghiem_y1<<")";
        } else {
            cout<<"Phuong trinh vo nghiem!!";
        }
    } 
    //Phuong phap the 
    int d = (-a2*b1 + b2*a1)/a1;
    int d1 = (a2*c1)/a1;
    int d2 = (c2*a1)/a1;
    if (d == 0)
    {
        cout<<"He phuong trinh vo nghiem!!";
    } else if (d != 0)
    {
        cout<<"Nghiem: "<<"("<<(c1 - b1*((d2 - d1)/d))/a1<<";"<<(d2 - d1)/d<<")";
        
    } else {
        cout<<"He phuong trinh co vo so nghiem!!!";
    }

    //BAI TAP 1.3
    int x, y, z;
    cout<<"Nhap so x: ";
    cin>>x;
    cout<<"Nhap so y: ";
    cin>>y;
    cout<<"Nhap so z: ";
    cin>>z;
    cout<<"Day chua sap xep: "<<x<<y<<z;
    if ((x == y) || (y == z) || (x == z))
    {
        cout<<"Khong the sap xep!!";
    } else {
        if((x < y) && (x < z) && (y < z)){
            cout<<"\nDay sau khi sap xep: "<<x<<y<<z;
        } else if ((x < y) && (x < z) && (y > z))
        {
            cout<<"\nDay sau khi sap xep: "<<x<<z<<y;
        } else if ((x < y) && (x > z) && (y > z))
        {
            cout<<"\nDay sau khi sap xep: "<<z<<x<<y;
        }else if ((x > y) && (x > z) && (y > z))
        {
            cout<<"\nDay sau khi sap xep: "<<z<<y<<x;
        }else if ((x > y) && (x > z) && (y < z))
        {
            cout<<"\nDay sau khi sap xep: "<<y<<z<<x;
        }else if ((x < y) && (x < z) && (y < z))
        {
            cout<<"\nDay sau khi sap xep: "<<y<<x<<z;
        }
    }

    //BAI TAP 1.4
    int a, b, c, d, e, f;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    cout<<"Nhap so a: "; cin>>a;
    cout<<"Nhap so b: "; cin>>b;
    cout<<"Nhap so c: "; cin>>c;
    cout<<"Nhap so d: "; cin>>d;
    cout<<"Nhap so e: "; cin>>e;
    cout<<"Nhap so f: "; cin>>f;
    int arr[6] = { a, b, c, d, e, f };
    for (int i = 0; i < 6; i++)
    {
        if ( arr[i] == 0)
        {
            count++;
        } else {
            arr[i] < 0 ? count1++ : count2++;
        }
        
    }
    cout<<"Co "<<count<<" so bang 0";
    cout<<"\nCo "<<count2<<" so duong";
    cout<<"\nCo "<<count1<<" so am\n";

   //BAI TAP 1.5
   //CAU A
    int a1, b1, c1, d1;
    cout<<"Nhap so nguyen thu 1: "; cin>>a1;
    cout<<"Nhap so nguyen thu 2: "; cin>>b1;
    cout<<"Nhap so nguyen thu 3: "; cin>>c1;
    cout<<"Nhap so nguyen thu 4: "; cin>>d1;
    //Gia tri nho nhat
    int min = a1;
    if (b1 < min)
    {
        min = b1;
    }
    
    if (c1 < min)
    {
        min = c1;
    }
    
    if (d1 < min)
    {
        min = d1;
    }
    //Gia tri lon nhat
    
    int max = a1;
    if (b1 > max)
    {
        max = b1;
    }
    
    if (c1 > max)
    {
        max = c1;
    }
    
    if (d1 > max)
    {
        max = d1;
    }
    cout<<"Gia tri nho nhat: "<<min;
    cout<<"\nGia tri lon nhat: "<<max;
    //CAU B
    int temp1;
    cout<<"\nDay chua sap xep: "<<a1<<b1<<c1<<d1;
    if (a1 > b1){ temp1 = a1 ; a1 = b1 ; b1 = temp1;}
    if (a1 > c1){ temp1 = a1 ; a1 = c1 ; c1 = temp1;}
    if (a1 > d1){ temp1 = a1 ; a1 = d1 ; d1 = temp1;}
    if (b1 > d1){ temp1 = b1 ; b1 = d1 ; d1 = temp1;}
    if (b1 > c1){ temp1 = b1 ; b1 = c1 ; c1 = temp1;}
    if (c1 > d1){ temp1 = c1 ; c1 = d1 ; d1 = temp1;}    
    cout<<"\nDay sau khi sap xep: "<<a1<<b1<<c1<<d1<<"\n";
    //CAU C
    if (a1 == b1 == c1 == d1)
    {
        cout<<"Co 1 gia tri khac nhau\n";
    } else if (a1 != b1 && b1 != c1 && c1 != d1 && d1 != a1)
    {
        cout<<"Co 4 gia tri khac nhau\n";
    }
    else if (a1 == b1 && b1 != c1 && d1 != a1 || b1 == c1 && c1 != d1 && a1 != b1 || c1 == d1 && c1 != b1 && d1 != a1 || d1 == a1 && d1 != b1 && a1 != c1){
        cout<<"Co 3 gia tri khac nhau\n";
    }
    else {
        cout<<"Co 2 gia tri khac nhau\n";
    }
    //CAU D
    int min1 = d1 - c1;
    if (c1 - b1 < min1) {min1 = c1 - b1;}
    if (d1 - a1 < min1) {min1 = d1 - a1;}
    if (b1 - a1 < min1) {min1 = b1 - a1;}
    if (d1 - b1 < min1) {min1 = b1 - b1;}
    if (d1 - a1 < min1) {min1 = d1 - a1;}
    if (c1 - a1 < min1) {min1 = c1 - a1;}
    cout<<"Khoang cach gan nhat la: "<<min1<<"\n";

    //BAI TAP 1.6
    int x, y, z;
    cout<<"Nhap so do canh thu 1: "; cin>>x;
    cout<<"Nhap so do canh thu 2: "; cin>>y;
    cout<<"Nhap so do canh thu 3: "; cin>>z;
    if (x + y > z && x + z > y && y + z > x)
    {
        cout<<"Day la tam giac\n";
        if (x == y == z)
        {
            cout<<"Day la tam giac deu";
        } else if (x*x + y*y == z*z || x*x + z*z == y*y || z*z + y*y == x*x )
        {
            cout<<"Day la tam giac vuong";
        } else if (x == y != z || x == z != y || y == z != x)
        {
            cout<<"Day la tam giac can";
        } else {
            cout<<"Day la tam giac thuong";
        }
    } else {
        cout<<"Day khong la tam giac";
    }
    
    return 0;
}