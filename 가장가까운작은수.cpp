#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

map <char,int> temp;

vector <int>solution(string s){
    string s1= " ";
    s1+=s;

    int s1len= s1.length();
    
    vector<int> answer;
    for (int i=1; i<len; i++){
        if (temp.find(s1[i])==temp.end()){
            temp[s1[i]]=i;
            answer.emplace_back(-1);
        }
        else
        {
            answer.emplace_back(i-temp[s1[i]]);
            temp[s1[i]]=i;
        }
    }
    return answer;
    
    
}
