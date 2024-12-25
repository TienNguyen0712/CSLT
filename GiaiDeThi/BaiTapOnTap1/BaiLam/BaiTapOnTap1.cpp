#include <bits/stdc++.h>

using namespace std;

//Mang 1 chieu
int timMax(long a[], long n, int &max);
int timMin(long a[], long n, int &min);
int demsoHC(long a[], long n, int &c);
int demsoNT(long a[], long n, int &c1);
int demSum(long a[], long n, int &c2);
void sapxep(long a[], long n);

//Mang 2 chieu
int demCP(long b[500][500], long dong, long cot, int &c3);
long timSoLon(long b[500][500], long dong, long cot, int &max1);
long timSoNho(long b[500][500], long dong, long cot, int &min1);
int demDongNt(long b[500][500], long dong, long cot, int &c4);
int demFib(long b[500][500], long dong, long cot, int &c5);

int main(){
    //Mang 1 chieu
    FILE *in, *out;
    in  = fopen("num.txt", "r");
    out = fopen("num.out.txt", "w");
    
    long n;
    fscanf(in, "%d", &n);
    long a[n];
    for(int i = 0 ; i < n; i++){
        fscanf(in, "%d", &a[i]);
    }
    
    int max, min, c = 0, c1 = 0, c2 = 0;
    fprintf(out, "GTLN: %d, ", timMax(a, n, max));
    fprintf(out, "GTNN: %d\n", timMin(a, n, min));
    fprintf(out, "So luong so nguyen to: %d\n", demsoNT(a, n, c1));
    fprintf(out, "So luong so hoan chinh: %d\n", demsoHC(a, n, c));
    fprintf(out, "So luong so cong nhau bang 51023: %d\n", demSum(a, n, c2));
    sapxep(a, n);
    fprintf(out, "So co gia tri tai n/2: %d\n", a[n/2]);

    fclose(in);
    fclose(out);

    //Mang 2 chieu
    FILE *in1, *out1;
    in1  = fopen("table.txt", "r");
    out1 = fopen("table.out.txt", "w");
    
    long dong, cot;
    fscanf(in1, "%d %d", &dong, &cot);
    long b[500][500];
    for(int j = 0; j < dong; j++){
        for(int k = 0; k < cot; k++){
            fscanf(in1, "%d" , &b[j][k]);
        }
    }

    int max1 = INT_MIN, min1 = INT_MAX, c3 = 0, c4, c5 = 0;
    fprintf(out1, "So luong so chinh phuong la: %d", demCP(b, dong, cot, c3));
    fprintf(out1, "\nGia tri nho nhat: %d", timSoNho(b, dong, cot, min1));
    fprintf(out1, "\nGia tri lon nhat: %d", timSoLon(b, dong, cot, max1));
    fprintf(out1, "\nDong co chua so nguyen to: %d", demDongNt(b, dong, cot, c4));
    fprintf(out1, "\nSo luong so fibonanci: %d", demFib(b, dong, cot, c5));

    fclose(in1);
    fclose(out1);

    return 0;
}

int timMax(long a[], long n, int &max){
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int timMin(long a[], long n, int &min){
    min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

bool sont(long a){
    if(a < 2) return false;
    for(int i = 2; i < sqrt(a)+1; i++){
        if(a % i == 0) return false;
    }
    return true;
}

bool sohc(long a){
    int s = 0;
    if(a < 0) return false;
    for(int i = 1; i < sqrt(a) + 1; i++){
        if(a % i == 0){
            s+=i;
        }
    }
    return s == a;
}

void swap(long &a, long &b){
    long t = a; 
    a = b;
    b = t;
}

void sapxep(long a[], long n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}

bool sofib(long a){
    long fn1 = 1, fn2 = 0, fn;
    while(fn < a){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
    }
    return fn == a;
}

bool socp(long a){
    long cp = sqrt(a);
    return cp*cp == a;
}


int demsoHC(long a[], long n, int &c){
    for(int i =0; i < n; i++){
        if(sohc(a[i])){
            c++;
        }
    }
    return c;
}

int demsoNT(long a[], long n, int &c1){
    for(int i =0; i < n; i++){
        if(sohc(a[i])){
            c1++;
        }
    }
    return c1;
}

int demSum(long a[], long n, int &c2){
    for(int i = 0; i < n; i++){
        for(int j = 1; i < n; j++){
            if(a[i] + a[j] == 51023){
                c2++;
            }
        }
    }
    return c2;
}

int demCP(long b[500][500], long dong, long cot, int &c3){
    for(int i = 0; i < dong; i++){
        for (int j = 0; i < cot; j++)
        {
            if(socp(b[i][j])){
                c3++;
            }
        }
    }
    return c3;
}
long timSoLon(long b[500][500], long dong, long cot, int &max1){
    for(int i = 0; i < dong; i++){
        int min = INT_MAX;
        for (int j = 0; i < cot; j++)
        {
            if(b[i][j] < min){
                min = b[i][j];
            }
            if(min > max1){
                max1 = min;
            }
        }
    }
    return max1;
}
long timSoNho(long b[500][500], long dong, long cot, int &min1){
    for(int i = 0; i < dong; i++){
        int max = INT_MIN;
        for (int j = 0; i < cot; j++)
        {
            if(b[i][j] > max){
                max = b[i][j];
            }
            if(max > min1){
                min1 = max;
            }
        }
    }
    return min1;
}

int demDongNt(long b[500][500], long dong, long cot, int &c4){
    for(int i = 0; i < dong; i++){
        c4 = 0;
        for (int j = 0; i < cot; j++)
        {
            if(sont(b[i][j])){
                c4++;
            }
        }
    };
    return c4;    
}

int demFib(long b[500][500], long dong, long cot, int &c5){
    for(int i = 0; i < dong; i++){
        for (int j = 0; i < cot; j++)
        {
            if(sofib(b[i][j])){
                c5++;
            }
        }
    }
    return c5;
}