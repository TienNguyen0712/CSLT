#include <bits/stdc++.h>

using namespace std;

void cau1(FILE *g, int a[100], int n);
void sapxep(int a[100], int n);
void cau2(FILE *g, int a[100], int n);
void cau1a(FILE *g, int a[100], int n);
void cau3a(FILE *g, int a[100], int n);
void cau4a(FILE *g, int a[100], int n);
void cau1b(FILE *g, int b[100][100], int n1, int m1);
void cau2b(FILE *g, int b[100][100], int n1, int m1);
void cau3b(FILE *g, int b[100][100], int n1, int m1);
void cau1c(FILE *g, int b[100][100], int n1, int m1);
void cau2c(FILE *g, int b[100][100], int n1, int m1);

int main(){
    FILE *f = fopen("NUM.INP", "rt");
    FILE *g = fopen("NUM.OUT", "wt");
    int n, a[100];
    fscanf(f, "%d", &n);
    for(int i = 0; i < n; i++){
        fscanf(f, "%d", &a[i]);
    }
    //BAI TAP 8.1
    cau1(g, a, n);
    sapxep(a, n);
    cau2(g, a, n);
    //BAI TAP 8.2
    cau1a(g, a, n);
    cau3a(g, a, n);
    sapxep(a, n);
    cau4a(g, a, n);
    //BAI TAP 8.3 
    FILE *f1 = fopen("table.inp", "rt");
    FILE *g1 = fopen("table.out", "wt");
    int n1, m1, arr[100][100];
    fscanf(f1, "%d %d", &n1, &m1);
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m1; j++){
            fscanf(f1, "%d ", &arr[i][j]);
        }
    }
    cau1b(g1, arr, n1, m1);
    cau2b(g1, arr, n1, m1);
    cau3b(g1, arr, n1, m1);
    //BAI TAP 8.4
    FILE *f2 = fopen("table1.inp", "rt");
    FILE *g2 = fopen("table1.out", "wt");
        int n2, m2, arr1[100][100];
    fscanf(f2, "%d %d", &n2, &m2);
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < m2; j++){
            fscanf(f2, "%d ", &arr1[i][j]);
        }
    }
    cau1c(g2, arr1, n2, m2);
    cau2c(g2, arr1, n2, m2);
    //BAI TAP 8.5
    //BAI TAP 8.6
}

bool sont(int a){
    if( a < 2) return false;
    if(a == 2) return true;
    for(int i = 2; i < sqrt(a) + 1; i++){
        if(a % i == 0) return false;
    }
    return true;
}

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void sapxep(int a[100], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}

void cau1(FILE *g, int a[100], int n){  
    int d = 0;
    for(int i = 0; i < n;i++){
        if(sont(a[i])){
            d++;
        }
    }
    fprintf(g , "So nguyen to: %d\n", d); 
}

void cau2(FILE *g, int a[100], int n){
    fprintf(g, "Day sau khi sap xep: ");
    for(int i = 0; i < n; i++){
        fprintf(g, "%d ", a[i]);
    }
}

void cau1a(FILE *g, int a[100], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > max){max = a[i];}
    }
    fprintf(g, "\nGTLN: %d", max);
}

void cau3a(FILE *g, int a[100], int n){
    int m, c = 0;
    cout << "Nhap vao so m: "; cin >> m;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[i] + a[j] == m){
                c++;
            }
        }
    }
    fprintf(g, "\nCo %d cap so bang m", c);
}

void cau4a(FILE *g, int a[100], int n){
    fprintf(g, "\nGia tri trung vi: %d", a[n/2]);
}

void cau1b(FILE *g, int b[100][100], int n1, int m1){
    int c = 0;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m1; j++){
            if(sont(b[i][j])){c++;}
        }
    }
    fprintf(g, "So nguyen to: %d", c);
}

void cau2b(FILE *g, int b[100][100], int n1, int m1){
    int max = INT_MIN;
    for(int i = 0; i < n1; i++){
        int s = 0;
        for(int j = 0; j < m1; j++){
            s+= b[i][j];
        }
        if(s > max){max = s;}
    }
    fprintf(g, "\nGTLN trong Tong: %d", max);
}

void cau3b(FILE *g, int b[100][100], int n1, int m1){
    int min = INT_MAX;
    for(int j = 0; j < m1; j++){
        int s = 0;
        for(int i = 0; i < n1; i++){
            s+= b[i][j];
        }
        if(s < min){min = s;}
    }
    fprintf(g, "\nGTNN trong Tong: %d", min);
}

int gtln(int b[100][100], int n1, int m1){
    int max = INT_MIN;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m1; j++){
            if(b[i][j] > max){max = b[i][j];}
        }
    }
    return max;
}


void cau1c(FILE *g, int b[100][100], int n1, int m1){
    int max = gtln(b, n1, m1), d = 0; 
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m1; j++){
            if(b[i][j] == max){d++;}
        }
    }
    fprintf(g, "Co %d gia tri bang max la %d", d, max);
}

void cau2c(FILE *g, int b[100][100], int n1, int m1){
    fprintf(g, "\nTong cua cac cot: ");
    for(int j = 0; j < m1; j++){
        int s = 0;
        for(int i = 0; i < n1; i++){
            s+=b[i][j];
        }
        fprintf(g, "%d ", s); 
    }
}