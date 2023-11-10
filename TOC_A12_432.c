// Tony Ozuna Ceseña    372270
// 28/10/23          1/11/23
// Menu para rellenar registros de forma automatica y poder convertirlos a archivo
// TOC_A11_01_432

#include "tilin.h"
#include <conio.h>

typedef struct Personas
{
    int matricula;
    char nombre[25];
    char apaterno[25];
    char amaterno[25];
    int anio;
    int mes;
    int dia;
    int edad;
    int sexo;
    char sexor[15];
    int estado;
    char estador[20];
    char curp[18];
} Personas;

const char *nombrerandom(int genero)
{

    char nombresh[42][30] = {
        "Pedro",
        "Hugo",
        "Jose",
        "Goku",
        "Luis",
        "German",
        "Fernanfloo",
        "Satoru",
        "Vegeta",
        "Willyrex",
        "Levi",
        "Tanjiro",
        "Itadori",
        "Roronoa",
        "Eren",
        "Edward",
        "Fernando",
        "Pikoro",
        "Krilin",
        "Kento",
        "Kenn",
        "Saitama",
        "Eren",
        "Alan",
        "Diego",
        "Armando",
        "David",
        "Juninho",
        "Santiago",
        "Ramon",
        "Kinji",
        "Gohan",
        "Megumi",
        "Sanji",
        "Paulo",
        "Achraf",
        "Theo",
        "Kylian",
        "Karim",
        "Robert",
        "Shigeru",
        "Link"};

    char nombresm[42][30] = {
        "Alejandra",
        "Maria",
        "Juana",
        "Sol",
        "Britney",
        "Bulma",
        "Guadalupe",
        "Carolina",
        "Dua",
        "Mikasa",
        "Natalia",
        "Naomi",
        "Maki",
        "Nobara",
        "Paige",
        "Grace",
        "Fernanda",
        "Kim",
        "Juana",
        "Paquita",
        "Rosalia",
        "Alexia",
        "Alen",
        "Aylin",
        "Camila",
        "Lucia",
        "Anna",
        "Marla",
        "Mayra",
        "Sofia",
        "Allison",
        "Vianney",
        "Arwen",
        "Danna",
        "Jaqueline",
        "Manuella",
        "Asuna",
        "Karina",
        "Julissa",
        "Julia",
        "Iaretzy",
        "Sondra"};

    int numero = rand() % (42) + 0;

    char *dato = malloc(30);
    // printf("\n> %s", nombres[numero]);
    // printf("\nn> [%d] %s", numero, nombres[numero]);
    if (genero == 1)
    {
        strcpy(dato, nombresh[numero]);
    }
    else
    {
        strcpy(dato, nombresm[numero]);
    }
    return dato;
}

const char *apellidorandom()
{
    char apellido[51][30] = {
        "Gonzalez",
        "Cano",
        "Lopez",
        "Gomez",
        "Ruiz",
        "Beltran",
        "Rooney",
        "Salas",
        "Rodriguez",
        "Barrera",
        "Sotelo",
        "Martinez",
        "Armenta",
        "Suarez",
        "Montes",
        "Nanami",
        "Lipa",
        "Yamamoto",
        "Tanaka",
        "Mount",
        "Rashford",
        "Nazario",
        "Elizalde",
        "Kane",
        "Sommer",
        "Alcantara",
        "Nakamura",
        "Suzuki",
        "Kato",
        "Nissan",
        "Lindelof",
        "Onana",
        "Balde",
        "Buffon",
        "Gojo",
        "Jaeger",
        "Villareal",
        "Maradona",
        "Beckham",
        "Pernambucano",
        "Mbappe",
        "Modric",
        "Hojlund",
        "Zoro",
        "Valverde",
        "Verlander",
        "Silva",
        "Hakimi",
        "Gimenez",
        "Hernandez",
        "Kamado"};

    // int numero = rand() % (10) + 0;
    int numero = rand() % 51;

    char *dato = malloc(30);
    // printf("\na> [%d] %s", numero, apellido[numero]);
    strcpy(dato, apellido[numero]);
    return dato;
}

int aniorandom()
{
    int nMax = 2022;
    int nMin = 1970;

    int numero = rand() % ((nMax + 1) - nMin) + nMin;
    return numero;
}

int mesrandom()
{
    int nMax = 12;
    int nMin = 1;

    int numero = rand() % ((nMax + 1) - nMin) + nMin;
    return numero;
}

int diarandom(int mes)
{
    if (mes == 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {

        int numero = rand() % ((31 + 1) - 1) + 1;
    }
    if (mes == 2)
    {

        int numero = rand() % ((28 + 1) - 1) + 1;
    }
    if (mes == 4 || 6 || 9 || 11)
    {

        int numero = rand() % ((30 + 1) - 1) + 1;
    }
}

int matricularandom()
{
    int nMax = 389999;
    int nMin = 300000;
    // int nMax = 199;
    // int nMin = 1;

    int numero = rand() % ((nMax + 1) - nMin) + nMin;
    return numero;
}
int sexogenera()
{
    int n;
    n = rand() % 2 + 1;
    return n;
}

int estadogenera()
{
    return rand() % 34 + 1;
}

// Funcion para imprimir el registro
void imprimearreglo(Personas arr[], int total)
{
    int i = 0;
    int limite = 10;
    char formato[200] = {"  No   Matricula     Nombre        Apellido P.        Apellido M.     Edad    Sexo   "};
    if (total != 0)
    {
        printf("%s\n", formato);
    }
    while (i < total)
    {

        for (i; i < limite; i++)
        {
            arr[i].edad = 2023 - arr[i].anio;
            // fprintf(festructrura1, "\n\n EDAD: %d", persona[i].edad);
            if (arr[i].sexo == 1)
            {
                strcpy(arr[i].sexor, "Hombre");
                // fprintf(festructrura1, "\n\n SEXO: Hombre");
            }
            else
            {
                strcpy(arr[i].sexor, "Mujer");
                // fprintf(festructrura1, "\n\n SEXO: Mujer");
            }
            printf(" %2d   %7d        %-12s  %-12s       %-12s   %4d     %-3s \n", i + 1, arr[i].matricula, arr[i].nombre, arr[i].apaterno, arr[i].amaterno, arr[i].edad, arr[i].sexor);
        }
        if (i != total)
        {
            printf("\nPresione enter para imprimir los siguientes registros\n");
            getch();
        }
        if ((i + limite) > total)
        {
            limite = (total - i) + i;
        }
        else
        {
            limite += 10;
        }
    }
    printf("\n");
}

// Metodo de la burbuja
void mibublesort(Personas a[], int total)
{
    struct Personas temporal;
    // BUBBLE SORT
    for (int x = 0; x < total; x++)
    {
        for (int y = 0; y < total - x - 1; y++)
        {
            if (a[y].matricula > a[y + 1].matricula)
            {
                temporal = a[y];
                a[y] = a[y + 1];
                a[y + 1] = temporal;
            }
        }
    }

    //   return a;
}

// https://www.geeksforgeeks.org/c-program-to-sort-an-array-in-ascending-order/
void intercambiar(Personas *a, Personas *b)
{
    Personas temporal = *a;
    *a = *b;
    *b = temporal;
    printf("\nIntercambio %d y %d", a->matricula, b->matricula);
}

void selectionSort(Personas arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j].matricula < arr[min_idx].matricula)
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        intercambiar(&arr[min_idx], &arr[i]);
    }
}

// Funcion que busca una matricula mediante la busqueda secuencial
void busqueda_secuencial(Personas arr[], int matricula, int t)
{
    int posicion = -1;
    int encontro = 0;
    char sexo;
    for (int i = 0; i < t; i++)
    {
        if (matricula == arr[i].matricula)
        {
            posicion = i;
            encontro = 1;
            break;
        }
    }
    if (encontro == 1)
    {
        printf("\nSe encontro la matricula %d y se encuentra en la posicion %d \n", matricula, posicion);
        printf("\n %d> Matricula: [%d]   Nombre: %s  -  Apellidop: %s  -  Apellidom: %s   - Sexo %d  CURP[%s]\n", posicion + 1, arr[posicion].matricula, arr[posicion].nombre, arr[posicion].apaterno, arr[posicion].amaterno, arr[posicion].sexo, arr[posicion].curp);
    }
    else
    {
        printf("\nNo se encontro la matricula %d \n", matricula);
    }
}

// Funcion para borrar una matricula del registro
int borraelemento(Personas arr[], int matricula, int t)
{
    int posicion = -1;
    int total = t;
    int encontro = 0;
    for (int i = 0; i < total; i++)
    {
        if (matricula == arr[i].matricula)
        {
            posicion = i;
            encontro = 1;
        }
    }

    if (posicion >= 0 && encontro == 1)
    {
        for (int i = posicion; i < total - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        t = t - 1;
    }
    if (posicion > -1)
    {
        printf("Se ha borrado exitosamente la matricula %d\n", matricula);
    }
    else
    {
        printf("No se ha encontrado la matricula %d\n", matricula);
    }

    return t;
}

// Funcion para crear el archivo
void salvaenarchivo(Personas persona[], int t, char nombre[])
{
    FILE *festructrura1;
    char *estado;
    // int longitud=strlen(nombre);
    strcat(nombre, ".txt");
    festructrura1 = fopen(nombre, "w+");
    char formato[200] = {"  No   Matricula     Nombre        Apellido P.        Apellido M.     Edad    Sexo   "};
    fprintf(festructrura1, "%s\n", formato);
    for (int i = 0; i < t; i++)
    {

        // fprintf(festructrura1, "\n MATRICULA: %d", persona[i].matricula);
        // fprintf(festructrura1, "\n\n NOMBRE: %s", persona[i].nombre);
        // fprintf(festructrura1, "\n\n AP PATERNO: %s", persona[i].apaterno);
        // fprintf(festructrura1, "\n\n AP MATERNO: %s", persona[i].amaterno);
        // fprintf(festructrura1, "\n\n FECHA NAC: %d - %d - %d", persona[i].dia, persona[i].mes, persona[i].anio);
        persona[i].edad = 2023 - persona[i].anio;
        // fprintf(festructrura1, "\n\n EDAD: %d", persona[i].edad);
        if (persona[i].sexo == 1)
        {
            strcpy(persona[i].sexor, "Hombre");
            // fprintf(festructrura1, "\n\n SEXO: Hombre");
        }
        else
        {
            strcpy(persona[i].sexor, "Mujer");
            // fprintf(festructrura1, "\n\n SEXO: Mujer");
        }
        strcpy(persona[i].estador, estadoarchivo(persona[i].estado));
        // fprintf(festructrura1, "\n\n LUGAR NAC: %s", estado);
        // fprintf(festructrura1, "\n\n CURP: %s", persona[i].curp);
        // fprintf(festructrura1, "\n\n");
        fprintf(festructrura1, " %2d   %7d        %-12s  %-12s       %-12s   %4d     %-3s \n", i + 1, persona[i].matricula, persona[i].nombre, persona[i].apaterno, persona[i].amaterno, persona[i].edad, persona[i].sexor);
    }
    fclose(festructrura1);
}

int lee_archivo(Personas persona[], int i)
{
    Personas arr[2000];
    FILE *fa;
    int x, primeralinea = 0;
    char nombre[50], lalinea[200];
    int matricula = 0, edad = 0;
    char elnombre[25], apa[25], ama[25], sexor[15];
    char *dato;
    printf("Que archivo deseas cargar?\n");
    gets(nombre);
    // scanf("%s", &nombre);
    strcat(nombre, ".txt");
    fa = fopen(nombre, "r");
    if (fa != NULL)
    {
        while (fgets(lalinea, sizeof(lalinea), fa))
        {

            if (primeralinea == 0)
            {
                // fscanf(fa, "%*s ", lalinea);                 // fgets(lalinea, sizeof(lalinea), fa);
                primeralinea = 1;
            }
            else
            {

                dato = strtok(lalinea, " ");
                printf("\n primer dato: [%s]", dato);
                dato = strtok(NULL, " ");
                printf(" segundo dato: [%s]", dato);
                matricula = atoi(dato);
                dato = strtok(NULL, " ");
                printf(" 3er dato: [%s]", dato);
                strcpy(elnombre, dato);
                dato = strtok(NULL, " ");
                printf(" 4to dato: [%s]", dato);
                strcpy(apa, dato);
                dato = strtok(NULL, " ");
                printf(" 5to dato: [%s]", dato);
                strcpy(ama, dato);
                dato = strtok(NULL, " ");
                printf(" 6to dato: [%s]", dato);
                edad = atoi(dato);
                dato = strtok(NULL, " ");
                printf(" 7mo dato: [%s]", dato);
                strcpy(sexor, dato);
                // fscanf(fa, "%d %d %s %s %s %d %s", &lalinea);
                // fscanf(fa, "%d %d %*s %*s %*s %d %*s", &x, &matricula, elnombre, apa, ama, &edad, sexor);
                persona[i].matricula = matricula;
                strcpy(persona[i].nombre, elnombre);
                strcpy(persona[i].apaterno, apa);
                strcpy(persona[i].amaterno, ama);
                persona[i].edad = edad;
                strcpy(persona[i].sexor, sexor);
                i++;
            }
        }
    }
    else
    {
        printf("No existe el archivo %s", nombre);
    }
    fclose(fa);

    return i;
}

int main()
{
    char nombrearch[50];
    int op, matricula;
    int total = 0, max = 1500, incremento = 10;
    int i = 0, primera = 0;
    int ordenado = 0; // Variable para saber si ya esta ordenado el registro
    struct Personas persona[1500];
    srand(time(NULL));
    do
    {
        printf("\n\tM\tE\tN\tU\n\n");
        printf("1.- Cargar Archivo\n\n");
        printf("2.- Agregar\n\n");
        printf("3.- Eliminar\n\n");
        printf("4.- Buscar\n\n");
        printf("5.- Ordenar\n\n");
        printf("6.- Imprimir\n\n");
        printf("7.- Generar archivo\n\n");
        printf("0.- Salir\n\n");
        op = validar_num(0, 7, "Que accion desea realizar?");

        switch (op)
        {
        case 1:
            // lee_archivo(persona, i);
            total = lee_archivo(persona, i);
            printf("\nPresione ENTER para continuar . . . \n");
            getch();
            break;
        case 2:
            if (total == 1500)
            {
                printf("Ya esta lleno el registro, no puede agregarle mas\n");
                printf("Presione ENTER para continuar . . . \n");
                getch();
                break;
            }
            if (total > 1491)
            {
                for (i; i < max; i++)
                {
                    persona[i].matricula = matricularandom();
                    persona[i].sexo = sexogenera();
                    strcpy(persona[i].nombre, nombrerandom(persona[i].sexo));
                    strcpy(persona[i].apaterno, apellidorandom());
                    strcpy(persona[i].amaterno, apellidorandom());
                    persona[i].anio = aniorandom();
                    persona[i].mes = mesrandom();
                    persona[i].dia = diarandom(persona[i].mes);
                    persona[i].estado = estadogenera();

                    strcpy(persona[i].curp, generacurp(persona[i].nombre, persona[i].apaterno, persona[i].amaterno, persona[i].anio, persona[i].mes, persona[i].dia, persona[i].sexo, persona[i].estado));
                    //  char t_curp[18];
                    //  strcpy(t_curp, generacurp(persona[i].nombre, persona[i].apaterno, persona[i].amaterno, persona[i].anio, persona[i].mes, persona[i].dia, persona[i].sexo, persona[i].estado));
                    // printf("\nC %s", persona[i].curp);
                    // printf("\n %d> matricula: [%d]   nombre: %s  -  apa: %s  -  ama: %s", i, persona[i].matricula, persona[i].nombre, persona[i].apaterno, persona[i].amaterno);
                }
                total = max;
                i = total;
                ordenado = 0;
                printf("Se ha generado de manera correcta el registo\n");
                printf("Presione ENTER para continuar . . . \n");
                getch();
                break;
            }
            else
            {
                for (i; i < incremento + total; i++)
                {
                    persona[i].matricula = matricularandom();
                    persona[i].sexo = sexogenera();
                    strcpy(persona[i].nombre, nombrerandom(persona[i].sexo));
                    strcpy(persona[i].apaterno, apellidorandom());
                    strcpy(persona[i].amaterno, apellidorandom());
                    persona[i].anio = aniorandom();
                    persona[i].mes = mesrandom();
                    persona[i].dia = diarandom(persona[i].mes);
                    persona[i].estado = estadogenera();

                    strcpy(persona[i].curp, generacurp(persona[i].nombre, persona[i].apaterno, persona[i].amaterno, persona[i].anio, persona[i].mes, persona[i].dia, persona[i].sexo, persona[i].estado));
                    //  char t_curp[18];
                    //  strcpy(t_curp, generacurp(persona[i].nombre, persona[i].apaterno, persona[i].amaterno, persona[i].anio, persona[i].mes, persona[i].dia, persona[i].sexo, persona[i].estado));
                    // printf("\nC %s", persona[i].curp);
                    // printf("\n %d> matricula: [%d]   nombre: %s  -  apa: %s  -  ama: %s", i, persona[i].matricula, persona[i].nombre, persona[i].apaterno, persona[i].amaterno);
                }
                total += incremento;
                i = total;
                ordenado = 0;
                printf("Se ha generado de manera correcta el registo\n");
                printf("Presione ENTER para continuar . . . \n");
                getch();
                break;
            }
        case 3:
            matricula = validar_num(300000, 399999, "¿Que matriucla desea eliminar?");
            total = borraelemento(persona, matricula, total);
            printf("Presione ENTER para continuar . . . \n");
            getch();
            break;
        case 4:
            matricula = validar_num(300000, 399999, "¿Que matriucla desea buscar?");
            busqueda_secuencial(persona, matricula, total);
            printf("Presione ENTER para continuar . . . \n");
            getch();
            break;
        case 5:
            if (ordenado == 0)
            {
                if (total < 1001)
                { // https://www.tutorialspoint.com/difference-between-bubble-sort-and-selection-sort
                    mibublesort(persona, total);
                    printf("Se ha ordenado correctamente el registro\n");
                    printf("Presione ENTER para continuar . . . \n");
                    getch();
                    ordenado = 1;
                    break;
                }
                else
                {
                    selectionSort(persona, total);
                    printf("Se ha ordenado correctamente el registro mediante el metodo de seleccion\n");
                    printf("Presione ENTER para continuar . . . \n");
                    getch();
                    ordenado = 1;
                    break;
                }
            }
            else
            {
                printf("El registro ya se encuentra ordenado\n");
                printf("Presione ENTER para continuar . . . \n");
                getch();
                break;
            }
        case 6:
            imprimearreglo(persona, total);
            printf("Presione ENTER para continuar . . . \n");
            getch();
            break;
        case 7:
            printf("Que nombre desea para su archivo? \n");
            gets(nombrearch);
            salvaenarchivo(persona, total, nombrearch);
            printf("Se ha creado exitosamente el archivo '%s'\n", nombrearch);
            printf("Presione ENTER para continuar . . . \n");
            getch();
        default:
            break;
        }
    } while (op != 0);
}