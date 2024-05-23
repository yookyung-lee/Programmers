#include <string>
#include <vector>
#include <map>

using namespace std;
map<string,int> n;

int solution(string s){
    string answer="";
    
    m["zero"] = 0;
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;
    m["four"] = 4;
    m["five"] = 5;
    m["six"] = 6;
    m["seven"] = 7;
    m["eight"] = 8;
    m["nine"] = 9;
    
    string temp = "";
    for (char c:s){
        if(isdigit(c)) answer+=c; //숫자면 answer에 넣고
        else temp+=c; //숫자가 아니면 temp에 넣는다
        
        if (n.find(temp)!=n.end()){
            answer+=to_string(n[temp]);
            temp="";
        }
    }    
    return stoi(answer);   
    
}