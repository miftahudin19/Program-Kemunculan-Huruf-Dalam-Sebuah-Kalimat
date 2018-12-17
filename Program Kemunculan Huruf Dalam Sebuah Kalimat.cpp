#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;

    struct hitung{
    char cek[52] = {'a','b','c','d','e','f','g','h','i',
    'j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D'
    ,'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int jmlh[52]={0};
    };
    hitung alphabeth;

    char x;
    file.open("input.txt");

    int i=0;
    while( ! file.eof()){
        file.get(x);
        for(int a=0;a<52;a++){
            if(x == alphabeth.cek[a]){
                alphabeth.jmlh[a]++;
            }
        }
        i++;
    }

    for(int i=0;i<52;i++){
        if(alphabeth.jmlh[i]!=0){
            cout<<"jumlah "<<alphabeth.cek[i]<<" = "<<alphabeth.jmlh[i]<<endl;
        }
    }

    cout<<"\nUNIVERSITAS PELITA BANGSA"<<endl;

    return 0;
}
