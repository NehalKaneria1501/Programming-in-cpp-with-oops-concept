#include<iostream>
using namespace std;
int main() 
{
	int i;
    char line[150];
    int vowels,consonants,digits,spaces;
    vowels=consonants=digits=spaces=0;
    cout<<"Enter a line of string:";
    cin.getline(line,150);
    for(i=0;line[i]!='\0';++i) 
	{
        if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
			 {
            ++vowels;
        }
		 else if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z')) 
		{
            ++consonants;
        } 
		else if(isdigit(line[i])) 
		{
            ++digits;
        } 
		else if(isspace(line[i]))
		 {
            ++spaces;
        }
    }
    cout<<"Vowels:"<<vowels<<endl;
    cout<<"Consonants:"<<consonants<<endl;
    cout<<"Digits:"<<digits<<endl;
    cout<<"White spaces:"<<spaces<<endl;
    return 0;
}