#include <unistd.h>

void    ft_print_combn(int n)
{
    char    arr[9];
    int     i;
    int     j;

    // Inicializar el array con los valores '0' a 'n-1'
    i = -1;
    while (++i < n)
        arr[i] = i;

    // Primera impresión
    i = -1;
    while (++i < n)
    {
        char c = arr[i] + '0';
        write(1, &c, 1);
    }

    // Generar combinaciones
    while (1)
    {
        j = n - 1;
        while (j >= 0 && arr[j] == 10 - n + j)
            j--;

        if (j < 0)  // Salimos si no hay más combinaciones
            return;

        arr[j]++;

        // Reajustar valores siguientes
        i = j;
        while (++i < n)
            arr[i] = arr[i - 1] + 1;

        // Imprimir separador
        write(1, ", ", 2);

        // Imprimir la nueva combinación
        i = -1;
        while (++i < n)
        {
            char c = arr[i] + '0';
            write(1, &c, 1);
        }
    }
}
