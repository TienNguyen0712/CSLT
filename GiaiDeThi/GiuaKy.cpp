#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>

using namespace std;

const int maxn = 10000;

struct Sach
{
    string Ma;
    string Ten;
    long Gia;
    int Ton;
    double Don;
    double Tien;
    long Ban;
};

void nhapsach(Sach &b);
void nhap(Sach a[], int &n);
void themsach(Sach a[], int &n, int x, Sach d);
void xoasach(Sach a[], int &n, string d);
void sapxepsach(Sach a[], int n);
void intonggiatritonkho(Sach a[], int n);
void in(Sach a[], int n);
void timkiem(Sach a[], int n, string x);
void inhoadon(Sach a[], int n, Sach temp[], string mamua);

int main(){
    Sach kesach[maxn], sachthem, sachmua[maxn]; int n, choice, x; string sachtimkiem, sachxoa, mamua;
        do{
        cout << "----------------------------QUẢN LÝ SÁCH-------------------------------------------------" << endl;
        cout << "(1): Tạo danh sách                                  (2): Thêm một cuốn sách              " << endl;
        cout << "(3): Xoá sách                                       (4): Sắp xếp sách theo giá giảm dần  " << endl;
        cout << "(5): In tổng số lượng hàng tồn                      (6): In danh sách                    " << endl;
        cout << "(7): Tìm kiếm sách theo yêu cầu                     (8): In hoá đơn mua hàng             " << endl;
        cout << "                            (0): Thoát chương trình                                      " << endl;
        cout << "-----------------------------------------------------------------------------------------" << endl;
        cout << "Nhập lựa chọn của bạn: ";
        cin >> choice;
        switch (choice)
        {
        case 1:  
            nhap(kesach, n);
            cout << endl;
            break;
        case 2:
            themsach(kesach, n, x, sachthem);
            cout << endl;
            break;
        case 3:
            xoasach(kesach, n, sachxoa);
            cout << endl;
            break;
        case 4:
            sapxepsach(kesach, n);
            in(kesach, n);
            cout << endl;
            break;
        case 5:
            intonggiatritonkho(kesach, n);
            cout << endl;
            break;
        case 6:
            in(kesach, n);
            cout << endl;
            break;
        case 7:
            timkiem(kesach, n, sachtimkiem);
            cout << endl;
            break;
        case 8:
            inhoadon(kesach, n, sachmua, mamua);
            cout << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}

void nhapsach(Sach &b){
    cout << "-  Tên sách:         "; cin.ignore(); getline(cin , b.Ten);
    cout << "-  Số lượng tồn kho: "; cin >> b.Ton;
    cout << "-  Đơn giá:          "; cin >> b.Don;
    cout << "-  Thành tiền:       " << fixed << setprecision(3) << (b.Ton * b.Don)/1000;
    cout << "              -  Đơn giá bán:  "; cin >> b.Ban;
    cout << endl;
}

void nhap(Sach a[], int &n){
    cout << "Nhập số lượng sách muốn tạo: "; cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "-  Số thứ tự:        " << i << endl;
        cout << "-  Mã sách:          "; cin >> a[i].Ma;
        while(i > 0 && a[i].Ma == a[i-1].Ma){
            cout << "Mã sách đã có vui lòng nhập lại: " << endl;
            cout << "-  Mã sách:          "; cin >> a[i].Ma;       
        }
        nhapsach(a[i]);
    }
}

void them(Sach a[], int &n, int x, Sach d){
    nhapsach(d);
    for (int i = n; i >= x; i--)
    {
        a[i + 1] = a[i];
    }
        a[x] = d;
        n++;
}

void trung(Sach &a, Sach b){
    cout << "-  Số lượng tồn kho: "; cin >> b.Ton;
    cout << "-  Đơn giá:          "; cin >> b.Don;
    a.Ton+=b.Ton;
    a.Don = (a.Don * a.Ton + b.Don * b.Ton)/(b.Ton + a.Ton);
    a.Tien = (a.Ton * a.Don)/1000;

}

void themsach(Sach a[], int &n, int x, Sach d){
    bool check;
    if(n == 0){
        cout << "Không có sách nào trong kho!!!!" << endl;
        return; 
    }
    cout << "-  Mã sách:          "; cin >> d.Ma;
    for (int i = 1; i <= n; i++){
        if(a[i].Ma == d.Ma){
                trung(a[i], d);
                check = false;
                break;
            } else {
                check = true;
            }
    }
    if(check){
        cout << "-  Nhập vị trí muốn thêm sách: "; cin >> x;
        if ( x >= 1 && x <= n){
            them(a, n, x, d);
        } else {
            cout << "Vị trí thêm không hợp lệ" << endl;
        }
    }
}
void xoasach(Sach a[], int &n, string d){
    bool t = false;
    cout << "Nhập mã sách cần xoá: "; cin >> d;
    for (int i = 0; i <= n; i++)
    {
        if(a[i].Ma == d){
            for(int j = i; j <= n - 1; j++){
                a[j] = a[j + 1];
            }
            n--;
            t = true;
        }
    }
    if(t){
        cout << "Đã xoá sách có mã " << d << endl;
    } else {
        cout << "Không có sách nào trong danh sách" << endl;
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

double tongtien(Sach a[], int n){
    long s = 0;
    for(int i = 1; i <= n; i++){
        s+=(a[i].Ton * a[i].Don);
    }
    return s;
}

void intonggiatritonkho(Sach a[], int n){
    cout << "Tồn kho sách: " << endl;
    cout << "-  Số lượng:               " << tonghangton(a, n) << endl;
    cout << "-  Số tiền:                " << fixed << setprecision(3) << tongtien(a, n)/1000 << endl;
}

void inthongtinsach(Sach &b){
        cout << "- Mã sách:           " << b.Ma;
        cout << "         Tên sách:          " << b.Ten << endl;
        cout << "- Số lượng tồn kho:  " << b.Ton;
        cout << "           Đơn giá:           " << int(b.Don) << endl;
        cout << "- Thành tiền:        " << fixed << setprecision(3) << (b.Ton * b.Don)/1000 << endl;
        cout << "- Đơn giá bán:       " << b.Ban << endl;
    
}
void in(Sach a[], int n){
    for(int i = 1; i <= n; i++){
        cout << "- Số thứ tự:         " << i << endl;
        inthongtinsach(a[i]);
        cout << endl;
    }
}

void sapxepsach(Sach a[], int n){
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            if(a[i].Ban < a[j].Ban){
                Sach temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void timkiem(Sach a[], int n, string x){
    Sach temp; bool check = false;
    cout << "Mã sách muốn tìm kiếm: "; cin >> x;
    for (int i = 1; i <= n; i++)
    {
        if(a[i].Ma == x){
            temp = a[i];
            check = true;
            break;
        }    
    }
    if (check){
        inthongtinsach(temp);
    } else {
        cout << "Không có sách này trong danh sách" << endl;
    }
}

void intenvamasach1(Sach a[], int n){
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].Ten << " ";
    }
}


void intenvamasach2(Sach a[], int n){
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].Ma << " ";
    }
}

void hoadon(Sach sachmua[], int n){
        cout << "Hoá đơn:                  " << endl;
        cout << "-  Mã sách:               "; intenvamasach2(sachmua, n); cout << endl;
        cout << "-  Tên sách:              "; intenvamasach1(sachmua, n); cout << endl;
        cout << "-  Số lượng sách đã mua:  " << tonghangton(sachmua, n) << endl;
        cout << "-  Tổng tiền:             " << fixed << setprecision(3) << tongtien(sachmua, n)/1000 << endl;
}

void inhoadon(Sach a[], int n, Sach temp[], string mamua){
    int choice, slsachmua, d = 0; bool check = false;
    if(n == 0){
        cout << "Không tồn tại sách nào trong kho!!!" << endl;
        return;
    }
    do {
        cout << "- Nhập mã sách bạn muốn mua: "; cin >> mamua;
        for (int i = 1; i <= n; i++)
        {
            if(a[i].Ma == mamua){
                cout << "- Nhập số lượng sách mà bạn muốn mua: "; cin >> slsachmua;
                if(slsachmua < a[i].Ton){
                    a[i].Ton-=slsachmua;
                    temp[i].Ton = slsachmua;
                    temp[i].Ma = mamua;
                    temp[i].Ten = a[i].Ten;
                    temp[i].Don = a[i].Don;
                    d++;
                    break; 
                } else {
                    cout << "- Số lượng mua vượt quá sách trong kho!!!";
                    return;
                }
            }
        }
        cout << "- Bạn có muốn tiếp tục không (1/0): "; cin >> choice;
    } while (choice != 0);

    if(d > 0){
        check = true;
    } 
    if(check){
        hoadon(temp, n);
    } else {
        cout << "- Không tồn tại mã sách này trong kho!!!";
    }
}
