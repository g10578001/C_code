#include <iostream>

using namespace std;

int main(){
    int n, x, y, firstDir;
    int num[50][50], dir[2500];
    cin >> n >> firstDir;
    //set array value of direction;
    int step = 1, i=1, d=firstDir;
    for(;step<n; step++){
        for(int k = 0; k<step; k++){
            dir[i]=d;
            i++;
        }
        d++;
        if(d>3)d=0;
        for(int k = 0; k <step; k++){
            dir[i]=d;
            i++;
        }
        d++;
        if(d>3)d=0;
    }
    for(int k=1; k<n; k++){
        dir[i]=d;
        i++;
    }

    //cin all array number
    for(x=1; x<=n; x++){
        for(y=1; y<=n; y++){
            cin >> num[x][y];
        }
    }

    //cout center value(first value)
    x = y = (n+1)/2;
    cout << num[x][y];

    for(i=1; i<(n*n); i++){
        switch (dir[i])//move rule
        {
            case 0 ://left
                y = y-1;
                cout << num[x][y];
                break;
            case 1 ://up
                x = x-1;
                cout <<num[x][y];
                break;
            case 2 ://right
                y = y+1;
                cout << num[x][y];
                break;
            case 3 ://down
                x = x+1;
                cout << num[x][y];
                break;
        }


        }
        cout << endl;
        return 0;
}




