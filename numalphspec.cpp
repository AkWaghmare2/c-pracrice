//string ="ak524#"
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
  char Name[MAX];
  int alphabet, digit , specialsymbol,i;
  alphabet=digit=specialsymbol=i=0;
  cout<<"Enter a string: ";
  cin>>Name;
  while(Name[i]!=0)
  {
    if((Name[i]>='a' && Name[i]<='z')||
       (Name[i]>='A'&& Name[i]<='Z'))
    {
        alphabet++;
    }
    else if(Name[i]>='0' && Name[i]<='9')
    {
        digit++;
    }
    else
    {
        specialsymbol++;
    }
    i++;
  }
  cout<<Name<<endl;
  cout<<"Alphabets : "<<alphabet<<endl;
  cout<<"Digit : "<<digit<<endl;
  cout<<"Special Charectors: "<<specialsymbol<<endl;
  return 0;
}