#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>

using namespace std;
long long giathua(int a){
    if(a == 0 || a == 1 ) {
        return 1;
    } else {
        return a * giathua(a-1);
    }
}
long long C(int a, int b){
    return giathua(a) / (giathua(b) - giathua(a-b));
}

int dq1(int n){
    if (n < 3) return 1;
    vector<int>x(n + 1);
    x{1} = 1;
    x[2] = 1;
    for (int i = 3; i < n; i++)
    {
        x[i] = x[i -1] + (i-1) * x[i -2];
    }
    return x[n];
}
int dq(int a){
    if(a < 3){
        return 1;
    } return dq(a-1) + (a-1)*dq(a-2);
}
int tinhtong(int a){
    int sum = 0;
    if(a == 0){
        return 0; 
    }
    int i = a;
    while (i != 0)
    {
        sum = sum + 1/i;
        i--;
    }
    return float(sum);   
}
int ucln(int a, int b){
    int max;
    if (a == b)
    {
        max = a + b;
    } 
    a > b ? max = a - b : max = b - a;
        return max;
}
int tong(int a){
    if(a != 0){
        return tong(a - 1) + a;
    } return 0;
}

int luythua(int a, int b){
    if(b == 1){
        return a;
    }
    return luythua(a, b-1)*a;
}
int isP(int a){
    if(a < 2){
        return 0;
    }
    int sq = sqrt(a);
    int j;
    for ( j = 2; j < sq; j++)
    {
        if(a % j){
            return 0;
        }
    }
    return 1;
}
int hinhvuong (){
        int a;
        cout<<"Nhap canh hinh vuong: "; cin>>a;
        cout<<"Dien tich hinh vuong: "<<a*a; 
        return 0;
    };
    int hinhchunhat (){
        int a, b;
        cout<<"Nhap chieu dai hinh chu nhat: "; cin>>a;
        cout<<"Nhap chieu rong hinh chu nhat: "; cin>>b;
        cout<<"Dien tich hinh chu nhat: "<<a*b;
        return 0; 
    };
    int hinhtron (){
        int a;
        cout<<"Nhap ban kinh hinh tron: "; cin>>a;
        cout<<"Dien tich hinh tron: "<<a*a*M_PI*1.0;
        return 0;
    };
    int hinhtamgiac (){
        int a, b, c;
        cout<<"Nhap canh thu nhat: "; cin>>a;
        cout<<"Nhap canh thu hai: "; cin>>b;
        cout<<"Nhap canh thu ba: "; cin>>c;
        float sum = (a + b + c)/2;
        cout<<"Dien tich hinh tam giac: "<<sqrt(sum*(sum-a)*(sum-b)*(sum-c));
        return 0; 
    };
    void nhanhinhmuontinh(int a){
        switch (a)
    {
    case 1:
        hinhvuong();
        break;    
    case 2:
        hinhchunhat();
        break;    
    case 3:
        hinhtron();
        break;    
    case 4:
        hinhtamgiac();
        break;  
    }
    };
    int phepcong(){
    int a, b, c, d;
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<"Nhap c: "; cin>>c;
    cout<<"Nhap d: "; cin>>d;
    int max, ucln;
    (a*d + c*b) > (b*d) ? max = (a*d + c*b) : max = (b*d);
    for (int i = 1; i <= max; i++)
    {
        if (max % i == 0)
        {
            ucln = i;
        }
        
    }
    cout<<"a/b + c/d = "<<(a*d + c*b)/ucln<<"/"<<(b*d)/ucln;
    return 0;
    };
    int pheptru(){
    int a, b, c, d;
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<"Nhap c: "; cin>>c;
    cout<<"Nhap d: "; cin>>d;
    int max, ucln; 
    a*d - c*d < c*b ? max = a*d - c*d : max = c*b;
    for (int i = 1; i <= max; i++)
    {
        if (max % i == 0)
        {
            ucln = i;
        }
        
    }
    cout<<"a/b - c/d = "<<(a*d - c*b)/ucln<<"/"<<(b*d)/ucln;

    return 0;
    };
    int phepnhan(){
    int a, b, c, d;
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<"Nhap d: "; cin>>d;
    cout<<"Nhap c: "; cin>>c;
    int max, ucln; 
    a*c < d*b ? max = a*c : max = d*b;
    for (int i = 1; i <= max; i++)
    {
        if (max % i == 0)
        {
            ucln = i;
        }
        
    }
    cout<<"a/b * c/d = "<<(a*c)/ucln<<"/"<<(b*d)/ucln;
    return 0;
    };
    int phepchia(){
    int a, b, c, d;
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<"Nhap c: "; cin>>c;
    cout<<"Nhap d: "; cin>>d;
    int max, ucln; 
    a*d < c*b ? max = a*d : max = c*b;
    for (int i = 1; i <= max; i++)
    {
        if (max % i == 0)
        {
            ucln = i;
        }
        
    }
    cout<<"a/b / c/d = "<<(a*d)/ucln<<"/"<<(b*c)/ucln;
    return 0;
    };
    void nhanphepmuontinh(int a){
        switch (a)
    {
    case 1:
        phepcong();
        break;    
    case 2:
        pheptru();
        break;    
    case 3:
        phepnhan();
        break;    
    case 4:
        phepchia();
        break;  
    }
    };
int sochinhphuong(int a, int b){
        int binhphuong = a*a;
        if (binhphuong <= b)
        {
            cout<<binhphuong<<" ";
        }
    return 0;
};
int songuyento(int b){
    int biendem = 0;
    for (int j = 1; j <= b; j++)
    {
        if (b % j == 0)
        {
            biendem++;
        }
    }
    if (biendem == 2)
    {
        return 1;
    }
    return 0;
};
int sohoanchinh(int a){
    int sum = 0;
    for (int j = 1; j < a; j++)
    {
        if (a % j == 0)
        {
            sum = sum + j;
        }
    }
    if (sum == a)
    {
        cout<<a<<" ";
    }
    return 0;
};
int sodoixung(int a){
    int sum = 0, t;
    for (int j = a; j != 0; j=j/10)
    {
        t = j % 10;
        sum = sum*10+t;
    }
    if (sum == a)
    {
        cout<<a<<" ";
    }
    return 0;
};
int sodaonguoc(int a){
    int biendemphu = 0;
    int biendem = 0 ,sum = 0, t;
    for (int f = 1; f <= a; f++)
    {
        if (a % f == 0)
        {
            biendem++;
        }
    }
    for (int j = a; j != 0; j=j/10)
    {
        t = j % 10;
        sum = sum*10+t;
    }
    for (int z = 1; z <= sum; z++)
    {
        if (sum % z == 0)
        {
            biendemphu++;
        }
    }
    if (biendemphu == 2 && biendem == 2)
    {
        cout<<a<<" ";
    }
    return 0;
};
int soMer(int a){
    int d,sum = 0, bien = 0;
    for (int y = 1; y <= a; y++)
    {
        if (a % y == 0)
        {
            bien++;
        }
        d = pow(2, a);
    }
    for (int x = 1; x <= d; x++)
    {
        if (d % x == 0)
        {
            sum++;
        }
    }
    if(sum == 2)
    {
        cout<<a;
    }
    return 0;
}
int soArm(int a){
    int c, d, sum = 0, dem = 0;
    for (int i = a; i != 0; i = i/10)
    {
        d = i % 10;
        c = pow(a, 3);
        sum = sum + c;
    }
    if (sum == a)
    {
        cout<<a;
    }
    
    return 0;
};
int soFib(int a){
    if(a == 0){
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    return soFib(a -2) + soFib(a-1);
}
int main (){
    //BAI TAP 3.1
    int n, biendem = 1;
    cout<<"Nhap n: "; cin>>n;
    cout<<"So chinh phuong nho hon n: ";
    cout<<"\nSo hoan hao nho hon n: ";
    cout<<"\nSo nguyen to nho hon n: ";
    cout<<"\nSo can xung nho hon n: ";
    cout<<"\nSo nguyen to nho hon n: ";
    cout<<"\nSo dao nguoc la so nguyen to nho hon n: ";
    cout<<"\nSo Mersenne nho hon n: ";
    cout<<"\nSo Fibbonacci nho hon n: ";
    cout<<"\nSo Armstrong nho hon n: ";
    for (int i = 1; i <= n; i++){
        sochinhphuong(i, n);
        sohoanchinh(i);
        songuyento(i);
        sodoixung(i);
        sodaonguoc(i);
        soMer(i);
        soFib(i);
        soArm(i);
    }
    //BAI TAP 3.2
    int n;
    cout<<"=====================   1 : phep cong, 2 : phep tru, 3 : phep nhan, 4 : phep chia  =============================";
    cout<<"\nNhap phep muon tinh: "; cin>>n;
    nhanphepmuontinh(n);
    int n1;
    cout<<"\n===================    1: Co, 2: Khong ========================";
    cout<<"\nBan co muon tiep tuc khong: "; cin>>n1;
    if (n1 == 1)
    {
        main();
    } else {
        return 0;
    }
    system("cls");
    //BAI TAP 3.3
    int n;
    cout<<"=====================   1 : hinh vuong, 2 : hinh chu nhat, 3 : hinh tron, 4 : hinh tam giac  =============================";
    cout<<"\nNhap hinh muon tinh: "; cin>>n;
    nhanhinhmuontinh(n);
    int n1;
    cout<<"\n===================    1: Co, 2: Khong ========================";
    cout<<"\nBan co muon tiep tuc khong: "; cin>>n1;
    if (n1 == 1)
    {
        main();
    } else {
        return 0;
    }
    system("cls");
    //BAI TAP 3.4
    //CAU A
    int n, dem = 0;
    cout<<"Nhap n: "; cin>>n;
    cout<<n<< "so nguyen to dau tien";
    int i = 2;
    while (dem < n)
    {
        if(isP(i)){
            cout<<i<<" ";
            dem++;
        }
        i++;
    }
    
    return 0;
    //CAU B
    //Tham Khảo thêm
    //BAI TAP 3.5
    //CAU A
    int a, b;
    cout<<"Nhap co so: "; cin>>a;
    cout<<"Nhap so mu: "; cin>>b;
    cout<<"Kết quả: "<<luythua(a,b);
    return 0;
    //CAU B
        int a, b;
    cout<<"Nhap co so: "; cin>>a;
    cout<<"Nhap so mu: "; cin>>b;
    cout<<"Ket qua: "<<ucln(a, b);
    return 0l
    //CAU C
    int n;
    cout<<"Nhap n: "; cin>>n;
    cout<<"Ket qua: "<<tong(n);
    return 0;
    //CAU D Tham khảo thêm
    //CAU C Sửa thêm code
    cout<<fixed<<setprecision(2)<<float(tinhtong(2));
    return 0;
    //BAI TAP 3.6
    //CAU A X7 = 135
    //CAU B 
    int n;
    cout<<"Nhap n: "; cin>>n;
    cout<<dq(n);
    return 0;
    //CAU C
    int n;
    cout<<"Mhap n: "; cin>>n;
    cout<<dq1(n);
    //BAI TSP 3.9
    int n, k;
    cout<<"Nhap n: "; cin>>n;
    cout<<"Nhap k: "; cin>>k;
    cout<<"To hop: "<<C(n, k);
    return 0;
}
