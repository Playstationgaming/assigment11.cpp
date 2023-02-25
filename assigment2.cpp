#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& s) {
vector<vector<int>> answer;
int j=0;
answer.push_back(s[0]);
for(int i=1;i<s.size();i++)
{
if(answer[j][1]>=s[i][0])
{
answer[j][1]=max(answer[j][1],s[i][1]);
}else{
j++;
answer.push_back(s[i]);
}
}
return answer;
}
int main()
{
vector<vector<int>> mat={{1,4},{2,3},{5,8},{6,9}};
vector<vector<int>> answer=merge(mat);
for(int i=0;i<answer.size();i++)
{
cout<<answer[i][0]<<" "<<answer[i][1]<<endl;
}
}