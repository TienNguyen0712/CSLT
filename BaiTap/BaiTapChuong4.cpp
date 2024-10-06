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
    
    return 0;
}
