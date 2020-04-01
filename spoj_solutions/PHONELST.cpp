
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


/////////////////////////////////////// 
struct trie
{
    struct trie *arr[10];
    bool end;
};
bool isLast(struct trie *root)
{
    struct trie *node =root;
    for(ll i=0;i<10;i++)
    {
        if(node->arr[i]!=0)
            return false;
    }
    return true;
}
struct trie *getNode()
{
 struct trie *node = new trie;
 ll i;
 for(i=0;i<10;i++)
 {
    node->arr[i]=0;
 }
 node->end=false;
 return node;
}
int insert(struct trie *root,string s)
{
ll n,i,ch;
struct trie *node=root;
n=s.length();
for(i=0;i<n;i++)
{
    ch=s[i]-'0';
    if(node->arr[ch]==0)
        node->arr[ch]=getNode();
    node=node->arr[ch];
}
node->end=true;
}
bool search(string key,struct trie *root)
{
ll i,ch;
struct trie *node=root;
for(i=0;i<key.length();i++)
{
    ch=key[i]-'0';
    if(node->arr[ch]==0)
        return false;
    node=node->arr[ch];
}
if(node!=NULL && node->end==true)
return true;
else
return false;
}
int check(struct trie *root,string s)
{
    struct trie* node=root;
    ll in;
    for(ll i=0;i<s.length();i++)
    {
        in=s[i]-'0';
        if(node->arr[in]==0)
            return 0;
        node=node->arr[in];
    }
    if(node->end==true && isLast(node)==false)
        return 0;
    else
        return 1;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 /*   string keys[] = {"the", "a", "there", 
                    "answer", "any", "by", 
                     "bye", "their" }; 
    int n = sizeof(keys)/sizeof(keys[0]); 
  
    struct trie *root = getNode(); 
  
    // Construct trie 
    for (int i = 0; i < n; i++) 
        insert(root, keys[i]); 
  
    // Search for different keys 
    search("the",root)? cout << "Yes\n" : 
                         cout << "No\n"; 
    search("these",root)? cout << "Yes\n" : 
                           cout << "No\n"; 
    return 0; */
ll n,i,t,c,x;
cin>>t;
while(t--)
{
    c=0;
cin>>n;
string s[10005];
struct trie *root=getNode();
for(i=0;i<n;i++)
{
    cin>>s[i];
    insert(root,s[i]);
}
/*if(search("arya",root)==true)
cout<<"YES\n";
else
cout<<"NO\n";*/
for(i=0;i<n;i++)
{
x=check(root,s[i]);
//cout<<x<<endl;
    if(x==0)
    {
        c++;
        break;
    }
}
if(c==0)
cout<<"YES\n";
else
cout<<"NO\n";
}
}