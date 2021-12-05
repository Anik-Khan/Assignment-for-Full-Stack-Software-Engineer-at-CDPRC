/// Name: Monjura Moula Anik

#include<bits/stdc++.h>


using namespace std;

#define pi              acos(-1.0)
#define mem(x,v)        memset(x,v,sizeof(x))
#define pb              push_back
#define f               first
#define s               second
#define pause           system("pause")
#define srt(v)          sort(v.begin(),v.end())
#define rev(v)          reverse(v.begin(),v.end())
#define LL              long long
#define ULL             unsigned long long
#define SIZE            100000000

int main(void)
{
    int n, result=0;

    map<string, string> employees;
    map<string, string> files;

    cout<<"Enter the number of employees: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        pair<string, string> tempVer;
        cout<<"\nEmployee ID: ";
        cin>>tempVer.f;
        cout<<"Employee Name: ";
        cin>>tempVer.s;
        employees.insert({ tempVer.f, tempVer.s });
        employees.insert({ tempVer.s, tempVer.f });
    }

    cout<<"\nEnter the number of files: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        pair<string, string> tempVer;
        cout<<"\nFile Name: ";
        cin>>tempVer.f;
        cout<<"File Type: ";
        cin>>tempVer.s;
        if (files.find(tempVer.s) != files.end()){
            continue;
        }else{
            if(employees.find(tempVer.f) != employees.end()){
                result++;
                files.insert({ tempVer.s, tempVer.f });
            }
        }
    }

    cout<<"\nResult: "<<result<<endl;
    return 0;
}




