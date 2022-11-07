#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-loop-convert"
#include <iostream>

using namespace std;


int main() {
    cout << "RIDUZIONE A SCALA" << endl;
    int m[3][3];

    // Inserimento matrice
    for (int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            cout<<"Inserire valore"<<endl;
            cin>>m[i][j];
        }
    // Stampa matrice
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<m[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}

#pragma clang diagnostic pop