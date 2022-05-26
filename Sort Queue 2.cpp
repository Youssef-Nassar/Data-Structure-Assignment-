#include <iostream>
#include <queue>
#include<string>
using namespace std;
  
void showpq(priority_queue<int, vector<int>, greater<int> > gq){
    priority_queue<int, vector<int>, greater<int> > g = gq;
    while (!g.empty()) {
        cout<< char(g.top());
        g.pop();
    }
}
  

int main()
{
    priority_queue<int, vector<int>, greater<int> > q;
    string s = "zhYauc@MapaOwp!";
    const int SIZE = s.length();
    

    for(int i=0; i<SIZE; i++)
        q.push(toupper(int(s[i])));
        
    showpq(q);   
    
  
    return 0;
}
