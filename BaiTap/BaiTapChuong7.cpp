#include <bits/stdc++.h>

using namespace std;

struct nhanvien {
    char ms[256], ht[256];
    long long luongcb, thuong, thuclanh;
    int ngay, thang, nam;
};

struct hocsinh{
    char ms[256], hvt[256];
    float mnn, mcb, mcs;
    friend ostream& operator << (ostream& os, const hocsinh& p){
        return os << p;
    }
};

void caua(char a[]);
void caub(char a[]);
void cauc(char a[]);
void caud(char a[]);
void caue(char a[]);
void cauf(char a[]);
void caua1(nhanvien a[], int &n);
void caub1(nhanvien a[], int n);
void cauc1(nhanvien a[], int n);
void caua2(hocsinh a[], int n1);
void caub2(hocsinh a[], int n1);
void cauc2(hocsinh a[], int n1);
void caud2(hocsinh a[], int n1);
void caue2(hocsinh a[], int n1);
void caua3(char s[], char x[]);
void caub3(char s[], char x[]);
char *caua4(char a[], int p, int l);
char *caub4(char a[], char b[]);
char *cauc4(char a[]);
char *caua5(char x[], char y[], char z[]);


int main(){
    //BAI TAP 7.1
    char s[] = "Phan Tan Quoc";
    caua(s);
    caub(s);
    cauc(s);
    caud(s);
    caue(s);
    cauf(s);
    //BAI TAP 7.2
    int n;
    cout << "Nhap so luong nhan vien: "; cin >> n;
    nhanvien ds[n];
    caua1(ds, n);
    caub1(ds, n);
    cauc1(ds, n);
    //BAI TAP 7.3
    int n1;
    cout << "Nhap so hoc sinh: "; cin >> n1;
    hocsinh danhsach[n1];
    caua2(danhsach, n1);
    caub2(danhsach, n1);
    cauc2(danhsach, n1);
    caud2(danhsach, n1);
    caue2(danhsach, n1);
    //BAI TAP 7.4
    char x[256];
    caua3(s, x);
    caub3(s, x);
    //BAI TAP 7.5
    char s1[256], s2[256];
    int p, l;
    cout << caua4(s, p ,l) << endl;
    cout << caub4(s1, s2) << endl;
    cout << cauc4(s) << endl;
    //BAI TAP 7.6
    char s1[256];
    char x1[256];
    char y1[256];
    cout << caua5(s1, x1, y1) << endl;
    return 0;
}

void nhap(hocsinh a[], int &n1){
    for(int i = 0; i < n1; i++){
        cout << "Thong tin nhan vien " << i + 1 << " : " << endl;
        cout << "Nhap ma hoc sinh: "; fflush(stdin); gets(a[i].ms);
        cout << "Nhap ho va ten: "; fflush(stdin); gets(a[i].hvt);
        cout << "Nhap diem mon ngoai ngu: "; cin >> a[i].mnn;
        cout << "Nhap diem mon co ban: "; cin >> a[i].mcb;
        cout << "Nhap diem mon co so: "; cin >> a[i].mcs;
    }  
}

void caua2(hocsinh a[], int n1){
    for(int i = 0; i < n1; i++){
        if(a[i].mnn < 5.0 || a[i].mcb < 5.0 || a[i].mcs < 5.0){
                cout << a[i] << endl;
        }
    }
}

void caub2(hocsinh a[], int n1){
    int c = 0;
    for(int i = 0; i < n1; i++){
        if(a[i].mnn >= 5.0 && a[i].mcb >= 5.0 && a[i].mcs >= 5.0 && a[i].mcb + a[i].mcs >= 12.0){
            c++;
        }
    }
    cout << "Co " << c << " hoc sinh" << endl;
}

void cauc2(hocsinh a[],  int n1){
    int max = INT_MIN;
    for(int i = 0; i < n1; i++){
        if(a[i].mcb + a[i].mcs + a[i].mcb > max){
            max = a[i].mcb + a[i].mcs;
        }
    }

    for(int i = 0; i < n1; i++){
        if(max == a[i].mcb + a[i].mcs + a[i].mcb){
            cout << "Hoc sinh co diem 3 mon lon nhat: " << endl;
            cout << a[i] << endl;
        }
    }
}

void caud2(hocsinh a[], int n1){
    char x[256];
    cout << "Nhap ma so can tim: "; gets(x);
    for(int i = 0; i < n1; i++){
        if(a[i].ms == x){
            cout << "Hoc sinh can tim\n" << a[i] << endl;
        }
    }
}



void caue2(hocsinh a[], int n1){
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n1; j++){
            if(a[i].ms < a[j].ms){
                hocsinh t = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
}

void caua3(char s[], char x[]){
    gets(x);
    if(strstr(s, x) == NULL){
        cout << "-1" << endl;
    } else {
        cout << strstr(s, x)-s << endl;
    }
}

void caub3(char s[], char x[]){
    int c = 0;
    gets(x);
    if(strstr(s, x) != NULL){
        c++;
    }
    cout << "So lan xuat hien chuoi x: " << c << endl;

}

void caua1(nhanvien a[], int &n){
    for(int i = 0; i < n; i++){
        cout << "Thong tin nhan vien " << i + 1 << " : " << endl;
        cout << "Nhap ma nhan vien: "; fflush(stdin); gets(a[i].ms);
        cout << "Nhap ho va ten: "; fflush(stdin); gets(a[i].ht);
        cout << "Nhap ngay, thang, nam sinh: "; cin >> a[i].ngay >> a[i].thang >> a[i].nam;
        cout << "Nhap luong co ban: "; cin >> a[i].luongcb;
        cout << "Nhap thuong: "; cin >> a[i].thuong;
    }
}

void xuat(nhanvien a[], int n){
    for(int i = 0; i < n; i++){
        cout << "Ma nhan vien: "; puts(a[i].ms);
        cout << "Ho va ten: "; puts(a[i].ht);
        cout << "Ngay, thang, nam sinh: " << a[i].ngay << " " << a[i].thang << " " << a[i].nam << endl;
        cout << "Luong co ban: " << a[i].luongcb << endl;
        cout << "Thuong: " << a[i].thuong << endl;
        cout << "Thuc lanh: " << a[i].luongcb + a[i].thuong << endl;
    }    
}

void swap(nhanvien &a, nhanvien &b){
    nhanvien t = a;
    a = b;
    b = t;
}

void caub1(nhanvien a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i].luongcb + a[i].thuong > a[j].luongcb + a[j].thuong){
                swap(a[i], a[j]);
            }
        }
    }
    xuat(a, n);
    cout << endl;
}

void cauc1(nhanvien a[], int n){
        for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i].ms < a[j].ms){
                swap(a[i], a[j]);
            }
        }
    }
    xuat(a, n);
    cout << endl;
}

void caua(char a[]){
    int c = 0, c1 = 0; 
    for(int i = 0; i < strlen(a); i++){
        if(isupper(a[i])){c++;}
        if(islower(a[i])){c1++;}
    }
    cout << "Chuoi co " << c << " la chu hoa" << endl; 
    cout << "Chuoi co " << c1 << " la chu thuong" << endl; 
}

void caub(char a[]){
    for(int i = 0; i < strlen(a); i++){
        cout << toascii(a[i]) << " ";
    }
    cout << endl;
}

void cauc(char a[]){
    for(int i = 0; i < strlen(a); i++){
        a[i] = tolower(a[i]);
    }
    a[0] = toupper(a[0]);
    for(int i = 1; i < strlen(a); i++){
        if(a[i] == ' '){
            a[i+1] = toupper(a[i+1]);
        }
    }
    cout << a << endl;
}

void caud(char a[]){
    int c = 1;
    for(int i = 0; i < strlen(a); i++){
        if(isspace(a[i])){c++;}
    }
    cout << "Chuoi co " << c << " tu" << endl;
}

void caue(char a[]){
    int i = 0;
    cout << "Chuoi co cac tu lan luot ky tu: ";
    while (i < strlen(a))
    {
        while (i < strlen(a) && a[i] == ' ') { i++; }
        int c = 0;
        while (i < strlen(a) && a[i] != ' ' && a[i] != '\0') { c++; i++; }
        if(c > 0){cout << c << " ";}
    }
    cout << endl;
}

void cauf(char a[]){
    cout << strchr(a,' ') << endl;
    cout << strrev(strchr(strrev(a), ' ')) << endl;
}

char *caua5(char x[], char y[], char z[]){
    cout << "Nhap chuoi s: "; gets(x);
    cout << "Nhap chuoi x: "; fflush(stdin); gets(y);
    cout << "Nhap chuoi y: "; fflush(stdin); gets(z);
    if(strstr(x, y) != NULL){
        strcpy(y, z);
    }
    return x;
}

char *caua4(char a[], int p, int l){
    cout << "Nhap p: "; cin >> p;
    cout << "Nhap l: "; cin >> l;
    return strcpy(a + p, a + p + l);
};
char *caub4(char a[], char b[]){
    int p;
    cout << "Nhap chuoi s: "; fflush(stdin); gets(a);
    cout << "Nhap chuoi x: "; fflush(stdin); gets(b);
    cout << "Nhap p: "; cin >> p;
    int len = strlen(a);
    for(int i = p; i < strlen(a); i++){
        {
            a[i] = a[i + 1];
            a[i] = b[i];
        }
        len++;
    }
};
char *cauc4(char a[]){
    for(int i = 0; i < strlen(a); i++){
        for(int j = 0; j < strlen(a); j++){
            if(a[i] > a[j]){
                char t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    return a;
};