#include <iostream>

using namespace std;

int main(){
    int n, temp=0, group=0;
    cin >> n;
    int flag[n] = {0}, q[n];
    for(int i=0; i<n; i++){
        cin >> q[i];
    }
    for(int i=0; i<n; i++){
        if(flag[i]==0){//make sure i person doesn't belone to any group
            flag[i]=1;//set i person has beloned to a gruop
            temp = q[i];//find i person's friend
            while(temp != i){//make sure his friend is not i
                flag[temp]=1;//set his friend has beloned to a gruop
                temp = q[temp];//find new friend
            }
            group++;
        }
    }
    cout << group << endl;

    return 0;
}
