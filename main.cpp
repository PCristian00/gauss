#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-loop-convert"
#include <iostream>

using namespace std;


int main() {
    cout << "RIDUZIONE A SCALA" << endl;
    int m[3][3];

    int test[2][3]={{3,2,1},{2,-4,8}};

    /* Inserimento matrice m
    for (int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            cout<<"Inserire valore"<<endl;
            cin>>m[i][j];
        }
        */
    cout << "Matrice di partenza" << endl;
    /* Stampa matrice m
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<m[i][j]<<"\t";
        cout<<endl;
    }
     */

    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout<<test[i][j]<<"\t";
        cout<<endl;
    }

    int cs=0;
    // Scelta della prima colonna non nulla
    cout << "Scelgo la prima colonna non nulla" << endl;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            if(m[i][j]!=0){
                cs=j;
                cout<<cs;
            }


    return 0;
}

#pragma clang diagnostic pop