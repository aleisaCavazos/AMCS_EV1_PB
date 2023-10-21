// AMCS_EV1_PB.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string nombreEmpleado, fecha;
    int opcion;
    const float PRECIO_VASO_CHICO = 15;
    const float PRECIO_VASO_MEDIANO = 20;
    const float PRECIO_VASO_GRANDE = 25;
    const float PRECIO_CONO_SENCILLO = 17;
    const float PRECIO_CONO_DOBLE = 24;
    const float PRECIO_GELATINA = 5;
    const float PRECIO_PALETAS_AGUA = 17;
    const float PRECIO_PALETAS_CREMA = 23;
    do {
        cout << "Bienvenido al sistema de ventas de Nieves 'Copo de nieve'" << endl;
        cout << "Ingrese el nombre del empleado: ";
        getline(cin, nombreEmpleado);
        cout << "Ingrese la fecha: ";
        getline(cin, fecha);
        cout << "\nMenu de opciones:" << endl;
        cout << "1. Alta de órdenes" << endl;
        cout << "2. Modificar una orden" << endl;
        cout << "3. Eliminar o cancelar" << endl;
        cout << "4. Lista de órdenes" << endl;
        cout << "5. Limpiar la pantalla" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer del teclado
        switch (opcion) {
        case 1: // Alta de órdenes
        {
            float total = 0;
            float propina, impuesto;
            for (int i = 0; i < 3; ++i) {
                cout << "Orden " << i + 1 << ":" << endl;
                // Pedir productos y calcular total
                // ...
            }
            // Calcular propina e impuesto
            propina = total * 0.1;
            impuesto = total * 0.16;
            float totalFinal = total + propina + impuesto;
            // Imprimir ticket
            cout << "\nTicket:" << endl;
            cout << "Empleado: " << nombreEmpleado << endl;
            cout << "Fecha: " << fecha << endl;
            // Mostrar productos y precios
            // ...
            cout << "Total: $" << fixed << setprecision(2) << totalFinal << endl;
            break;
        }
        case 2: // Modificar una orden
            // Implementar lógica para modificar orden
            // ...
            break;
        case 3: // Eliminar o cancelar
            // Implementar lógica para eliminar orden
            // ...
            break;
        case 4: // Lista de órdenes
            // Mostrar lista de órdenes
            // ...
            break;
        case 5: // Limpiar la pantalla
            system("clear"); // Limpiar la consola
            break;
        case 6: // Salir
            cout << "¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 6);
    return 0;

    system("pause");
}