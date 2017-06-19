#include <iostream>
#include <cmath>

using namespace std;

//this one only can use on group1 and proup2
/*
int main(){
    int x, y, a=0, b=0;
    cin >> x;
    while(x!=0){
        a += (x%10);
        x/=10;
        b += (x%10);
        x/=10;
    }
    y = abs(a-b);
    cout << y << endl;
    return 0;
}
*/

int main(){
    char x;
    int y = 0, a = 0, b = 0, cnt = 0;
    //while(cin >> x){
    while(cin.get(x)){
        if(x>= '0' && x<= '9'){
            if(cnt%2){//odd
                a = x - '0';
                y+=a;
                cnt++;
            }else{//even
                b = x - '0';
                y-=b;
                cnt++;
            }
        }else{break;}
    }
    cout << abs(y) << endl;

    return 0;
}
