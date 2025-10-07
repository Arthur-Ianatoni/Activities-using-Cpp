#include <iostream>

using namespace std;

int main() {
    
    int N, count;
    
    cout << "Qual a ordem da matriz ";
    cin >> N;
    
    int mat [N][N];
    
    for ( int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << " Position [" << i<<", " << j<<"]:  ";
             cin >> mat [i][j];
        };
    }
    
    cout << " main diagonal: " << endl;
    
     for ( int i = 0; i < N; i++){
        cout << mat[i][i] << " ";
     }
    cout << endl;
    
    count = 0;
  
       for ( int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) {
            if (mat [i][j] < 0) {
                count++;
            }
          }
       }
         cout << " The amount of negative numbers : "<< count << endl;

    return 0;
}
