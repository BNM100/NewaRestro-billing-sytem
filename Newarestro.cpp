#include<iostream>
using namespace std;

int main(){
int a=0//first dish
,x=0//its quanty
,b=0//second dish
,y=0//its quantity
,c=0//first drink
,z=0//its quantity
,m=0//another drink
,n=0//its quantity
,next_dish//for next dish confirmation
,next_drink//for  drink confirmation
,next_drink_1//for next drink confirmation
,bill=0;//for bill printing confirmation;
int total_1=0 //total spent on first order 
,total_2=0//  total spent on second order
,total_3=0// total spent on first drink 
,total_4=0;// total spent on second drink 
string first_dish="none",second_dish="none",first_drink="none",second_drink="none";
//Displaying the menu for the customers
cout<<
"|****-------------------------MENU----------------------------*****|"<<endl;
    cout<<endl;

cout<<"(1) Newari Khana             Rs.250 only. "<<endl;
cout<<"(2) Newari simple Khaja      Rs.100 only ."<<endl;
cout<<"(3) Yomari                   Rs.150 only ."<<endl;
cout<<"(4) Choila BUFF              Rs.300 only ."<<endl;
cout<<"(5) Chatamari                Rs.100 only ."<<endl;
cout<<"(6) Shapo Mhicha             Rs.250 only ."<<endl;
cout<<"(7) Samaya waji              Rs.180 only ."<<endl;
cout<<"(8) Combo meal               Rs.600 only ."<<endl;

cout<<"eeeee~--------------------Drinks--------------------------------~eeeee"<<endl;
cout<<"(1) Chhang                     Rs.50 only."<<endl;
cout<<"(2) Aila                       Rs.100 only."<<endl;
cout<<"(3) Tho                        Rs.100 only."<<endl;
cout<<endl;

//taking order from customers
//taking first dish order
cout<<"Please enter your dish : ";
cin>>a;
cout<<"Please enter number of plate : ";
cin>>x;
cout<<endl;
//asking the customer of they want another dish or not
cout<<"Do you want another dish ? ||for yes press 1 or for no press any key:";
cin>>next_dish;
cout<<endl;
if(next_dish==1){
//taking another dish order after confirmation
cout<<"Enter another dish :";
cin>>b;
cout<<"Enter number of plate :";
cin>>y;

}else{
    cout<<endl;
    //displaying the feedback 
    cout<<"Thank you for the feed back"<<endl;
}
cout<<endl;
//asking the customer if they want drink or not?
cout<<"Do you want  drink ?||for yes press 1 or for no press any key:";
cin>>next_drink_1;
switch(next_drink_1){
    case 1:
//taking drink order from customer
cout<<"Please enter your drink:";
cin>>c;
cout<<"Please enter your number of bottle:";
cin>>z;
cout<<endl;
//asking the customer if thay want another drink ?
cout<<"Do you want another drink ? for yes press 1 or for no press any key:";
cin>>next_drink;
cout<<endl;
if(next_drink==1){
    //asking customer to take another drink order
cout<<"Enter your another drink:";
cin>>m;
cout<<"Enter number of bottle:";
cin>>n;


}else{
    cout<<endl;
    cout<<"Thank you for the feed back"<<endl;
}
default:
cout<<"Please enter valid number"<<endl;
}





//code 26
//switching the first dish order and its name
switch(a)
{
 case 1:
total_1=250*x;
first_dish="Newari Khana";
break;

case 2:
total_1=100*x;
first_dish="Newari simple khaja";
break; 

case 3:
total_1=150*x;
first_dish="Yomari";
break;


case 4:
total_1=300*x;
first_dish="Buff choila";
break;


case 5:
total_1=100*x;
first_dish="Chatamari";
break;

case 6:
total_1=200*x;
first_dish="Shapo Mhicha";
break;

case 7:
total_1=180*x;
first_dish="Samaya waji";
break;

case 8:
total_1=600*x;
first_dish="Combo meal";
break;

default:
total_1=0;

}

//switching the second dish order and its name
switch(b)
{ case 1:
total_2=250*y;
second_dish="Newari Khana";
break;

case 2:
total_2=100*y;
second_dish="Newari simple khaja";
break; 

case 3:
total_2=150*y;
second_dish="Yomari";
break;


case 4:
total_2=300*y;
second_dish="Buff choila";
break;


case 5:
total_2=100*y;
second_dish="Chatamari";
break;

case 6:
total_2=200*y;
second_dish="Shapo Mhicha";
break;

case 7:
total_2=180*y;
second_dish="Samaya waji";
break;

case 8:
total_2=600*y;
second_dish="Combo meal";
break;

default:
total_2=0;

}
//switching the first drink order and its name
switch(c)
{ case 1:
total_3=250*z;
first_drink="Chhang";
break;

case 2:
total_3=100*z;
first_drink="Aila";
break;

case 3:
total_3=100*z;
first_drink="Tho";
break; 

default:
total_3=0;


}
//switching the second drink order and its name
switch(m)
{ case 1:
total_4=250*n;
second_drink="Chhang";
break;

case 2:
total_4=100*n;
second_drink="Aila";
break; 

case 3:
total_4=100*n;
second_drink="Tho";
break;

default:
total_4=0;



}
//bill and bill printing
cout<<"Do you want bill ? ||Press 1 for yes or any key for no"<<endl;
cin>>bill;
if(bill==1){
    //displaying the name of the dish and drink with its quantity
    if(a>8){
cout<<"Your first dish is "<<first_dish<<" and its none plate/es."<<endl;
cout<<endl; }else{
    cout<<"Your first dish is "<<first_dish<<" and its "<<x<<" plate/es."<<endl;
cout<<endl;
}
if(b>8){
cout<<"Your second dish is "<<second_dish<<" and its none plate/es."<<endl;
cout<<endl; }else{
    cout<<"Your second dish is "<<second_dish<<" and its "<<y<<" plate/es."<<endl;
cout<<endl;
} if(c>4){
cout<<"Your first drink is "<<first_drink<<" and its none bottle/es."<<endl;
cout<<endl;}else{
    cout<<"Your first drink is "<<first_drink<<" and its "<<z<<" bottle/es."<<endl;
cout<<endl;
} if(m>3){
cout<<"Your second drink is "<<second_drink<<" and its none  bottle/es."<<endl;
cout<<endl;}else{
    cout<<"Your second drink is "<<second_drink<<" and its "<<n<<" bottle/es."<<endl;
cout<<endl;}
cout<<"Printing your bill.........."<<endl;
//displaying the total bill on seperate order to the customers 
cout<<"Your total bill on first dish : Rs."<<total_1<<" only."<<endl;
cout<<"Your total bill on second dish : Rs."<<total_2<<" only."<<endl;
cout<<"Your total bill on first drink : Rs."<<total_3<<" only."<<endl;
cout<<"Your total bill on second drink : Rs."<<total_4<<" only."<<endl;
cout<<endl;
//displaying the total bill to the customers 
cout<<"Your total bill :"<<total_1+total_2+total_3+total_4<<" only."<<endl;
}else{
    //displaying the total bill to the customers if they dont want bill
    cout<<"Your total bill :"<<total_1+total_2+total_3+total_4<<" only."<<endl;

}

return 0;
}