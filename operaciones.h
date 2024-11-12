#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T>
T suma_tail(T n, T acc = 0) {
    if (n == 0) return acc;
    return suma_tail(n - 1, acc + n);
}

#endif // OPERACIONES_H