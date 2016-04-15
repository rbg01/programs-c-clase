#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct BMP {

    unsigned short magic;  //-->ojo va sin \0
    unsigned file_size;
    unsigned res1;
    unsigned img_offset;
    unsigned header_size;
    unsigned width;
    unsigned height;
    unsigned bitplanes;
    unsigned point_size;
    unsigned compression;
    unsigned image_size;
    unsigned horz_res;
    unsigned vert_res;
    unsigned palette_size;
    unsigned important_colors;
};

void show(struct BMP cabecera) {

    if ( cabecera.magic != 'B' + 'M' * 0x100  ){
        printf("Invalid Bitmap!\n");
        exit(1);
    } else
        printf("Valid Bitmap\n");


    printf("file_size: %u\n", cabecera.file_size);
    printf("img_offset: %u\n", cabecera.img_offset);
    printf("header_size: %u\n", cabecera.header_size);
    printf("width: %u\n", cabecera.width);
    printf("height: %u\n", cabecera.height);
    printf("bitplanes: %u\n", cabecera.bitplanes);
    printf("point_size: %u\n", cabecera.point_size);
    printf("compression: %s\n", cabecera.compression ? "Sí" : "No");
    printf("image_size: %u\n", cabecera.image_size);
    printf("horz_res: %u\n", cabecera.horz_res);
    printf("vert_res: %u\n", cabecera.vert_res);
    printf("palette_size: %u\n", cabecera.palette_size);
    printf("important_colors: %u\n", cabecera.important_colors);


}


int main(int argc, char **argv){


    FILE *pf = NULL;
    struct BMP cabecera;


    //-->Error messages
    if (argc < 2){
        fprintf(stderr, "Usage: %s <File to scan>\n\n", argv[0]);
        return EXIT_FAILURE;
    }

    if ( !(pf = fopen(argv[1], "r+"))  ){
        fprintf(stderr, "File %s not found.\n", argv[1]);
        return EXIT_FAILURE;
    }

    //--> Memoria, tamaño, cuántos, fichero
    fread(&cabecera, sizeof(struct BMP), 1, pf);



    if ( cabecera.magic != 'B' + 'M' * 0x100  ){
        fprintf(stderr, "This is not a BitMap.\n");
        return EXIT_FAILURE;
    }

    show(cabecera);


fclose(pf);

return EXIT_SUCCESS;

}
