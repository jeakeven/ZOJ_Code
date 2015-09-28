#include<iostream>
#include<string>

using namespace std;

bool compare(string tree1,string tree2)
{
         
        if(tree1[0]!=tree2[0]) return false;
        if(tree1.size()!=tree2.size()) return false;
        string s1,s2;
        string s3,s4;
        for(int i = 1; i <tree1.size() ; i++)
        {
                if(tree1[i] > tree1[0]) s1.push_back(tree1[i]);//¸ùÓÒº¢×ÓÈëÊ÷Ë³Ðò
                else s2.push_back(tree1[i]);//¸ù×óº¢×ÓÈëÊ÷Ë³Ðò
                if(tree2[i] > tree2[0]) s3.push_back(tree2[i]);
                else s4.push_back(tree2[i]);
        }
        if(s1 == s3 && s2 == s4) return true;
        else return false;
}
int main()
{
        int n;
        while(cin>>n)
        {
                if(n==0)break;
                string tree_1;
                cin>>tree_1;
                string tree;
                for(int i = 0 ; i < n ; i++)
                {
            cin>>tree;
                        if(compare(tree_1,tree))
                                cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;
                }
        }
}