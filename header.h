#include <iostream>
using namespace std;

// Programa para explicar las funciones y las plantillas en el caso de ue haya que introducir más datos

// Prototipo de función
template <class TIPOD>
TIPOD absoluto (TIPOD numero);

// Al definir esta plantilla, la función absoulto no trabaja exclusivamente con un tipo de dato
// sino con lo que le metamos. Definimos una clase TIPOD que puede ser lo que sea
