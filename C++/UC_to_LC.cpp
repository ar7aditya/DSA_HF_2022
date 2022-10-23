#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main (){

    //Lower case to upper case

    string str="isanfuahdy7wga";
    
    for(int i=0; i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -=32;  // logic 'a'-'A'=32;
        }
    }

    cout<<str<<endl;


    string str1="NUSJNFUISEBFUSBEF";

    //Upper case to lower case ]]
    for (int i= 0; i<str1.size(); i++){
        if (str1[i]>='A' && str1[i]<='Z'){
            str1[i] +=32;
        }
    }

    cout<<str1<<endl;


    //Using STL to change string to lower case and to upper case and to sort string alphabatically.

     string s1="dsjfnusdnbfuenf";

     sort(s1.begin(), s1.end());

     transform(s1.begin(), s1.end(), s1.begin(), :: toupper);

     cout<<s1<<endl;


     string s2 ="JDSFNIUFEUUIANDNUAMKX";

     sort(s2.begin(),s2.end());
     
     transform(s2.begin(), s2.end(), s2.begin(), :: tolower);

     cout<<s2<<endl;


    return 0;
}