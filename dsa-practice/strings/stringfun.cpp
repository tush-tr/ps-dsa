#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "fam";
    string s2 = "ily";
    string s = "Tushar";
    // Combining Strings
    cout<<"Combining s1 and s2 : " <<s1+s2<<endl;
    // TODO: append() function
    s1.append(s2);
    cout<<"After updated: "<<s1<<endl;

    // TODO: Accessing string characters
    cout<<s1[1];

    // TODO: clear() function
    s1.clear();
    cout<<"After clearing the string: "<<s1<<endl;

    // TODO: compare() function
    cout<<"Comparing s1 and s2: "<< s1.compare(s2)<<endl;

    // TODO: empty() function
    string s_empty = s1;
    s_empty.clear();
    if(s_empty.empty()){
        cout<<"String is empty";
    }
    else if(!s_empty.empty()){
        cout<<"String is not empty";
    }

    // TODO: erase() function
    s.erase(2,2);
    cout<<"After erasing: "<<s<<endl;

    // TODO: find() function
    cout<<s2<<endl;
    cout<<s2.find("i")<<endl;

    // TODO: insert function
    string ss = "tar";
    ss.insert(1,"ush");
    cout<<"After inserting: "<<ss<<endl;

    // TODO: find the size or length of the string
    cout<<ss.size()<<endl;
    cout<<ss.length()<<endl;

    // TODO: iteration 
    for(int i=0;i<ss.length();i++){
        cout<<ss[i]<<endl;
    }

    // TODO: substring of the string substr() function
    cout<<ss.substr(1,2)<<endl;

    // TODO: String to integer stoi() function
    string num = "45";
    int x = stoi(num);
    cout<<x+5<<endl;

    // TODO: Integer to string to_string() function
    cout<<to_string(x) + "5"<<endl;

    // TODO: Sorting a string
    string s_sort = "tshroebfhre";
    sort(s_sort.begin(),s_sort.end());
    cout<<"After sorting: "<<s_sort<<endl;

    return 0;
}