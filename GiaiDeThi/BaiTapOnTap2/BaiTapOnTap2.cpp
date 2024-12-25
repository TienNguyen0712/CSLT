#include <bits/stdc++.h>

using namespace std;

void cau_1(char a[]);
int cau_2(char a[]);
void cau_3(char a[]);
char *cau_4(char a[]);
char *cau_5(char a[]);
int cau_6(char a[]);
// char *cau_7(char a[]);
char *cau_8(char a[], int p, int k);
void cau_9(char a[], char x[]);
void cau_10(char a[]);
void cau_11(char a[]);
void cau_12(char a[]);

int main(){
    char s[256];
    cout << "Nhap chuoi: "; gets(s);
    char a[256], x[256], b[256]; 
    strcpy(a, s);
    strcpy(b, s);
    int p, k;
    cau_1(s);
    cout << "Chuoi co " << cau_2(s) << " tu" << endl;
    cau_3(s);
    cout << "Tach chuoi ben trai: " << cau_4(s) << endl;
    cout << "Tach chuoi ben phai: " << cau_5(s) << endl;
    cout << "Tu co so ky tu dai nhat la: " << cau_6(a) << endl;
    // cout << cau_7(a) << endl;
    cout << endl;
    cout << "Xoa chuoi vi tri k voi so ky tu p: " << endl << cau_8(a, p, k) << endl;
    cout << "Dap an cau 9: " << endl; cau_9(b, x);
    cau_10(b);
    cout << endl;
    cau_11(b);
    cau_12(b);
    return 0; 
}

void cau_1(char a[]){
    int c = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < strlen(a); i++){
        if(isspace(a[i])){c++;}
        if(isupper(a[i])){c1++;}
        if(islower(a[i])){c2++;}
    }
    cout << "Chuoi co " << c << " khoang trang" << endl;
    cout << "Chuoi co " << c1 << " chu hoa" << endl;
    cout << "Chuoi co " << c2 << " chu thuong" << endl;
}

int cau_2(char a[]){
    int c = 1;
    for(int i =0; i < strlen(a); i++){
        if(isspace(a[i])){c++;}
    }
    return c;
}

void cau_3(char a[]){
    int i = 0;
    cout << "Cac tu trong chuoi co lan luot: ";
    while (i < strlen(a))
    {
        while (i < strlen(a) && a[i] == ' ') {i++;}
        int c = 0;
        while (i < strlen(a) && a[i] != ' ' && a[i] != '\0') { c++; i++; }
        if(c > 0){cout << c << " ";}
    }
    cout << endl;
}

char *cau_4(char a[]){
    return strchr(a, ' ');
}
char *cau_5(char a[]){
    return strrev(strchr(strrev(a), ' '));
}

int cau_6(char a[]){
    int i = 0, max = INT_MIN;
    while (i < strlen(a))
    {
        while (i < strlen(a) && a[i] == ' ') {i++;}
        int c = 0;
        while(i < strlen(a) && a[i] != ' ' && a[i] != '\0'){c++; i++; if(c > max){max = c;}}
    }
    return max;
}

char *cau_8(char a[], int p, int k){
    cout << "Nhap so luong ky tu: "; cin >> p;
    cout << "Nhap vi tri xoa: "; cin >> k;
    return strcpy(a + p, a + p + k);
}

void cau_9(char a[], char x[]){
    cout << "Nhap chuoi: "; fflush(stdin); gets(x);
    if(strstr(a, x) == NULL){
        cout <<  "KHÔNG";
    } else {
        cout << "Vi tri dau tien duoc tim thay" << strstr(a, x) - a;
    }
    cout << endl;
}

void cau_10(char a[]){
    for(int i = 0; i < strlen(a); i++){
        if(a[i] != ' '){
            cout << a[i];
        }
    }
}
void swap(char &a, char &b){
    char t = a;
    a = b;
    b = t;
}

void cau_11(char a[]){
    int x[strlen(a)];
    for(int i = 0; i < strlen(a); i++){
        if(a[i] != 32){
            x[i] = (int)a[i]; 
        } else {
            x[i] = 0;
        }
    }
    for(int i =0; i < strlen(a); i++){
        for(int j = 0; j < strlen(a); j++){
            if(x[i] != 0 && x[j] != 0 && x[i] < x[j]){swap(a[i], a[j]); swap(x[i], x[j]);}
        }
    }
    cout << "Chuoi da sap xep: " << a << endl;
}

void cau_12(char a[]){
    int count[256] = {0};
    for(int i = 0; i < strlen(a); i++){
        count[a[i]]++;
    }
    cout << "So lan xuat hien: \n";
    for( int i = 0; i < 256; i++){
        if(count[i] != 0 && (char)i != ' '){
            cout << (char)i << " xuat hien " << count[i] << " lan" << endl;
        }
    }
}