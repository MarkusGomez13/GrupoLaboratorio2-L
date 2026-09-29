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
//Declaracion de funciones 
void InsertarInicio ();
void BorrarInicio ();
void ImprimirDatos ();
int main ()
{

}