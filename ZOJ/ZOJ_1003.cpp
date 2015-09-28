#include<iostream>
#include<string>

using namespace std;
int main()
{
    string strA,strB;
    while(cin>>strA>>strB)
    {   
        long numA = 0;
        for(int i=0; i<=strA.length()-1; i++)
        {
            if(strA[i] <= '9' && strA[i] >= '0')
            {
                numA = numA*10 + strA[i] - '0';
            }  
        }
        long numB = 0;
        for(int i=0; i<=strB.length()-1; i++)
        {
            if(strB[i] <= '9' && strB[i] >= '0')
            {
                numB = numB*10 + strB[i] - '0';
            }
        }
        if(strA[0] != '-' && strB[0] != '-')//++
            cout<<numA+numB<<endl;
        if(strA[0] != '-' && strB[0] == '-')//+-
            cout<<numA-numB<<endl;
        if(strA[0] == '-' && strB[0] != '-')//-+
            cout<<numB-numA<<endl; 
        if(strA[0] == '-' && strB[0] == '-')//--
            cout<<0-(numA+numB)<<endl;
    }
    return 0;
}