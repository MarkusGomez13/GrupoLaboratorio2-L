#include <iostream>
#include <string>
//Biblioteca de Libros: Lista doblemente enlazada,la cual se manejara con un puntero global 
struct Libro
{
std::string codigo_del_libro;
std::string titulo_del_libro;
std::string nombre_del_autor;

};
struct Nodo
{
Libro milibro;
struct Nodo *siguiente;
struct Nodo *anterior;

};

//datos quemados para imprimir los datos, 5 libros de ejemplo
Libro libro1 = {"001", "El principito", "Antoine de Saint-Exupéry"};
Libro libro2 = {"002", "Cien años de soledad", "Gabriel García Márquez"};
Libro libro3 = {"003", "Don Quijote de la Mancha", "Miguel de Cervantes"};
Libro libro4 = {"004", "1984", "George Orwell"};
Libro libro5 = {"005", "Matar a un ruiseñor", "Harper Lee"};

//variables globales para manejar la lista doblemente enlazada
struct Nodo *inicio = nullptr;
struct Nodo *fin = nullptr; 

//Declaracion de funciones 
void InsertarInicio ();
void BorrarInicio ();
void ImprimirDatos ();
int main ()
{
int opcion;
do
{
std::cout << "1. Borrar libro al inicio" << std::endl;
std::cout << "2. Imprimir datos" << std::endl;
std::cin >> opcion;
switch (opcion)
{
case 1:
BorrarInicio ();
break;
case 2:
ImprimirDatos ();
break;
default:
std::cout << "Opcion no valida" << std::endl;
break;
}

} while (opcion != 0);
return 0;
}

void ImprimirDatos ()
{
std::cout << "Datos de los libros:" << std::endl;
struct Nodo *actual = inicio;
int posicion = 1;
while (actual != nullptr)
{
    std::cout << "Posicion: " << posicion << std::endl;
    std::cout << "Codigo del libro: " << actual->milibro.codigo_del_libro << std::endl;
    std::cout << "Titulo del libro: " << actual->milibro.titulo_del_libro << std::endl;
    std::cout << "Nombre del autor: " << actual->milibro.nombre_del_autor << std::endl;
    actual = actual->siguiente;
    posicion++;
}  
} 