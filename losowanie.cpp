#include<bits/stdc++.h>
#include<locale.h>
#include<windows.h>
using namespace std;
main(){
    int liczba_zawodnikow=9; //liczba zawodników do wczytania
    int pom=0;
    int uzyte[liczba_zawodnikow]={};
    srand(time(NULL));
    wstring zawodnicy[liczba_zawodnikow];
    wifstream lista("lista.txt");
    if(lista){
        while(getline(lista,zawodnicy[pom])){
            pom++;
        }
        lista.close();
        wcout<<"Grupa A:"<<endl<<endl;
        for(int i=0;i<5;){
            int liczba=rand()%9;
            if(uzyte[liczba]==0){
                wcout<<zawodnicy[liczba]<<endl;
                uzyte[liczba]=1;
                i++;
            }
        }
        wcout<<endl<<"Grupa B:"<<endl<<endl;
        for(int i=0;i<4;){
            int liczba=rand()%9;
            if(uzyte[liczba]==0){
                wcout<<zawodnicy[liczba]<<endl;
                uzyte[liczba]=1;
                i++;
            }
        }
    }
    else wcout<<"Blad";
    cin.ignore();
    cin.get();
}
