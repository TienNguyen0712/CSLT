#include <bits/stdc++.h>

using namespace std;

//Cau A Bai 3
struct rectangle{int length, width;};

int sum(int n);
int sont(int n);
int sumarr(int a[3][4]);
void cau2caub(int a[3][4]);
void cau2cauc(int a[3][4]);
void nhap(rectangle b[], int &n);
int sumrec(rectangle b[], int n);
void dem(char c[]);
char *tachphap(char c[]);
int min(int mang[], int n1, int &t);

int main(){
    //Cau 1 
    //Cau A
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Tong cac so cua n: " << sum(n) << endl;
    //Cau B
    int k;
    cout << "Nhap so de kiem tra: "; cin >> k;
    cout << "Kiem tra so nguyen to: " << sont(k) << endl;
    //Cau 2
    int a[3][4] = {{14, 7, 16, 16}, 
                   {12, 21, 9, 8},
                   {11, 4, 13, 18}};
    //Cau A
    cout << "Ket qua cau a: " << sumarr(a) << endl;
    //Cau B
    cout << "Ket qua cau b: "; cau2caub(a);
    //Cau C
    cout << "Ket qua cau c: "; cau2cauc(a);
    //Cau 3
    //Cau B
    rectangle hv[100]; int soluong;
    nhap(hv, soluong);
    cout << "Tong dien tich: " << sumrec(hv, soluong) << endl;
    //Cau 4
    char s[256];
    cout << "Nhap chuoi: "; fflush(stdin); gets(s);
    //Cau A
    dem(s);
    //Cau B
    cout << "Tach tu ben phai: " << tachphap(s) << endl;
    //Cau 5
    //Cau A
    FILE *f = fopen("num_inp.txt", "rt");
    int n12, mang[100], sonho = INT_MAX;
    fscanf(f, "%d", &n12);
    for(int i = 0; i < n12; i++){
        fscanf(f, "%d", &mang[i]);
    }
    //Cau B
    cout << "Ket qua cau b: " << min(mang, n12, sonho);
    //Cau C
    FILE *g = fopen("num_out.txt", "wt");
    int re = min(mang, n12, sonho);
    fprintf(g, "%d", re);
    fclose(f);
    fclose(g);
    return 0;
}

int sum(int n){
    int s = 0;
    for(int i = n; i != 0; i/=10){
        s+= i % 10;
    }
    return s;
}

int sont(int n){
    if(n == 2){return 1;}
    if(n < 2){return 0;}
    for(int i = 2; i < sqrt(n) + 1; i++){
        if(n % i == 0){return 0;}
    }
    return 1;
}

int sumarr(int a[3][4]){
    int s = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            s+=a[i][j];
        }
    }
    return s;
}
void cau2caub(int a[3][4]){
    for(int i = 0; i < 3; i++){
        int s = 0;
        for(int j = 0; j < 4; j++){
            s+=a[i][j];
        }
        cout << s << " ";
    }
    cout << endl;
}
void cau2cauc(int a[3][4]){
    for(int j = 0; j < 4; j++){
        int s = 0;
        for(int i = 0; i < 3; i++){
            s+=a[i][j];
        }
        cout << s << " ";
    }
    cout << endl;
}


void nhap(rectangle b[], int &n){
    cout << "Nhap so luong hcn: "; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b[i].length >> b[i].width;
    }
}
int sumrec(rectangle b[], int n){
    int s = 0;
    for(int i = 0; i  < n; i++){
        s+=b[i].length * b[i].width;
    }
    return s;
};

void dem(char c[]){
    int i = 0; 
    cout << "So luong ky tu cua tu trong chuoi: "; 
    while (i < strlen(c))
    {
        while (i < strlen(c) && c[i] == ' ') { i++;}
        int count = 0; 
        while (i < strlen(c) && c[i] != ' ' && c[i] != '\0') {count++;i++;}
        if( count > 0){cout << count << " ";}        
    }
    cout << endl;
    
}
char *tachphap(char c[]){
    return strrev(strchr(strrev(c), ' '));
}

int min(int mang[], int n1, int &t){
    for(int i = 0; i < n1; i++){
        if(mang[i] < t){
            mang[i] = t;
        }
    }
    return t;
}