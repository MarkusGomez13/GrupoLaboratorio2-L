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
Nodo * inicio = nullptr;
//Declaracion de funciones 
void InsertarInicio ();
void BorrarInicio ();
void ImprimirDatos ();
int main ()
{
struct Nodo *milibro;

}
void BorrarInicio ()
{
if (inicio == nullptr)
{
std::cout<<"La lista esta vacia\nNop hay libros para eliminar";
}  
Nodo* temporal = inicio;
inicio = inicio->siguiente;
if (inicio != nullptr)
{
inicio->anterior = nullptr;
}
std::cout<<"Libro eliminado: " << temporal->milibro.titulo_del_libro;
delete temporal;
}