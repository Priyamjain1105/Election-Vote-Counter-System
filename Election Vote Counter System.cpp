#include <iostream>
using namespace std;
//5 array for 5 leaders
int ct = 10000;
int priyam = 0;//code = 101
int piyush =0;//code 102
int anushka = 0;//code 103
int jitesh = 0;// code 104
int ishan =0;//code 105
int spoilt = 0;

//function for adding a vote
int voting(int voterid,int votefor){
    
    switch(votefor){
        case 101:cout<<"pj\n";priyam=priyam+1;    break;
        case 102:cout<<"pi\n";piyush=piyush+1;    break;
        case 103:cout<<"an\n";anushka = anushka+1;break;
        case 104:cout<<"ji\n";jitesh = jitesh+1;  break;
        case 105:cout<<"is\n";ishan = ishan+1;    break;
        default:  spoilt = spoilt+1;break;
    }}

//this functions takes vate from the user
int go_for_voting(){
    cout<<"Welcome for voting"<<endl;
    cout<<"CHOOSE YOUR LEADER\n";
    cout<<"PRESS 1: FOR PRIYAM\n";
    cout<<"PRESS 2: FOR PIYUSH\n";
    cout<<"PRESS 3: FOR ANUSHKA\n";
    cout<<"PRESS 4: FOR JITESH\n";
    cout<<"PRESS 5: FOR ISHAN\n";
    cout<<"Enter yOur Chooise:";
    int ch;
    cin>>ch;

    
    int votefor= 100+ch;
    int voterid = ct+1;
    ct = ct+1;
    voting(voterid,votefor);
    cout<<"Vote Added";

}

//function stores the value in the array and then calculates the resule 
int checking_winner(){
   int  a[5] = {priyam,piyush,anushka,jitesh,ishan};
   int max = 0;
   int index = 0;
   for(int i=0;i<5;i++){
      if (a[i]>max){
         max = a[i];
         index = i;
      }
   }
   cout<<"WINNER IS ";
   switch(index){
        case 0:cout<<" Priyam ";break;
        case 1:cout<<" Piyush ";break;
        case 2:cout<<" Anushka ";break;
        case 3:cout<<" Jitesh ";break;
        case 4:cout<<" Ishan ";break;
    }
    cout<<" WITH VOTES "<<max;
   }

//this function is to check the number of Spoilt Ballots
int spoilt_ballot(){
    cout<<"Number of Spoilt Ballot:"<<spoilt<<"\n";

}

//this function gives the result of all the participants
int all_result(){
    cout<<"       RESULT'S   \n";
    cout<<"PRIYAM: "<<priyam<<endl;
    cout<<"PIYUSH: "<<piyush<<endl;
    cout<<"ANUSHKA:"<<anushka<<endl;
    cout<<"JITESH: "<<jitesh<<endl;
    cout<<"ISHAN:  "<<ishan<<endl;
    cout<<"NUM OF SPOILT BALLOTS: "<<spoilt;
     
     }
//for makeing the code  look interface better
void deco(){
    cout<<"\n----------------------------------------------\n";
}

//this function is first interface
int interface(){
    cout<<"PRESS 1:FOR VOTING\n";
    cout<<"PRESS 2:FOR CHECKING Winner\n";
    cout<<"PRESS 3:FOR CHECKING NUM OF SPOILT BALLOT\n";
    cout<<"PRESS 4:FOR ALL RESULT\n";
    int ch2;
    cout<<"Enter Your Chooise:";
    cin>>ch2;
    deco();
    switch(ch2){
        case 1:go_for_voting();break;
        case 2:checking_winner();break;
        case 3:spoilt_ballot();break;
        case 4:all_result();break;
    }
    
} 


//
int main(){
    while(true){
        interface();
        cout<<"\n_________________________________________________\n";
    }
}



