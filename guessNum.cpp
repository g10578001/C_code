#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ans, guess;
    char again='y';
    srand(time(NULL));
    while(again == 'y' || again == 'Y'){
        //step1:PC chose a number (1~1000)
        ans = rand()%1000+1;
        //step2:User guess a number
        cout << "Please guess a number:" << endl;
        while(true){
            cin >> guess;
            //step3:If correct, print BINGO, jump to step7
            if(guess == ans)break;
            //step4:if guess too small, print more
            if(guess < ans)cout << "MORE" << endl;
            //sstep5:if guess too big, print less
            if(guess > ans)cout << "Less" << endl;
            //step6:go back to 2
        }
        cout << "BINGO"<< endl;
        //step7: play again??
        cout << "Input /'y/' or /'Y/' to play again. " << endl;
        cout << "Input other key to leave."  << endl;
        //step8: input y or Y, go to step1;
        cin >> again;
    }
    //step9, print BYE BYE
    cout << "BYE BYE" << endl;
    return 0;
}
