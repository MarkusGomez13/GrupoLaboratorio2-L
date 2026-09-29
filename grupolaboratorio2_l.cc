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
void InsertarInicio (struct Nodo **milibro, struct Libro);
void BorrarInicio ();
void ImprimirDatos ();
int main ()
{

}
void InsertarInicio(struct Nodo **milibro, struct Libro)
{
    struct Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->milibro.codigo_del_libro;
    nuevo_nodo->milibro.nombre_del_autor;
    nuevo_nodo->milibro.titulo_del_libro;
    nuevo_nodo->siguiente = *milibro;
    nuevo_nodo->anterior = nullptr;

    // Si la lista no está vacía, actualizamos el puntero anterior del primer nodo actual
    if (*milibro != nullptr)
    {
        (*milibro)->anterior = nuevo_nodo;
    }

    // El nuevo nodo pasa a ser la cabeza de la lista
    *milibro = nuevo_nodo;

}