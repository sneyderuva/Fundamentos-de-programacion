
#include <iostream>
#include<stdlib.h>
using namespace std;


int main()
{   
    cout<<"ingrese el numero de estudiantes"<<endl;
    int n=0;
    string nombre;
    cin>>n;
    float Promedio[n];
    string est[n];
    float notas[n][3];
    
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre del estudiante"<<endl;
        cin>>nombre;
        est[i]=nombre;
        
        for(int j=0;j<3;j++){
            float nota;
            cout<<"nota "<<j+1<<": ";
            cin>>nota;
            notas[i][j]=nota;
            Promedio[i]+=nota;
            if(j==2){
                Promedio[i]=Promedio[i]/3;
            }
        }
        
    };
    

    
    for(int i=0;i<n;i++){
        cout<<" "<<endl;
        cout<<est[i]<<": ";
        for(int j=0;j<3;j++){
            cout<<notas[i][j];
            cout<<" ";
        }
        cout<<" Promedio: "<<Promedio[i];
    }
    
    return 0;
}
