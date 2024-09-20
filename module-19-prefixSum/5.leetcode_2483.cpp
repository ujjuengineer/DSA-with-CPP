#include<iostream>
#include<vector>
using namespace std;

int bestClosingTime(string customers) {
            int n = customers.size();
            // have to create 2 vector, ek hoga current index ke pehle ka NO's, and dusra hoga current index and uske baad ka YES

            // creating prefix NO's
            vector<int> prefixNo(n+1,0); 
            int count = 0;

            for(int i = 1; i<=n; i++){
                if(customers[i-1]=='N') count++;
                prefixNo[i] = count;
            }
            

            // creating suffix yes
            vector<int> suffixYes(n+1,0);
            count = 0;
            for(int i = n-1; i>=0; i--){
                if(customers[i]=='Y') count++;
                suffixYes[i] = count;
            }

            // finding min penaltiy
            int minPenality=INT_MAX;
            int minIndex = -1;
            for(int i = 0; i<suffixYes.size(); i++){
                if(suffixYes[i]+prefixNo[i]<minPenality){
                    minPenality = suffixYes[i]+prefixNo[i];
                    minIndex = i;
                }
            }
            return minIndex;
        }
 
int main(){
    string customers = "YYNY";
    cout<< bestClosingTime(customers);
}