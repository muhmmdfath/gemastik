#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;

    getline(cin, text);

    if (text.length()< 50){
        for(int i=0; i<text.length(); i++)
            if(text[i]=='+'){
                text[i-1]=toupper(text[i-1]);
                text.erase(i, 1);
            }else if(text[i]=='-'){
                text[i-1]=tolower(text[i-1]);
                text.erase(i, 1);
            }

        cout<<text<<endl;
    }else{
        cout<<"maksimal 49 karakter";
        return main();
    }
    return 0;
}