 #include <stdio.h>

 int main() {

    int GB = 1024;
    float cap_disc_GB = 0.0;
    int can_doc = 0;  
    float tam_doc_MB = 0.0;
    int can_ima = 0;
    float tam_ima_MB = 0.0;
    int can_vid = 0;
    float tam_vid_MB = 0.0;
    int can_pro = 0;
    float tam_pro_MB = 0.0;
    float esp_doc = 0.0;
    float esp_ima = 0.0;
    float esp_vid = 0.0;
    float esp_pro = 0.0;
    float esp_total = 0.0;
    float GB_usados = 0.0;
    float porcentaje = 0.0;

    printf("Cantidad de documentos: ");
    scanf("%d", &can_doc);

    printf("Tamaño de los documentos en MB: ");
    scanf("%f", &tam_doc_MB);

    printf("Cantidad de imágenes: ");
    scanf("%d", &can_ima);

    printf("Tamaño de las imágenes en MB: ");
    scanf("%f", &tam_ima_MB);

    printf("Cantidad de videos: ");
    scanf("%d", &can_vid);
    
    printf("Tamaño de los videos en MB: ");
    scanf("%f", &tam_vid_MB);   

    printf("Cantidad de programas: ");
    scanf("%d", &can_pro);

    printf("Tamaño de los programas en MB: ");
    scanf("%f", &tam_pro_MB);

    printf("Capacidad del disco en GB: ");
    scanf("%f", &cap_disc_GB);

    esp_doc = can_doc * tam_doc_MB;
    esp_ima = can_ima * tam_ima_MB; 
    esp_vid = can_vid * tam_vid_MB;
    esp_pro = can_pro * tam_pro_MB;
    esp_total = esp_doc + esp_ima + esp_vid + esp_pro;
    GB_usados = esp_total / GB;
    porcentaje = (GB_usados / cap_disc_GB) * 100;

    printf("El espacio total de los archivos es de %.2f MB\n", esp_total);
    printf("El espacio total de en GB es de: %.2f GB\n", GB_usados);
    printf("El porcentaje de almacenamiento utilizado es del: %.2f%%\n", porcentaje);

    return 0;

}