/*************************************************************

NOMBRE: Roberto perez Zamora
FECHA: 20/02/24
PROGRAMA: Actividad de programacion - 6.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Elaborar una suma de un vector con las siguientes características

No hay límite de espacios
El usuario final debe elegir cuando entra un valor a cada posición (no es meter todos los datos al mismo tiempo)
Mostrar lista de valores
Mostrar sumatoria de todos los elementos
Borrado y edición de elementos
Vaciado de vector
*************************************************************/

// Incluir bibliotecas necesarias
#include <iostream>
#include <vector>

// Función principal
int main() {
    // Crear un vector para almacenar los números
    std::vector<int> numbers;
    // usar int para la eleccion del usuario
    int choice;

    // Funcion while para el menu de opciones
    while (true) {
        std::cout << "1. Agregar elemento\n";
        std::cout << "2. Mostrar lista de valores\n";
        std::cout << "3. Mostrar suma de todos los valores\n";
        std::cout << "4. Borrar elemento\n";
        std::cout << "5. Editar elemento\n";
        std::cout << "6. Limpiar Vector\n";
        std::cout << "7. Salir\n";
        std::cout << "=============================\n";
        std::cout << "Ingresar seleccion: ";

        std::cin >> choice;

        // Opcion 1 para agregar un elemento
        if (choice == 1)
         {
            int value;
            std::cout << "Ingresar valor: ";
            std::cin >> value;
            numbers.push_back(value);
        
        // Opcion 2 para mostrar la lista de valores
        } else if (choice == 2)
         {
            std::cout << "List of values:\n";
            for (int num : numbers) {
                std::cout << num << " ";
            }
            std::cout << "\n";

        // Opcion 3 para mostrar la suma de todos los valores
        } else if (choice == 3)
         {
            int sum = 0;
            for (int num : numbers) {
                sum += num;
            }
            std::cout << "Sum of all elements: " << sum << "\n";

        // Opcion 4 para borrar un elemento
        } else if (choice == 4)
         {
            int index;
            std::cout << "Enter the index of the element to delete: ";
            std::cin >> index;
            if (index >= 0 && index < numbers.size()) {
                numbers.erase(numbers.begin() + index);
                std::cout << "Element deleted successfully.\n";
            } else {
                std::cout << "Invalid index.\n";
            }

        // Opcion 5 para editar un elemento
        } else if (choice == 5)
         {
            int index, newValue;
            std::cout << "Enter the index of the element to edit: ";
            std::cin >> index;

            // Verificar si el índice es válido
            if (index >= 0 && index < numbers.size()) {
                std::cout << "Enter the new value: ";
                std::cin >> newValue;
                numbers[index] = newValue;
                std::cout << "Element edited successfully.\n";
            } else {
                std::cout << "Invalid index.\n";
            }

        // Opcion 6 para limpiar el vector
        } else if (choice == 6)
         {
            numbers.clear();
            std::cout << "Vector cleared successfully.\n";

        // Opcion 7 para salir del programa
        } else if (choice == 7)
        {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
    // Regresar 0 para indicar que el programa terminó correctamente
    return 0;
}
