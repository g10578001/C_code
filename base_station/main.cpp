#include <iostream>

using namespace std;

int main(){
    int n, k, temp, localMin, localMax, ans = 0;
    int p[50000];
    float range , bound_L, bound_H;
    cin >> n >> k; //讀取n個服務站，k個基地台
    for(int i=0; i<n; i++){//讀每個服務站的位置
        cin >> p[i];
    }
    //服務站位置排序(小到大)
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(p[j]<p[i]){
            temp = p[i];
            p[i]=p[j];
            p[j]=temp;
            }
        }
    }
    range = p[n-1]- p[0];
    int j=0, flag = 0;
    for(int i=0; i<k; i++){
        bound_L = p[0] + (i*range/k);
        bound_H = p[0] + ((i+1)*range/k);
        while(p[j]>= bound_L && p[j]<= bound_H){
            if(flag == 0){
                localMin = p[j];
                flag = 1;
            }
            j++;
        }
        flag = 0;
        localMax = p[j-1];
        temp = localMax-localMin;
        if(temp > ans){ans = temp;}
    }
    cout << ans << endl;
    return 0;
}
