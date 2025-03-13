#include 'QueueStatic.cpp'

#include <iostream>

using namespace std;

int main() 
{
    int max_size;
    cout << "Crear una QueueStatic de mida ";
    cin >> max_size;

    QueueStatic queue(max_size);
    cout << "Estructura creada" << endl;

    int entrada = 0; // Valor per defecte

    do
    {
        cout << "1. Inserir element a la QueueStatic" << endl;
        cout << "2. Treure element de la QueueStatic" << endl;
        cout << "3. Consultar el primer element de la QueueStatic" << endl;
        cout << "4. Imprimir tot el contingut de la QueueStatic" << endl;
        cout << "5. Imprimir les posicions del front i el rear" << endl;
        cout << "6. Sortir" << endl;

        cin >> entrada;

        switch (entrada)
        {
        case 1:

            queue.enqueue();

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        }
    } while (entrada != 6);
    
    cout << "Adeu!" << endl;
    return 0;
}