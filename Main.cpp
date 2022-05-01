#include <iostream>

double sum(double x, double y);
double sus(double x, double y);
double dividir(double x, double y);
double multi(double x, double y);

using namespace std;

int main() {
    int x,y,z;
    cout<<"~ Menu"<<endl<<"1- sumar."<<endl<<"2- Restar."<<endl<<"3- Dividir."<<endl<<"4- Multiplicar."<<endl;
    cout<<"~Elija una opción: "<<endl;
    cin >> x;
    switch(x){
        case 1:
            cout<<"~Ingrese dos numeros:"<<endl;
            cin >>y >>z;
            sum(y,z);
            break;
        case 2:
            cout<<"~Ingrese dos numeros:"<<endl;
            cin >>y >>z;
            sus(y,z);
            break;
        case 3:
            cout<<"~Ingrese dos numeros:"<<endl;
            cin >>y >>z;
            dividir(y,z);
            break;
        case 4:
            cout<<"~Ingrese dos numeros:"<<endl;
            cin >>y >>z;
            multi(y,z);
            break;
        default:
            cout<<"Eliga una opcion valida";
    }
    return 0;
}

double sum(double x, double y){
    double z = x + y;
    cout<<"- El resultado es: "<<endl<<z;
    return z;
}
double sus(double x, double y){
    double z = x - y;
    cout<<"- El resultado es: "<<endl<<z;
    return z;
}
double multi(double x, double y){
    double z = x * y;
    cout<<"- El resultado es: "<<endl<<z;
    return z;
}
double dividir(double x, double y){
    double z = x / y;
    cout<<"- El resultado es: "<<endl<<z;
    return z;
}
