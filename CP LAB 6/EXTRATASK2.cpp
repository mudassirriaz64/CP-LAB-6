//#include<iostream>
//#include<math.h>
//using namespace std;
//double series_calculator(double x, int terms);
//
//int main() 
//{
//    double x, sum = 0;
//    int terms;
//    cout << "Input the value of x: ";
//    cin >> x;
//    cout << "Input number of terms: ";
//    cin >> terms;
//    cout << "The values of the series:" << endl;
//    // Call the series calculator function
//    sum = series_calculator(x, terms);
//    // Output individual term
//    for (int i = 0; i < terms; ++i)
//    {
//        double term = pow(-1, i) * pow(x, 2 * i + 1);
//        cout << term << endl;
//    }
//    cout << "The sum of the series up to " << terms << " terms is: " << sum << endl;
//    return 0;
//}
//double series_calculator(double x, int terms)
//{
//    double sum = 0;
//    for (int i = 0; i < terms; ++i) {
//        double term = pow(-1, i) * pow(x, 2 * i + 1);
//        sum += term;
//    }
//    return sum;
//}