#include <iostream>
#include <string>
using namespace std;


void mostrarProductosLuis() {
    cout << "\n--- Productos Disponibles ---\n";
    cout << "1. Papas fritas - $1.00\n";
    cout << "2. Galletas - $1.00\n";
    cout << "3. Agua - $0.50\n";
    cout << "4. Chocolate - $2.00\n";
    cout << "----------------------------\n";
}

double ingresarLuis() {
    double dinero = 0.0;
    cout << "Ingrese el dinero que va a insertar: $";
    cin >> dinero;
    while (dinero <= 0) {
        cout << "Cantidad no valida. Por favor, ingrese un monto positivo: $";
        cin >> dinero;
    }
    return dinero;
}


double seleccionarProductoLuis(int opcion) {
    switch (opcion) {
        case 1: return 1.00;
        case 2: return 1.00;
        case 3: return 0.50;
        case 4: return 2.00;
        default: return -1; 
    }
}


int main() {
    double dineroIngresado = 0.0, precioProducto = 0.0, cambio = 0.0;
    int opcion = 0;
    bool continuar = true;

    cout << "Bienvenido a la Maquina Expendedora Luis\n";
    dineroIngresado = ingresarLuis();  

    while (continuar) {
        mostrarProductosLuis();  
        cout << "Dinero disponible: $" << dineroIngresado << "\n";
        
       
        cout << "Seleccione el producto que desea comprar (1-4) o 0 para salir: ";
        cin >> opcion;

        if (opcion == 0) {
            continuar = false;  
            continue;
        }

  
        precioProducto = seleccionarProductoLuis(opcion);

        if (precioProducto == -1) {
            cout << "Opción invalida. Intente nuevamente.\n";
            continue;
        }

      
        if (dineroIngresado < precioProducto) {
            cout << "Dinero insuficiente. Ha ingresado: $" << dineroIngresado
                 << ", pero el producto cuesta: $" << precioProducto << "\n";
            cout << "Por favor, inserte más dinero si desea comprar mas productos.\n";
            continue;
        }

        
        dineroIngresado -= precioProducto;
        cout << "Producto dispensado con exito. Su dinero restante es: $"
             << dineroIngresado << "\n";
        cout << "Gracias por su compra.\n";


        cout << "Desea comprar otro producto? (1: Sí / 0: No): ";
        cin >> continuar;
    }

  
    if (dineroIngresado > 0) {
        cout << "Su cambio final es: $" << dineroIngresado << "\n";
    }

    cout << "Gracias por usar la Maquina Expendedora Luis.\n";
    return 0;
}