#include<bits/stdc++.>

using namespace std;
        //Xoa phan tu thu k trong mang
    void xoaphantu(int a[], int &c, int k){
        for (int i = k; i < c; i++)
                a[i] = a[i + 1];
                c--;
    }
        //Them phan tu x vao vi tri thu k trong mang
    void themphantu(int a[], int &d, int k, int x){
        for (int j = k; i < d; i--)
            a[i] = a[i - 1];
            a[k] = x;
            d++;
    }
        //Tinh tong theo kieu tra ve
    int tinhtong(int a[], int &b){
        int s = 0, i;
        for (i = 0; i < b; i++) {s  = s + a[i]};
        return s;
    }
int main(){
    //Vidu1 //Nhap cac phan tu
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
            //Duyet cac phan tu
    for (int j = 0; j < n; i++)
    {
        /*Cau lenh duyet phan tu*/
    }
            //Tinh tong
    int s = 0;
    int n; cout<<"Nhap so phan tu cua mang: "; cin>>n;
    int b[n];
    for (int z = 0; z < n; z++)
    {
        s = s + b[z];
    }
    cout<<s;
            //Dem so phan tu thoa dieu kien
        int dem = 0;
    int n; cout<<"Nhap so phan tu cua mang: "; cin>>n;
    int c[n];
    for (int x = 0; x < n; x++)
    {
        /*Cau lenh dieu kien*/
        dem++;
    }
    cout<<dem;
    return 0;
    //MANG 2 CHIEU 
    //Nhap vao mang 2 chieu 
    int m, n;
    cout<<"Nhap so hang: "; cin>>m;
    cout<<"Nhap so cot: "; cin>>n;
    int arr[n][m];
    for (int i = 0; i < m; i++)
    for( int j = 0; j < n; j++)
        cin>>arr[i][j];
    //Xuat mang 2 chieu
    for(int c = 0; c < m; c++){
        for(int z = 0; z < n; z++)
            cout<<arr[c][z];
    }
    //Tinh tong 
    int sum = 0;
     for(int c = 0; c < m; c++){
        for(int z = 0; z < n; z++)
            sum+=arr[c][z];
    }
    cout<<sum;
    //Dem phan tu thoa dieu kien
        int dem = 0;
     for(int c = 0; c < m; c++){
        for(int z = 0; z < n; z++)
            if (/*Dieu kien bai toan*/)
                dem++;
    }
    cout<<dem;
    //Tim gia tri lon nhat
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(arr[i][j] > max) max = arr[i][j]; 
        }
    }
    cout << max;
    //Tim gia tri nho nhat
    int min = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(arr[i][j] < min) min = arr[i][j]; 
        }
    }
    cout << min;
    //Tong cac phan tu moi hang
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
           sum += arr[i][j]; 
            }
    }
    cout << sum;
    //Tong cac phan tu moi cot
    for(int j = 0; j < n; j++){
        int sum = 0;
        for(int i = 0; i < m; i++){
           sum += arr[i][j]; 
            }
    }
    cout << sum;
    //Gia tri lon nhat moi dong
    for(int i = 0; i < n; i++){
        int max = 0;
        for(int j = 0; j < m; j++){
           if(arr[i][j] > max) max = arr[i][j]; 
            }
    }
    cout << max;
    //Gia tri lon nhat moi cot
    for(int i = 0; i < n; i++){
        int max = 0;
        for(int j = 0; j < m; j++){
           if(arr[i][j] > max) max = arr[i][j]; 
            }
    }
    cout << max;
    //Tong cac phan tu tren duong cheo chinh 
    int sum = 0;
    for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    sum = sum + a[i][i];
    }
    cout << sum;
    //Tong cac so tren duong cheo phu
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i][n-i-1];
    }
    cout << sum;
    //Tong cac so thuoc tam giac duoi
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++)
        sum = sum + a[i][j];
    }
    cout << sum;
    //Tong cac so tren tam giac tren
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++)
        sum = sum + a[i][j];
    }
    cout << sum;
    //CHUOI KY TU
    char a[] = "PhAn TAn QUoc";
    char b[strlen(a)];
    int d = 0, d1 = 0;
    //CAU B
    cout << "Ma ASCII cua moi ky tu la: ";
    for (int i = 0; i < strlen(a); i++)
    {
        if(isupper(a[i])) d++;
        if(islower(a[i])) d1++;
        cout << (int) a[i] << " ";
    }
    cout << endl;
    //CAU A
    cout << "Co " << d << " chu cai thoa" << endl;
    cout << "Co " << d1 << " chu cai thuong" << endl;
    //CAU C
    for (int i = 0; i < strlen(a); i++)
    {   
        b[i] = tolower(a[i]);
        b[0] = toupper(b[0]);
        if((int)b[i-1] == 32){ b[i] = toupper(b[i]);}
    }
    cout << b;
}
