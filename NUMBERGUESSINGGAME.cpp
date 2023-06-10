#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std ;
void gameplay(int n,int p ,int &score,int round ){
    if(p== 0 ) return ;
     int gueses = n ;
    int userguess;
    srand(time(0));
    int hidden  = (rand()%10)+1; 
    int count = 0 ; 
   
    cout<< " round number  "<<round<<endl;
    cout<<"you have "<<gueses<<" guess "<<endl;
    cout<<" start trying"<<endl;
    cout<<"enter your gueses ";
    while(gueses--){
        cin>>userguess;
     
        if(userguess== hidden){
            cout<<"you won! in "<<n-gueses<<"tries!"<<endl;
            score++;
         break;
             
        }else if(userguess<hidden){
            cout<<"too low!"<<endl;
        }else{
            cout<<"too high!"<<endl;
        }
        
    } 
   
     gameplay(n,p-1,score,round+1);
}
int main(){
    cout<<" --------WELCOME TO NUMBER GUESSING GAME------- "<<endl;
    int p,n ; 
    int score=0;
    cout<<"Enter rounds ";
    cin>>p;
    cout<<"Enter guesses ";
    cin>>n ;
    gameplay(n,p,score,1);
    cout<<"your score is " <<score;
    return 0;
}