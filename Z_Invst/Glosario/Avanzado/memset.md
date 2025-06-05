[Volver al índice](../../../README.md)

memset es una función de C/C++ que establece (llena) un bloque de memoria con un valor específico.

Su prototipo básico es:
void* memset(void* ptr, int value, size_t num);

- ptr: puntero a la memoria que quieres llenar.
- value: el valor (un byte) que quieres escribir en cada posición.
- num: número total de bytes a llenar.