#include<bits/stdc++.h>
using namespace std;
int tong(int b){
    //CAU A
    int i = b, s = 0, d;
    while(i != 0){
        s += i%10;
        i/=10;
    }
    return s;
}
bool sont(int a){
    //CAU C
    int d = 0;
    if (a < 2) return false;
    for(int i  = 1; i <= a; i++){
        if(a % i == 0) d++;
    }
    return d == 2;
}
bool socp(int a){
    //CAU C
    int i = 0;
    while(i <= a){
        if(i * i == a) return a > 0;
        i++;
    }
}
bool sohc(int a){
    //CAU C
    int s = 0;
    for(int i = 1; i <= sqrt(a); i++){
        if(a % i == 0){
            s+=i;
            if(s/i != i){
                s+=a/i;
            }
        }
    }
    return s - a == a;
}
int ucln(int a, int b){
    //CAU G
    if(b == 0) return a;
    return ucln(b, a%b);
}
void xuat(int a[], int n){
    //CAU G
    int d = 0;
        for(int j = 0; j < n; j++){
        for(int z = j+1; z < n; z++){
            if(ucln(a[j], a[z]) == 1) d++;
        }
    }
    cout<<"Cap so nguyen to cung nhau: "<<d;
}
void swap(int &a, int &b){
    //CAU D
    int temp = a;
    a = b;
    b = temp;
}
void sapxepmang(int arr[], int n){
    //CAU D
    for(int j = 0; j < n; j++){
        for(int z = j+1; z < n; z++){
            if(arr[j] < arr[z]) swap(arr[j], arr[z]);
        }
    }
}
bool sont(int a){
    //CAU F
    int d = 0;
    if(a < 1) return false;
    for (int i = 1; i <= a; i++)
    {
        if(a % i == 0) d++;
    }
    return d == 2;
}
int sonnguoc(int a){
    //CAU F
    int sum = 0;
    for (int i = a; i != 0; i/=10)
    {
       sum = sum*10 + i%10; 
    }
    return sont(sum);
}
int timmangdainhat(int arr[], int n){
    //BAI TAP 4.4 CAU A
    int dp[n];
    for( int i = 0; i < n; i++){
        dp[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {   
            int max = arr[j] + 1;
            if(arr[i] > max) max = arr[i]; 
        
    }
    int re = dp[0];
    for(int i = 0; i < n; i++){
        if(dp[i] > re) re = dp[i];
    }
    return re;
    }
}
int tinhtong(int a[], int b){
    //BAI TAP 4.4 CAU B
    int m, c = 0;
    cout<<"Nhap tong n muon tim: "; cin>>m;
    for(int j = 0; j < b; j++){
        for(int z = j+1; z < b; z++){
            if(a[j] + a[z] == m) c++;
        }
    }
    return c;
}
int cacsokhacnhau(int arr[], int n){
    //BAI TAP 4.4 CAU D
    int c[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; j++)
        {
            if(arr[i] != arr[j]) c[i] = arr[i];            
        }
    }
    sapxepmang(c, n);
    return c[0]*c[1]*c[2];
}
int giatrikhac(int a[], int b){
    //BAI TAP 4.4 CAU E
    int c = 0;
    for(int j = 0; j < b; j++){
        for(int z = j+1; z < b; z++){
            if(a[j] != a[z]) c++;
        }
    }
    return c;
}
int xuathiennhieunhat(int a[], int b){
    //BAI TAP 4.4 CAU F
    int m;
    for(int j = 0; j < b; j++){
        for(int z = j+1; z < b; z++){
            if(a[j] == a[z]) m = a[j];
        }
    }
    return m;
}   
int tinhTong(int arr[], int n) {
    //BAI TAP 4.7 CAU A
    if (n == 1) return arr[0];
        return arr[0] + tinhTong(arr + 1, n - 1);
}
int MaxArr(int arr[], int n){
    //BAI TAP 4.7 CAU B
    if(n == 0) return -1;
    if(n == 1) return arr[0];
    if(arr[n- 1] > MaxArr(arr, arr[n - 1])){
        return arr[n- 1];
    } else {
        return MaxArr(arr, arr[n- 1]);
    }
}
int Demnt(int arr[], int n, int b){
    //BAI TAP 4.7 CAU C
    if(n == 0) return -1; 
    if(sont(Demnt(arr, arr[n -1], b+1))){
        return b++;
    } 
}
void nhap(int a[][205], int n, int m){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
        cin >> a[i][j];
}
void tong(int a[][205], int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    sum = sum + a[i][i];
    }
    cout << sum;
}
void tongphu(int a[][205], int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i][n-i-1];
    }
    cout << sum;
}
void tongtamgiacduoi(int a[][205], int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++)
        sum = sum + a[i][j];
    }
    cout << sum;
}
void tongtamgiactren(int a[][205], int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++)
        sum = sum + a[i][j];
    }
    cout << sum;
}
void tong(int a[][205], int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
        sum += a[i][j];
    }
    cout << sum;
}
bool soA(int n){
    int sum = 0, d = 0, t;
    for(int i = n; i != 0; i/=10){
        d++;
        t = i % 10;
        sum+= pow(t, d);
    }
    return sum == n;
}
void timsoA(int a[][205], int n, int m){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    if(soA(a[i][j])) cout << a[i][j];
}
void timMax(int a[][205], int n, int m){
    int max = a[0][0];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    if(a[i][j] > max ) cout << a[i][j];
}
void timMin(int a[][205], int n, int m){
    int min = a[0][0];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    if(a[i][j] < min ) cout << a[i][j];
}
bool sont(int n){
    if (n < 2) return false;
    for(int i = 2; i < sqrt(n) + 1; i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
void timMinnguyento(int a[][205], int n, int m){
    int min = a[0][0];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    if(sont(a[i][j]) && a[i][j] < min ){ min = a[i][j];}
    cout << min;
}
void tinhtongmoidong(int a[][205], int n, int m){
    for(int i = 0; i  < n; i++){
        int s = 0;
        for(int j = 0; j < m; j++){
            s+=a[i][j];
        }
            cout << s;
    }
}
void tinhtongmoicot(int a[][205], int n, int m){
    for(int i = 0; i  < m; i++){
        int s = 0;
        for(int j = 0; j < n; j++){
            s+=a[i][j];
        }
        cout << s;
    }
}

int main(){
    int n; 
    cout<<"Nhap so thanh phan cua mang: ";
    cin>>n;
    int k; 
    cout<<"Nhap so lon thu k cua mang: ";
    cin>>k;
    cout<<"Tong la: ";
    cout<<"So nguyen to trong mang khi dao nguoc cung la so nguyen to: "; 
    int i = 0, arr[n], sum = 0, dnt = 0, dcp = 0, dhc = 0;
    while(i  < n){
        //BAI TAP 4.1
        cin>>arr[i];
        cout<<tong(arr[i])<<" "; //CAU A
        sum+=arr[i]; //CAU B
        if(sont(arr[i])) dnt++; //CAU C
        if(socp(arr[i])) dcp++; //CAU C
        if(sohc(arr[i])) dhc++; //CAU C
        if(sont(arr[i])){
            //CAU F
            if(sonnguoc(arr[i])){
                cout<<arr[i]<<" ";
            }
    }
        i++;
    }
    cout<<"Trung binh cong: "<<(float)sum/n; //CAU B
    cout<<"So nguyen to co trong mang: "<<dnt; //CAU C
    cout<<"So chinh phuong co trong mang: "<<dcp; //CAU C
    cout<<"So hoan chinh co trong mang: "<<dhc; //CAU C
    cout<<"Nhap so lon thu k: "; cin>>k; //CAU D
    sapxepmang(arr, n); //CAU D
    cout<<"So lon thuc"<< k <<" cua mang : "<<arr[k]; //CAU D
    //CAU E


    xuat(arr, n); //CAU G
    //BAI TAP 4.2
    //BAI TAP 4.3
    //BAI TAP 4.4
    //CAU A
    cout<<timmangdainhat(arr, n);
    //CAU B
    cout<<tinhtong(arr, n)<<endl;
    //CAU C
    sapxepmang(arr, n);
    cout<<arr[0]<<" "<<arr[n-1];
    //CAU D
    cout<<"Tich 3 so lon nhat: "<<cacsokhacnhau(arr, n);
    //CAU E
    cout<<giatrikhac(arr, n)<<endl;
    //CAU F
    cout<<"Phan tu xuat hien nhieu nhat: "<<xuathiennhieunhat(arr, n)<<endl;
    //BAI TAP 4.5
    //BAI TAP 4.6
    //BAI TAP 4.7
    //cAU A
    cout<<tinhTong(arr, n);
    //CAU B
    cout<<MaxArr(arr, n);
    //CAU C
    cout<<Demnt(arr, n, 0);
    //BAI TAP 4.8
    //CAU A
    int n, m;
    cin >> n >> m;
    int ar[205][205];
    nhap(ar, n, m);
    int sum = 0, d = ar[0][0] + ar[n-1][m-1] + ar[n-1][0] + ar[0][m-3];
    for(int i = 0; i < n; i++){
        for (int j = 0; i < n; j++)
        {
            sum+= ar[0][j] + ar[n-1][j] + ar[i][0] + ar[i][n-1];
        }
    }
    cout << sum - d;
    //CAU B
    tong(ar, n, m);
    //CAU C
    tongphu(ar, n, m);
    //CAU D
    tongtamgiactren(ar, n, m);
    //CAU E
    tongtamgiacduoi(ar, n, m);
    //CAU F
    //BAI TAP 4.9
    //CAU A
    tong(ar, n, m);
    //CAU B
    timsoA(ar, n, m);
    //CAU C
    timMax(ar, n, m);
    //CAU D
    timMin(ar, n, m);
    //CAU E
    tinhtongmoidong(ar, n, m);
    //CAU F
    tinhtongmoicot(ar, n, m);
    //CAU G
    timMinnguyento(ar, n, m);
    //BAI TAP 4.10
    //CAU A
    //CAU B
    //CAU C
    //CAU D
    //CAU E
    //CAU F
    //BAI TAP 4.11
    //CAU A
    for(int i = 0; i < n; i++){
        sort(ar[i], ar[i] + m);
    }; //Dùng hàm
    //CAU B
    for(int j = 0; i < n; i++){
        sort(ar[i], ar[i] + n);
    }; //Dùng hàm
    //CAU C
    //BAI TAP 4.12
    
    //BAI TAP 4.13

    return 0;

}
