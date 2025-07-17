#include <iostream>
using namespace std;

int main (){
    int amount ;
    cin>>amount;
    int count =1;
    int hundred=0,fifty=0,twenty=0,one=0;
    
    switch (count)
    {
        case 1:
        hundred=amount/100;
        amount= amount%100;
        
        case 2:
        fifty=amount/50;
        amount= amount%50;
        case 3:
        twenty=amount/20;
        amount= amount%20;
        case 4:
        one=amount/1;
        amount= amount%1;
        break;
                
    
    default:
    cout<<"invalid input";
        break;
    }
    cout<<"100 rs notes"<<hundred<<endl;
    cout<<"50 rs notes"<<fifty<<endl;
    cout<<"20 rs notes"<<twenty<<endl;
    cout<<"1 rs notes"<<one<<endl;
}