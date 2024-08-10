#include<bits/stdc++.h>
using namespace std;

void printPolynomial(const vector<int>& coeffs){
    int degree = coeffs.size() - 1;
    for(int i = degree; i>=0; i--){
        if(coeffs[i] != 0){
            if(i<degree && coeffs[i] > 0) cout <<" + ";
            if(i == 0) cout << coeffs[i];
            else if(i == 1) cout << coeffs[i]<<"x";
            else cout << coeffs[i] << "x^" << i;
        }
    }
    cout << endl;
}

vector<int> computeDerivative(const vector<int>& coeffs){
     int degree = coeffs.size() - 1;
     if(degree == 0) return {};
     vector<int> derivative(degree);
    for (int i = 1; i <= degree; ++i) {
        derivative[i - 1] = coeffs[i] * i;
    }
    return derivative;
}


int main(){
    int degree;
    cout<<"Enter the ddegree of the polynomiial(0 to 5): ";
    cin >> degree;

    if(degree <0 || degree>5) {
    cout << "Degree must be between 0 and 5";
    cin >> degree;
    }

    vector<int> coefficients(degree + 1);

    cout << "Enter the coefficients from the constant term to the highest degree term:" << endl;
    for (int i = 0; i <= degree; ++i) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coefficients[i];
    }

    cout<<"Polynomial: ";
    printPolynomial(coefficients);

    vector<int> derivative = computeDerivative(coefficients);
    cout << "Derivative: ";
    if (derivative.empty()) {
        cout << "0" << endl;
    } else {
        printPolynomial(derivative);
    }

    return 0;
}
