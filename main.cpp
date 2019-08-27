#include <iostream>

using namespace std;

int ReverseWord(string str, int strSize, int len){
     string tempStr = "";
     if(len >= strSize){
       return 0;
     }
     else{
        while(str[len] != ' ' && len < strSize){
          tempStr.push_back(str[len]);
          len++;
        }
        int tempStrSize = tempStr.length();
        for(int i = 0; i < tempStrSize / 2; i++){
           swap(tempStr[i], tempStr[tempStrSize - i - 1]);
        }
        cout << tempStr << " ";
        return ReverseWord(str, strSize, len + 1);
     }
}

int main()
{
    string str;
    cout << "Enter the String:";
    getline(cin, str);
    int strSize = str.length();
    ReverseWord(str, strSize, 0);
    return 0;
}
