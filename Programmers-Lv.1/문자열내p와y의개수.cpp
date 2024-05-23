#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pn=0, yn=0;
    string ss=" ";
    for (int i=0; i<s.size(); i++){
        ss+=tolower(s[i]);
    }

    for (int i=0; i<ss.size(); i++){
        if (ss[i]=='p'){
            pn+=1;
        }
        
        if (ss[i]=='y'){
            yn+=1;
        }
    }
    
    if (pn==yn) answer=true;
    else answer=false;
    if (pn==0&& yn==0) answer=true;

    return answer;
}