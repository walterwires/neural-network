#include <iostream>
#include <cmath>
using namespace std;

double sigmoid(double n){
    double a = 1.0 / (1 + exp(-n) ); 
    return a;

}

int main(){
    double x[2];
    for (int i = 0; i < 2; i++){
        cin >> x[i];
    }
    double a[2]; //outputs
    
    double w[2][2] = {{0.3 , 0.4}, {1 , 100}}; 
    //w[neuron][input]
    double b[2] = {0.1 , 0.02};
     
    for (int i = 0; i < 2; i++){
        double z = b[i];
        for (int j = 0; j < 2; j++){
            z += w[i][j] * x[j];
        }
        a[i] = sigmoid(z);
        cout << a[i] << endl;
    }

return 0;

}