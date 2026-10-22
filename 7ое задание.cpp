#include <iostream>
#include <cmath>
#include <fstream>
#include <windows.h>

using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");

    ifstream fin;
    fin.open("text.txt");
    float a = 1, b = 4, c = -3;
    fin>>a>>b>>c;
    fin.close();
    ofstream fout;
    fout.open("result.txt");
    if (a == 0) {
        cout << "Error";
        fout << "Error";
        return 0;
    }
    cout << "Уравнение имеет вид: (" << a << ")x^2 + (" << b << ")x + (" << c << ") = 0" << endl;

    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "Нет решений. Дискриминант = " << discriminant;
        fout << "Нет решений. Дискриминант = " << discriminant;
        fout.close();
        return 0;
    }
    if (discriminant > 0) {
        discriminant = sqrt(discriminant);
        float x1 = (-b + discriminant) / (2 * a);
        float x2 = (-b - discriminant) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
        fout << "x1 = " << x1 << endl;
        fout << "x2 = " << x2;
        fout.close();
        return 0;
    }
    float x = -b / (2 * a);
    cout << "x = " << x;
    fout << "x = "<<endl;
    fout.close();
    return 0;
}





/*
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    float a=1, b=4, c=-3;
    cout << "Введите коэффициенты для квадратного уравнения в порядке a, b, c: ";
    //cin >> a >> b >> c;
    cout << endl;
    if (a == 0) {
        cout << "Error" << endl;
        return 0;
    }
    cout << "Уравнение имеет вид: (" << a << ")x^2 + (" << b << ")x + (" << c << ") = 0" << endl;

    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "Нет решений. Дискриминант = "<< discriminant;
        return 0;
    }
    if (discriminant == 0) {
        float x = -b / (2 * a);
        cout << "x = "<< x;
        return 0;
    }
    discriminant = sqrt(discriminant);
    float x1 = (-b + discriminant) / (2 * a);
    float x2 = (-b - discriminant) / (2 * a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}
*/

