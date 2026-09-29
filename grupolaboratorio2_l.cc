#include <iostream>
#include <string>


struct Libro {
    std::string codigo_del_libro;
    std::string titulo_del_libro;
    std::string nombre_del_autor;
};


struct Nodo {
    Libro milibro;
    Nodo* siguiente;
    Nodo* anterior;
};


Nodo* inicio = nullptr;
Nodo* fin = nullptr; 


Libro libro1 = {"001", "El principito", "Antoine de Saint-Exupery"};
Libro libro2 = {"002", "Cien anos de soledad", "Gabriel Garcia Marquez"};
Libro libro3 = {"003", "Don Quijote de la Mancha", "Miguel de Cervantes"};
Libro libro4 = {"004", "1984", "George Orwell"};
Libro libro5 = {"005", "Matar a un ruisenor", "Harper Lee"};


void InsertarInicio(const Libro& nuevoLibro);
void BorrarInicio();
void ImprimirDatos();
void InicializarDatos();

int main() {
    int opcion;
    Libro nuevoLibro;

    
    InicializarDatos();

    do {
        std::cout << "\n========== MENU ==========" << std::endl;
        std::cout << "1. Borrar libro al inicio" << std::endl;
        std::cout << "2. Imprimir datos" << std::endl;
        std::cout << "3. Insertar libro al inicio" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;
        
        
        std::cin.ignore();

        switch (opcion) {
            case 1:
                BorrarInicio();
                break;
            case 2:
                ImprimirDatos();
                break;
            case 3:
                std::cout << "Ingrese codigo del libro: ";
                std::getline(std::cin, nuevoLibro.codigo_del_libro);
                std::cout << "Ingrese titulo del libro: ";
                std::getline(std::cin, nuevoLibro.titulo_del_libro);
                std::cout << "Ingrese nombre del autor: ";
                std::getline(std::cin, nuevoLibro.nombre_del_autor);
                InsertarInicio(nuevoLibro);
                break;
            case 0:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida" << std::endl;
                break;
        }

    } while (opcion != 0);
    
    return 0;
}



void InsertarInicio(const Libro& nuevoLibro) {
    Nodo* nuevo_nodo = new Nodo();
    
    
    nuevo_nodo->milibro = nuevoLibro;
    
    nuevo_nodo->siguiente = inicio;
    nuevo_nodo->anterior = nullptr;

   
    if (inicio != nullptr) {
        inicio->anterior = nuevo_nodo;
    } else {
        fin = nuevo_nodo;
    }

    inicio = nuevo_nodo;
    std::cout << "-> Libro agregado: " << nuevoLibro.titulo_del_libro << std::endl;
}

void BorrarInicio() {
    if (inicio == nullptr) {
        std::cout << "[Error] La lista esta vacia. No hay libros para eliminar.\n";
        return;
    }  
    
    Nodo* temporal = inicio;
    inicio = inicio->siguiente;
    
    if (inicio != nullptr) {
        inicio->anterior = nullptr;
    } else {
        fin = nullptr; 
    }
    
    std::cout << "-> Libro eliminado: " << temporal->milibro.titulo_del_libro << std::endl;
    delete temporal;
}

void ImprimirDatos() {
    if (inicio == nullptr) {
        std::cout << "\n[La biblioteca no tiene libros registrados]\n";
        return;
    }
    
    std::cout << "\n--- Datos de los libros ---" << std::endl;
    Nodo* actual = inicio;
    int posicion = 1;
    
    while (actual != nullptr) {
        std::cout << "Posicion: " << posicion << std::endl;
        std::cout << "Codigo del libro: " << actual->milibro.codigo_del_libro << std::endl;
        std::cout << "Titulo del libro: " << actual->milibro.titulo_del_libro << std::endl;
        std::cout << "Nombre del autor: " << actual->milibro.nombre_del_autor << std::endl;
        std::cout << "---------------------------" << std::endl;
        actual = actual->siguiente;
        posicion++;
    }  
}

void InicializarDatos() {
    
    InsertarInicio(libro5);
    InsertarInicio(libro4);
    InsertarInicio(libro3);
    InsertarInicio(libro2);
    InsertarInicio(libro1);
    std::cout << "\n[Datos quemados inicializados con exito]\n";
}