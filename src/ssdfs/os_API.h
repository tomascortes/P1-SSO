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

#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "./debug/debug.h"
#include "./aux/os_file.h"

// Funciones generales
void os_mount(char* diskname, unsigned life);
void os_bitmap(unsigned num);
void os_lifemap(int lower, int upper);
int os_trim(unsigned limit);  // TODO: Pendiente
void os_tree();

// Funciones de manejo de archivos
int os_exists(char* filename);
osFile* os_open(char* filename, char mode);  // NOTE: En proceso
int os_read(osFile* file_desc, void* buffer, int nbytes);  // REVIEW
int os_write(osFile* file_desc, void* buffer, int nbytes);  // NOTE: En proceso
int os_close(osFile* file_desc);
int os_rm(char* filename);  // TODO: Pendiente
int os_mkdir(char* path);  // TODO: Pendiente
int os_rmdir(char* path);  // TODO: Pendiente
int os_rmrfdir(char* path);  // TODO: Pendiente
int os_unload(char* orig, char* dest);  // TODO: Pendiente
int os_load(char* orig);  // TODO: Pendiente

// --- Temporal ---
void print_names();
