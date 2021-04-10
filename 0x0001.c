#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Definir cores */

#define RESET "\x1b[0m" /* Reset Colors */

#define RED "\x1b[31m"
#define magenta "\x1b[35m"
#define green "\x1b[32m"
#define white "\x1b[37m"

/* Fim Definir Cores*/

int main() {

printf("\n\n");
printf(magenta"      ██████╗ ██╗  ██╗ ██████╗  ██████╗  ██████╗  ██╗\n" );
printf(magenta"     ██╔═████╗╚██╗██╔╝██╔═████╗██╔═████╗██╔═████╗███║\n" );
printf(magenta"     ██║██╔██║ ╚███╔╝ ██║██╔██║██║██╔██║██║██╔██║╚██║\n" );
printf(magenta"     ████╔╝██║ ██╔██╗ ████╔╝██║████╔╝██║████╔╝██║ ██║\n" );
printf(magenta"     ╚██████╔╝██╔╝ ██╗╚██████╔╝╚██████╔╝╚██████╔╝ ██║\n" );
printf(magenta"      ╚═════╝ ╚═╝  ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝  ╚═╝\n" );
printf("\n");
                                                                    

    printf(white "        0x0001 Massive Tool Installer for Pentest.\n" RESET);
    printf(white "                   Created by Mark662\n\n" RESET);
    printf(RED "Atenção!\n" RESET);
    printf(white "É permitido a adição de novas ferramentas em nossa ferramenta e melhoria de códigos, portanto, dê-me o cŕedito.\n\n" RESET);
    
    printf(RED "Heads up!\n" RESET);
    printf(white "Adding new tools to our tool and improving the codes is allowed, so if you are going to post, give me the credits.\n\n\n" RESET);
        
        char respo='n';
            printf(magenta "Deseja fazer download das ferramentas? (S/N): " RESET);
            scanf("%s", &respo);

                if (respo == 'S') {
                    printf(RED "Iniciando instalação dos pacotes...\n\n" RESET);
                    system("sudo apt update && sudo apt install whois && sudo apt install vim && sudo apt install apache2 && sudo apt install sqlmap && sudo apt install nmap && sudo apt install netcat && sudo apt install hydra && sudo apt install wget");
                }
                else 
                {
                    printf(white "Saindo...\n\n" RESET);
                }

    return 0;
}