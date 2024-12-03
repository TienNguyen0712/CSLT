#include <bits/stdc++.h>

using namespace std;

const int maxn = 10000;

struct Sach
{
    string Ma;
    string Ten;
    long Gia;
    int Ton;
    long Don;
    long Tien;
    long Ban;
};

void nhap(Sach a[], int &n);
void themsach(Sach a[], int &n, int x);
void xoasach(Sach a[], int &n, Sach x);
void sapxepsach(Sach a[], int n);
void intonggiatritonkho(Sach a[], int n);
void in(Sach a[], int n);

int main(){
    Sach kesach[maxn]; int n;
    nhap(kesach, n);
    cout << endl;
    in(kesach, n);
    return 0;
}

void nhaptensach(Sach &b){
    char c;
    while((c = cin.get()) != '\n'){
        b.Ten += c;
    }
}

void nhapsach(Sach &b){
    cout << "-  Mã sách:          "; cin.ignore(); getline(cin, b.Ma);
    cout << "-  Tên sách:         "; nhaptensach(b);
    cout << "-  Số lượng tồn kho: "; cin >> b.Ton;
    cout << "-  Đơn giá:          "; cin >> b.Don;
    cout << "-  Thành tiền:       " << (b.Ton * b.Don)/1000 << ".000";
    cout << "              -  Đơn giá bán:  "; cin >> b.Ban;
    cout << endl;
}

void nhap(Sach a[], int &n){
    cout << "Nhập số lượng sách muốn tạo: "; cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "-  Số thứ tự:        " << i << endl;
        nhapsach(a[i]);
        while(i > 0 && a[i].Ma == a[i-1].Ma){
            cout << "Mã sách đã có vui lòng nhập lại: " << endl;
            nhapsach(a[i]);
        }
    }
}

void themsach(Sach a[], int &n, int x){
    cout << "Nhập vị trí mà bạn muốn thêm: "; cin >> x;
    if ( x < 0 || x > n){
        cout << "Vị trí thêm không hợp lý";
    }
    for (int i = n - 1; i >= x; i++){
        a[i + 1] = a[i];
    }
    nhapsach(a[x]);
    n++;
    for (int j = )
}

void xoasach(Sach a[], int &n, Sach x){
    cout << "Nhập mã sách muốn xoá: "; cin >> x.Ma;
    for (int i = 1; i <= n; i++){
        if(a[i].Ma == x.Ma){
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        } else {
            cout << "Không có mã sách này trong danh sách";
        }
    }
}

void swap(Sach &a, Sach &b){
    Sach temp = a;
    a = b;
    b = temp;
}

void sapxepsach(Sach a[], int n){
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            if(a[i].Ban < a[j].Ban){
                swap(a[i], a[j]);
            }
        }
    }
}

int tonghangton(Sach a[], int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=a[i].Ton;
    }
    return sum;
}

long tongtien(Sach a[], int n){
    long s = 0;
    for(int i = 1; i <= n; i++){
        s+=a[i].Tien;
    }
    return s;
}

void intonggiatritonkho(Sach a[], int n){
    cout << "Tồn kho sách: ";
    cout << "-  Số lượng:               " << tonghangton(a, n);
    cout << "-  Số tiền:                " << tongtien(a, n);
}

void inthongtinsach(Sach &b){
        cout << "- Mã sách:           " << b.Ma;
        cout << "         Tên sách:          " << b.Ten << endl;
        cout << "- Số lượng tồn kho:  " << b.Ton;
        cout << "          Đơn giá:           " << b.Don << endl;
        cout << "- Thành tiền:        " << (b.Ton * b.Don)/1000 << ".000" << endl;
        cout << "- Đơn giá bán:       " << b.Ban << endl;
    
}
void in(Sach a[], int n){
    for(int i = 1; i <= n; i++){
        cout << "- Số thứ tự:         " << i << endl;
        inthongtinsach(a[i]);
        cout << endl;
    }
}
