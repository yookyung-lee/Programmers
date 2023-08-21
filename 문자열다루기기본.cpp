#include <string>
#include <vector>
#include <cctype> //C++
using namespace std;

bool solution(string s) {
    bool answer = true;
    bool digit=true;
    bool len=true;
    
    if (s.length()!=4 && s.length()!=6){
        len=false;
    }
    
    for (int i=0; i<s.length(); i++){
        if ((isdigit(s[i]))==0){
            digit=false;
        }
    }
    
    if (len!=true || digit!=true){
        answer=false;
    }
    return answer;
}