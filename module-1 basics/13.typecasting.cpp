#include<iostream>
using namespace std;
int main(){
    // we can directly change float into int as follow
    float f = 6.9;
    int i = f;
    cout<<i<<endl ; // but this is not the conventional meathod

    // how to convert float into int
    float num1 = 8.9;
    int num2 = (int) num1;
    cout<<"* (int)num2, (where num2 = 8.9) is : " <<num2 << endl;

    bool x = true;
    cout<<"* we can add bool and number : true + 3 = "<<x+3<<endl; // ans = 4; yaha pehle true apna typecasting kr k integer me transform ho rha hai and then +3 kr rha hai

    // we can do the same as follow
    bool z1 = false;
    int z2 = (int)z1; // here we converted bool into intger
    cout<< "* flase + 6 = "<<z2+6<<endl; // ans = 6

    // adding char and number
    char ch = 'a';
    cout<<"* a+4 = "<< ch + 4 << endl;

    // adding string and number
    // we cannot add string and number but we can add two strings or string and ch
    string str = "ujjwal ";
    string str2 = "is a don number ";
    char ph = '1';
    cout<<str+str2+ph<<endl;
    
    // cout<<"ujjwal is a " + "don"; * we can't add 2 string in this way
}