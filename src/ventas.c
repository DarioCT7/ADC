#include <stdio.h>

void mostrarProductos() {
    printf("Te muestro los productos disponibles y sus precios:\n\n");
    printf("*Chicle.........10 centavos\n");
    printf("*Helado.........25 centavos\n");
    printf("*Gaseosa........75 centavos\n");
    printf("*Salchipapa.....100 centavos-dolar\n");
}
int verificarMonto(int monto) {
    if (monto >= 100) return 4;
    if (monto >= 75) return 3;
    if (monto >= 25) return 2;
    if (monto >= 10) return 1;
    return 0;
}
int main() {
    int moneda, montoTotal = 0;
    mostrarProductos();
    printf("\nIngresa las monedas (5, 10, 25, 50 centavos y 100 centavos-dolar).\nIngrese 0 para finalizar:\n\n");
    while (1) {
        printf("Ingresa una moneda:...");
        scanf("%d", &moneda);

        if (moneda == 0) break;
        if (moneda == 5 || moneda == 10 || moneda == 25 || moneda == 50 || moneda == 100) {
            montoTotal += moneda;
        } else {
            printf("Moneda incorrecta. Intente de nuevo.\n");
        }
    }
    int producto = verificarMonto(montoTotal);
    if (producto == 0) {
        printf("Monto insuficiente.\n");
    } else {
        switch (producto) {
            case 1: printf("Tu Producto es Chicle.\n"); break;
            case 2: printf("Tu Producto es Helado.\n"); break;
            case 3: printf("Tu Producto es Gaseosa.\n"); break;
            case 4: printf("Tu Producto es Salchipapa.\n"); break;
        }
    }
    int vuelto=(producto==4 && montoTotal >100)?0 : montoTotal-(producto ==4? 100 : producto == 3 ? 75 : producto == 2 ? 25 : 10);
    printf("Gracias por tu compra $\n");
    if (producto == 4 && montoTotal > 100) {
        printf("!.....!\n");
    } else {
        printf("Vuelto: %d centavos.\n",vuelto);
    }
    return 0;
}
