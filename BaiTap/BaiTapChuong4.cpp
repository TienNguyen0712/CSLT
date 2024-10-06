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
int main(){
    int n; 
    cout<<"Nhap so thanh phan cua mang: ";
    cin>>n;
    int k; 
    cout<<"Nhap so lon thu k cua mang: ";
    cin>>k;
    cout<<"Tong la: "; 
    int i = 0, arr[n], sum = 0, dnt = 0, dcp = 0, dhc = 0;
    while(i  < n){
        //BAI TAP 4.1
        cin>>arr[i];
        cout<<tong(arr[i])<<" "; //CAU A
        sum+=arr[i]; //CAU B
        if(sont(arr[i])) dnt++; //CAU C
        if(socp(arr[i])) dcp++; //CAU C
        if(sohc(arr[i])) dhc++; //CAU C
        i++;
    }
    cout<<"Trung binh cong: "<<(float)sum/n; //CAU B
    cout<<"So nguyen to co trong mang: "<<dnt; //CAU C
    cout<<"So chinh phuong co trong mang: "<<dcp; //CAU C
    cout<<"So hoan chinh co trong mang: "<<dhc; //CAU C
    cout<<"So lon thuc"<< k <<" cua mang : "<<
    return 0;
}
