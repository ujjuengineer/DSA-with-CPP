    #include<iostream>
    using namespace std;
    
    
    int main(){
        int n;
        cout << "enter n : ";
        cin >> n;
        if(n==0){
            cout << false;
            return 0;
        }
        while(n%2==0) n/=2;
        while(n%3==0) n/=3;
        while(n%5==0) n/=5;
        
        cout << (n==1);
    }