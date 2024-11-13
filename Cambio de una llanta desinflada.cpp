#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char respuesta;

    cout << "Estaciona el auto en un lugar seguro y aplica el freno de mano" << endl;
    cout << "Esta el auto estacionado en un lugar seguro y aplicado el freno de mano? : ";
    cin >> respuesta;
    if (respuesta != 's') {
        cout << "Asegura el auto" << endl;
        exit (1);
    }

    cout << "\nReune las herramientas: gato, llave de cruz y la llanta de repuesto" << endl;
    cout << "Tienes todas las herramientas? : ";
    cin >> respuesta;
    if (respuesta != 's') {
        cout << "Consigue las herramientas necesarias " << endl;
        exit (1);
    }

    cout << "\nAfloja ligeramente las tuercas de la llanta desinflada" << endl;
    cout << "Las tuercas estan aflojadas?  ";
    cin >> respuesta;
    if (respuesta != 's') {
        cout << "Afloja las tuercas antes de levantar el auto" << endl;
        exit (1);
    }

    cout << "\nLevanta el auto con el gato hasta que la llanta desinflada este suspendida" << endl;
    cout << "El auto esta elevado y la llanta esta suspendida?  ";
    cin >> respuesta;
    if (respuesta != 's') {
        cout << "Levanta el auto con el gato" << endl;
        exit (1);
    }

    cout << "\nRetira completamente las tuercas y quita la llanta desinflada" << endl;
    cout << "La llanta desinflada fue retirada? : ";
    cin >> respuesta;
    if (respuesta != 's') {
        cout << "Retira la llanta desinflada " << endl;
        exit (1);
       
    }

    cout << "\nColoca la llanta de repuesto y ajusta las tuercas parcialmente" << endl;
    cout << "La llanta de repuesto está colocada en el eje? : ";
    cin >> respuesta;
    if (respuesta != 's') {
        cout << "Coloca la llanta de repuesto antes de continuar." << endl;
        exit (1);
       
    }

    cout << "\nAjusta ligeramente las tuercas para mantener la llanta en posicion" << endl;
    cout << "\nBaja el auto con el gato y ajusta las tuercas totalmente" << endl;
   
    cout << "La llanta esta estable?: ";
    cin >> respuesta;
    if (respuesta != 's') {
        cout << "Revisa posibles errores" << endl;
        exit (1);
        
    }

    cout << "\nGuarda los elementos presentes en el baul y continua el viaje" << endl;

    return 0;
}
