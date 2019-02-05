#include <iostream>
#include <string>
using namespace std;
int main(){
    string text,alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int displacement;
    cout<<"Input a text:";
    getline(cin, text);
    cout<<"By how many you want to displace numbers?:";
    cin>>displacement;
    for(int i=0;i<text.size(); i++){
        if(text.at(i)==32)
            cout<<" ";
        else{
            for(int j=0; j<alpha.size(); j++){
                if(text.at(i)==alpha.at(j)){
                    if(isupper(text.at(i)))
                        cout<<alpha.at((j+displacement)%26);
                    else
                        cout<<alpha.at(((j+displacement)%26)+26);
                }
            }
        }
    }
}
