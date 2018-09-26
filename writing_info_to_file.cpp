#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;

int main()
{
    char ch;
    cout<<"\n*****WRITING INFORMATION TO FILE AND READING IT*****\n";
    ofstream fout("file.txt");
    cout<<"\nFile opened for writing successfully.";

    cout<<"\nEnter the information (Enter $ to end writing information):"<<endl;
    while(fout)
    {
        ch=getchar(); //converts enter into '\n'.
        if(ch=='$')
            break;

        fout<<ch;
    }

    fout.close();

    ifstream fin("file.txt");
    cout<<"\nFile opened for reading successfully:\n";

    while(fin)
    {
        fin.read((char*)&ch,sizeof(ch));
        if(fin)
        cout<<ch;
    }

    fin.close();

}
