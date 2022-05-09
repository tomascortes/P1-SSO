/* +===================================+=================================+
 * |     P01 IIC2333      |    DCCegmentation Fault   |    2022-05-04    |
 * +==================+================+===================+=============+
 * |      Nombre      |  Usr. GitHub   |      Correo       | Nro. Alumno |
 * +==================+================+===================+=============+
 * | Matías López     | MatLop1        | milopez8@uc.cl    | 17210674    |
 * +------------------+----------------+-------------------+-------------+
 * | Tomás Cortés     | ticortes       | ticortez@uc.cl    | 17640849    |
 * +------------------+----------------+-------------------+-------------+
 * | Felipe Villagrán | BibarelUsedFly | fivillagran@uc.cl | 16638689    |
 * +------------------+----------------+-------------------+-------------+
 * | Marcelo Bernal   | msbernal       | msbernal@uc.cl    | 1763671J    |
 * +------------------+----------------+-------------------+-------------+
 * | Luis González    | ljgonzalez1    | ljgonzalez@uc.cl  | 16625439    |
 * +------------------+----------------+-------------------+-------------+ */

#include <stdio.h>
#include "os_API.h"
#include "./debug/debug.h"


#include <string.h> // Para testear



int main (int argc, char* const argv[]) {

    os_mount(argv[1], 5000);
    os_bitmap(0);
    os_tree();

    // Abre el archivo
    // osFile* os_file = os_open("/dir1ta/amogus.mp4", 'r');
    //printf("Segundo archivo\n");
    //osFile* os_file2 = os_open("/dir1ta/quiero_lorrar.a", 'w');
    //char buffer[3] = "AAA";
    //os_write(os_file2, buffer, 24);


    // Cierra los archivos
    // os_close(os_file);
    //os_close(os_file2);

    // TODO: Malo
    //osFile_destroy(os_file);

    // Cierra el archivo
    //os_close(os_file);

    /*char path[] = "~/carpeta/SuenosyEsperanzas";
    print_debug("Prueba os_mkdir");
    os_mkdir(path);
    print_debug("Fin prueba os_mkdir\n");*/


    char path_to_find[] = "~/";
    print_debug("Prueba pathfinder");
    printf("El archivo/directorio está en el bloque %i\n",
        pathfinder(path_to_find));
    print_debug("Fin prueba os_mkdir\n");

    // os_bitmap(0);
    // os_tree();

//    osFile* os_file = os_open("/redes/dino.jpg", 'r');
//    printf("\nInicio de lectura  del archivo\n");
//    void* buffer;

    // int a = 10;
    // void buffer2[sizeof(int)] = a;

//    os_read(os_file, &buffer, 4);
//    os_read(os_file, &buffer, 10);
//    os_read(os_file, &buffer, 3);
//    os_read(os_file, &buffer, 2);
//    printf("\nTermino de lectura  del archivo\n");
//    os_close(os_file);

    void* buffer;

    osFile* my_file = os_open("/message.txt", 'r');
//    os_read(my_file, &buffer, 4);
    os_read(my_file, &buffer, 12);

    delayed_debug_print("====== BUFFER ======", 1000);
    char* buffer2;
    buffer2 = buffer;

    printf("%s\n", buffer2);
    delayed_debug_print("====== BUFFER ======", 1000);

    os_close(my_file);

    delayed_debug_print("Fin del programa", 1000);

    return 0;
}
