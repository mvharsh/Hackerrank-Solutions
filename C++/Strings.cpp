#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2;
    string s3;
    cin>>s1>>s2;
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    s3=s1;
    s3[0]=s2[0];
    s3+=' ';
    s2[0]=s1[0];
    s3+=s2;
    cout<<s3;
    return 0;
}
