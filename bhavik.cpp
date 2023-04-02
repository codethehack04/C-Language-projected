#include<iostream>
using namespace std;
int main(){
    int choice,car,price,EMI,colour,model,new_model,secondhand,new_prize,disc,final_price;
    char n;
    cout<<"\t\t============================"<<endl;
    cout<<"\t\t\t  OLX   "<<endl;
    cout<<"\t\t============================"<<endl;
    cout<<"\t\t\t\t Welcome"<<endl;
    cout<<"1. Name : Honda \n Model: Hondacity \n Car- colour: White \n Price: 300000 "<<endl;
    cout<<"2. Name : Mahindra \n Model: thar \n Car- colour: White-grey \n Price: $2500000 "<<endl;
    cout<<"3. Name : Toyota \n Model: Supra \n Car- colour: Black \n Price: 1500000"<<endl;
    cout<<"4. Name : Hyundai \n Model: eON \n Car- colour: Shining blue \n Price: 330000 "<<endl;
    
    cout<<"Enter Your choice ";
    cin>>choice;
    switch(choice){
       case 1 :
       price=300000;
       disc=price*5/100;
       cout<<"Your discount is :"<<disc<<endl;
       EMI=price*10/100;
       cout<<"Your EMI can be :"<<EMI<<endl;
       final_price=price-disc;
       cout<<"Your final price is "<<final_price;
       break;
       
        case 2 :
       price=2500000; 

       disc=price*6/100;
       cout<<"Your discount is :"<<disc<<endl;
       EMI=price*10/100;
       cout<<"Your EMI can be :"<<EMI<<endl;
       final_price=price-disc;
       cout<<"Your final price is "<<final_price;
       break;
       
        case 3 :

       disc=price*10/100;
       cout<<"Your discount is :"<<disc<<endl;
       EMI=price*10/100;
       cout<<"Your EMI can be :"<<EMI<<endl;
       final_price=price-disc;
       cout<<"Your final price is "<<final_price;
       break;
       
        case 4 :
       disc=price*4/100;
       cout<<"Your discount is :"<<disc<<endl;
       EMI=price*10/100;
       cout<<"Your EMI can be :"<<EMI<<endl;
       final_price=price-disc;
       cout<<"Your final price is "<<final_price;
       break;
       

        default:
        cout<<"No Car is Found";
        break;
    }
    
   
    return 0;
}
