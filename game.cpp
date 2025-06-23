#include <iostream>
#include <ctime>
using namespace std;
int main(){
cout << "-----------------game--------------------"<<endl<<endl;
   


    
    srand(time(NULL));
    char sel;
    char cpu_s;
    char play;
    do{
    int num = (rand()%3 +1);
    cout<<"ENTER      R    for rock"<<endl;
    cout<<"ENTER      P    for paper"<<endl;
    cout<<"ENTER      S    for scissor"<<endl;
    cout<<": ";
    cin >> sel;
    while (sel != 'p' && sel != 'P' && sel != 's' && sel != 'S' && sel != 'r' && sel != 'R'){
        cout<<"PLEASE ENTER ONLY ( P, R or S): "<<endl;
        cin>>sel;
    }
    sel = tolower(sel);
    switch(num){
        case 1 :
            cpu_s = 'r';
            if(sel == cpu_s){
                cout<<"DRAWN, both chose Rock";
            }else if (sel == 'p'){
                cout<<"YOU WIN, you chose Paper and CPU chose Rock";
            }else{
                cout<<"YOU LOSE, you chose Scissor and CPU chose Rock";
            }
            break;
        case 2 :
            cpu_s = 'p';
            if(sel == cpu_s){
                cout<<"DRAWN, both chose Paper";
            }else if (sel == 's'){
                cout<<"YOU WIN, you chose Scissor and CPU chose Paper";
            }else{
                cout<<"YOU LOSE, you chose Rock and CPU chose Paper";
            }
            break;
        case 3 :
            cpu_s = 's';
            if(sel == cpu_s){
                cout<<"DRAWN, both chose Scissor";
            }else if (sel == 'r'){
                cout<<"YOU WIN, you chose Rock and CPU chose Scissor";
            }else{
                cout<<"YOU LOSE, you chose Paper and CPU chose Scissor";
            }
            break;
    }
        cout<<endl;
        cout << "Play again? (Y/N): ";
        cin >> play;
    }while(play == 'y' || play == 'Y');

    cout<<"-------------------end-------------------";
return 0;
}
