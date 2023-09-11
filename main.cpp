// Menú Laboratorio01 Problemas C++

#include <iostream>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;

    do {
        system("cls");

        // Texto del menú
        cout << "\n\n\t\t\tMenu de problemas C++" << endl;
        cout << "\t\t\t---------------------" << endl;
        cout << "\n\t1. Identifique carácter ingresado; vocal, consonante o ninguna" << endl;
        cout << "\t2. Determinar la mínima combinación de billetes y monedas" << endl;
        cout << "\t3. Combinación de mes y día son válidos" << endl;
        cout << "\t4. Hora del día en un reloj de 24 horas" << endl;
        cout << "\t5. Muestra patrón en la pantalla" << endl;
        cout << "\t6. Valor aproximado del número de euler" << endl;
        cout << "\t7. La serie de Fibonacci" << endl;
        cout << "\t8. La suma de los múltiplos de a y b menores a c." << endl;
        cout << "\t9. Suma de todos sus dígitos elevados a sí mismos." << endl;
        cout << "\t10. Número n e imprima el enésimo número primo" << endl;
        cout << "\t11. Mínimo común múltiplo de todos los números" << endl;
        cout << "\t12. El máximo factor primo de un número" << endl;
        cout << "\t13. Suma de todos los primos menores al ingresado" << endl;
        cout << "\t14. Calcule el número palíndromo más grande con 3 digitos" << endl;
        cout << "\t15. calcule suma de números en diagonal con espiral de nxn." << endl;
        cout << "\t16. La serie de Collatz" << endl;
        cout << "\t17. Número k calcule cual es el primer número triangular " << endl;


        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        int numero1, numero2;
        float resultado;
        switch (opcion) {
            case 1:

            {
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    // Convertimos el carácter ingresado a minúscula para simplificar con tolower
    char caracterMinuscula = tolower(caracter);

    if ((caracterMinuscula >= 'a' && caracterMinuscula <= 'z')) {
        if (caracterMinuscula == 'a' || caracterMinuscula == 'e' || caracterMinuscula == 'i' || caracterMinuscula == 'o' || caracterMinuscula == 'u') {
            cout << caracter << " es una vocal." << endl;
        } else {
            cout << caracter << " es una consonante." << endl;
        }
    } else {
        cout << caracter << " no es una letra." << endl;
    }

   return 0;
}
                system("pause>nul");
                break;

            case 2:

{
    int cantidad;

    // Pedir la cantidad de dinero al usuario
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    // Definir los valores de los billetes y monedas disponibles
    int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int monedas[] = {500, 200, 100, 50};

    // Inicializar variables para contar la cantidad de cada billete o moneda
    int billete50k = 0, billete20k = 0, billete10k = 0, billete5k = 0, billete2k = 0, billete1k = 0;
    int moneda500 = 0, moneda200 = 0, moneda100 = 0, moneda50 = 0;

    // Calcular la cantidad de cada billete o moneda
    while (cantidad >= 50000) {
        cantidad -= 50000;
        billete50k++;
    }
    while (cantidad >= 20000) {
        cantidad -= 20000;
        billete20k++;
    }
    while (cantidad >= 10000) {
        cantidad -= 10000;
        billete10k++;
    }
    while (cantidad >= 5000) {
        cantidad -= 5000;
        billete5k++;
    }
    while (cantidad >= 2000) {
        cantidad -= 2000;
        billete2k++;
    }
    while (cantidad >= 1000) {
        cantidad -= 1000;
        billete1k++;
    }
    while (cantidad >= 500) {
        cantidad -= 500;
        moneda500++;
    }
    while (cantidad >= 200) {
        cantidad -= 200;
        moneda200++;
    }
    while (cantidad >= 100) {
        cantidad -= 100;
        moneda100++;
    }
    while (cantidad >= 50) {
        cantidad -= 50;
        moneda50++;
    }

    // Imprimir la cantidad de cada billete o moneda
    cout << "50000 : " << billete50k << endl;
    cout << "20000 : " << billete20k << endl;
    cout << "10000 : " << billete10k << endl;
    cout << "5000 : " << billete5k << endl;
    cout << "2000 : " << billete2k << endl;
    cout << "1000 : " << billete1k << endl;
    cout << "500 : " << moneda500 << endl;
    cout << "200 : " << moneda200 << endl;
    cout << "100 : " << moneda100 << endl;
    cout << "50 : " << moneda50 << endl;

    // Calcular y mostrar el faltante
    cout << "Faltante: " << cantidad << endl;

    return 0;
}
                system("pause>nul");
                break;

            case 3:
{
    int mes, dia;

    std::cout << "Ingrese el mes: ";
    std::cin >> mes;
    std::cout << "Ingrese el dia: ";
    std::cin >> dia;

    if (mes < 1 || mes > 12) {
        std::cout << mes << " es un mes invalido." << std::endl;
    } else if (dia < 1 || (mes == 2 && dia > 29) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) || (dia > 31)) {
        std::cout << dia << "/" << mes << " es una fecha invalida." << std::endl;
    } else if (mes == 2 && dia == 29) {
        int anio;
        std::cout << "Ingrese un año: ";
        std::cin >> anio;

        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            std::cout << dia << "/" << mes << " es valida en bisiesto." << std::endl;
        } else {
            std::cout << dia << "/" << mes << " es una fecha invalida." << std::endl;
        }
    } else {
        std::cout << dia << "/" << mes << " es una fecha valida." << std::endl;
    }

    return 0;
}


                system("pause>nul");
                break;

            case 4:

{
    int hora, duracion;

    // Solicitar al usuario ingresar la hora y la duración
    std::cout << "Ingrese la hora en formato de 24 horas (ejemplo: 1245): ";
    std::cin >> hora;

    std::cout << "Ingrese la duración en formato de tiempo (ejemplo: 345 para 3 horas y 45 minutos): ";
    std::cin >> duracion;

    // Verificar si los datos ingresados son válidos
    if ((hora < 0 || hora > 2359) || (duracion < 0 || duracion > 2359)) {
        std::cout << "Uno de los datos ingresados es inválido." << std::endl;
    } else {
        // Extraer las horas y los minutos de la hora y la duración
        int horas_hora = hora / 100;
        int minutos_hora = hora % 100;
        int horas_duracion = duracion / 100;
        int minutos_duracion = duracion % 100;

        // Calcular la nueva hora
        int nueva_hora = horas_hora + horas_duracion;
        int nuevos_minutos = minutos_hora + minutos_duracion;

        // Ajustar la hora si los minutos superan 60
        nueva_hora += nuevos_minutos / 60;
        nuevos_minutos %= 60;

        // Asegurarse de que la hora esté en el rango de 0 a 23 y los minutos en 0 a 59
        nueva_hora %= 24;

        // Imprimir la nueva hora en el formato deseado
        std::cout << "La hora es ";
        if (nueva_hora < 10) {
            std::cout << "0";
        }
        std::cout << nueva_hora << (nuevos_minutos < 10 ? "0" : "") << nuevos_minutos << std::endl;
    }

    return 0;
}

                system("pause>nul");
                break;

            case 5:

{
    int tamano;

    // Pedir al usuario que ingrese el tamaño del patrón (número impar)
    while (true) {
        cout << "Ingrese un número entero impar como tamaño del patrón: ";
        cin >> tamano;
        if (tamano % 2 == 1) {
            break;
        } else {
            cout << "Por favor, ingrese un número impar." << endl;
        }
    }

    // Imprimir la parte superior del patrón
    for (int i = 1; i <= tamano; i += 2) {
        int espacios = (tamano - i) / 2;
        for (int j = 0; j < espacios; j++) {
            cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    // Imprimir la parte inferior del patrón
    for (int i = tamano - 2; i >= 1; i -= 2) {
        int espacios = (tamano - i) / 2;
        for (int j = 0; j < espacios; j++) {
            cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
                system("pause>nul");
                break;


            case 6:
{
    int n;

    std::cout << "Ingrese el número de elementos (n): ";
    std::cin >> n;

    double e = 1.0; // Inicializamos e con el primer término (1/0!)

    double factorial = 1.0;
    for (int i = 1; i <= n; ++i) {
        factorial *= i; // Calculamos el factorial i!
        e += 1.0 / factorial; // Sumamos 1/i! a la aproximación de e
    }

    std::cout << "e es aproximadamente: " << e << std::endl;

    return 0;
}



                system("pause>nul");
                break;

            case 7:

{
    int n;
    std::cout << "Ingrese un número n: ";
    std::cin >> n;

    int fib1 = 1, fib2 = 1;
    int fib = 0;
    int sum = 0;

    while (fib < n) {
        if (fib % 2 == 0) {
            sum += fib;
        }

        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    std::cout << "El resultado de la suma es: " << sum << std::endl;

    return 0;
}
                system("pause>nul");
                break;


            case 8:

{
    int a, b, c;
    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;
    std::cout << "Ingrese el valor de c: ";
    std::cin >> c;

    int suma = 0;

    for (int i = a; i < c; i += a) {
        suma += i;
    }

    for (int i = b; i < c; i += b) {
        if (i % a != 0) { // Evitar sumar múltiplos comunes
            suma += i;
        }
    }

    std::cout << "Resultado: ";
    int primeraSuma = 0;
    int segundaSuma = 0;

    for (int i = a; i < c; i += a) {
        primeraSuma += i;
        std::cout << "m" << i / a << a;
        if (i + a < c) {
            std::cout << " + ";
        }
    }

    for (int i = b; i < c; i += b) {
        if (i % a != 0) {
            segundaSuma += i;
            std::cout << "m" << i / b << b;
            if (i + b < c) {
                std::cout << " + ";
            }
        }
    }

    std::cout << " = " << suma << std::endl;

    return 0;
}
              system("pause>nul");
                break;



            case 9:

{
    int N;
    std::cout << "Ingrese un número entero N: ";
    std::cin >> N;

    int suma = 0;
    int numero = N; // Copia de N para preservar el valor original

    while (numero > 0) {
        int digito = numero % 10;
        int potencia = 1;

        for (int i = 0; i < digito; i++) {
            potencia *= digito;
        }

        suma += potencia;
        numero /= 10;
    }

    std::cout << "El resultado de la suma es: " << suma << std::endl;

    return 0;
}
                system("pause>nul");
                break;


            case 10:
 {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int numero = 2;
    int contador = 0;

    while (true) {
        bool esPrimo = true;
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            contador++;
            if (contador == n) {
                cout << "El primo número " << n << " es: " << numero << endl;
                break;
            }
        }

        numero++;
    }

    return 0;
}



                system("pause>nul");
                break;

            case 11:

{
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int mcm = 1;

    for (int i = 2; i <= n; i++) {
        int a = mcm;
        int b = i;

        while (a != b) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }

        mcm = (mcm * i) / a;
    }

    cout << "El mínimo común múltiplo es: " << mcm << endl;

    return 0;
}



                system("pause>nul");
                break;


            case 12:

 {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int maxFactorPrimo = 0;

    while (n % 2 == 0) {
        maxFactorPrimo = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxFactorPrimo = i;
            n /= i;
        }
    }

    if (n > 1) {
        maxFactorPrimo = n;
    }

    cout << "El mayor factor primo de " << n << " es: " << maxFactorPrimo << endl;

    return 0;
}


                system("pause>nul");
                break;



             case 13:
 {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    int suma = 0;
    for (int i = 2; i < numero; i++) {
        bool esPrimo = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            suma += i;
        }
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}




                system("pause>nul");
                break;

            case 14:
{
    int largestPalindrome = 0;
    int num1 = 0;
    int num2 = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int product = i * j;
            int originalProduct = product;
            int reversedProduct = 0;

            while (product > 0) {
                reversedProduct = reversedProduct * 10 + product % 10;
                product /= 10;
            }

            if (originalProduct == reversedProduct && originalProduct > largestPalindrome) {
                largestPalindrome = originalProduct;
                num1 = i;
                num2 = j;
            }
        }
    }

    std::cout << num1 << "*" << num2 << "=" << largestPalindrome << std::endl;

    return 0;
}



                system("pause>nul");
                break;

            case 15:

 {
    int n;

    // Solicitar al usuario un número impar n
    cout << "Ingrese un número impar n: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "El número debe ser impar." << endl;
        return 1;
    }

    // Inicializar la suma en 1 ya que la esquina superior izquierda es siempre 1
    int suma = 1;
    int currentValue = 1;

    // Calcular la suma de los números en la diagonal
    for (int i = 2; i <= n; i += 2) {
        for (int j = 0; j < 4; j++) {
            currentValue += i;
            suma += currentValue;
        }
    }

    // Imprimir el resultado
    cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma << "." << endl;

    return 0;
}


                system("pause>nul");
                break;

            case 16:

 {
    long long k;
    std::cout << "Ingrese un valor para k: ";
    std::cin >> k;

    long long longestSeed = 0;
    int maxLength = 0;

    for (long long i = 1; i < k; i++) {
        long long n = i;
        int length = 1;

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = 3 * n + 1;
            }
            length++;
        }

        if (length > maxLength) {
            maxLength = length;
            longestSeed = i;
        }
    }

    std::cout << "La serie mas larga es con la semilla: " << longestSeed << ", teniendo " << maxLength << " terminos." << std::endl;

    return 0;
}


                system("pause>nul");
                break;

            case 17:
{
    int k;
    std::cout << "Ingrese un valor para k: ";
    std::cin >> k;

    int n = 1;
    int triangularNumber = 1;

    while (true) {
        n++;
        triangularNumber += n;

        int divisors = 0;
        for (int i = 1; i <= triangularNumber; i++) {
            if (triangularNumber % i == 0) {
                divisors++;
            }
        }

        if (divisors > k) {
            std::cout << "El número es: " << triangularNumber << " que tiene " << divisors << " divisores." << std::endl;
            break;
        }
    }

    return 0;
}



                system("pause>nul");
                break;


            case 0:
                repetir = false;
                break;



        }
    } while (repetir);

    return 0;
}
