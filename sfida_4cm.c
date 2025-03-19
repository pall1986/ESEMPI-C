#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char secret[]="Napoleone";//STRINGA OFFUSCATA
int time1=100000;
void visualizza_codice()
{
char codice[] =
        "#include <stdio.h>\n"
        "#include <stdlib.h>\n"
        "#include <unistd.h>\n"
        "#include <string.h>\n"
        "char secret[]=\"NAPNAPNAP\";//STRINGA OFFUSCATA\n"
        "int time1=100000;\n"
        "void visualizza_codice()\n"
        "{\n"
        "    CODICE CHE STAI VISUALIZZANDO"
        "}\n"
        "void test_string()\n"
        "{\n"
        "    printf(\"Inserisci la tua stringa di 9 caratteri: \");\n"
        "    char test[9];\n"
        "    scanf(\"%9s\", test);\n"
        "    for (int car=0; car<sizeof(test)/sizeof (char);car++ )\n"
        "    {\n"
        "        if (test[car]==secret[car])\n"
        "        {\n"
        "            printf(\"Sto controllando\\n\");\n"
        "            usleep(time1*10);\n"
        "        }\n"
        "        else{\n"
        "            printf(\"Stringa errata!\\n\");\n"
        "            car=10;\n"
        "        }\n"
        "    }\n"
        "}\n"
        "int main()\n"
        "{\n"
        "    char frase[]=\"Buongiorno ! Inserisci il tuo nome\\n\";\n"
        "    int lettera=0;\n"
        "    int time2=2000000;\n"
        "    int scelta;\n"
        "    int error=1;\n"
        "    char menu0[]=\"Cosa vuoi fare?\\n\";\n"
        "    char menu1[]=\"1 - visualizza il codice di questo programma\\n\";\n"
        "    char menu2[]=\"2 - indizio 1\\n\";\n"
        "    char menu3[]=\"3 - indizio 2\\n\";\n"
        "    char menu4[]=\"4 - indizio 3\\n\";\n"
        "    char menu5[]=\"5 - SOLUZIONE E NON TI FACCIO PERDERE TEMPO \\n\";\n"
        "    char menu6[]=\"6 - testa il segreto\\n\";\n"
        "    char menu7[]=\"7 - frase del giorno 1\\n\";\n"
        "    char menu8[]=\"8 - frase del giorno 2\\n\";\n"
        "    char menu9[]=\"9 - esci 2\\n\";\n"
        "    char menu10[]=\"Qualsiasi altro tasto ripropone questa scelta\\n\";\n"
        "    char name[200];\n"
        "    while (frase[lettera]!='\\0')\n"
        "    {\n"
        "        putchar(frase[lettera]);\n"
        "        fflush(stdout);\n"
        "        usleep(time1);\n"
        "        lettera++;\n"
        "    }\n"
        "    scanf(\"%99s\", name);\n"
        "    snprintf(name, sizeof(name), \"%s farò di tutto per farti perdere tempo a risolvere questo enigma\\n\", name);\n"
        "    lettera=0;\n"
        "    while (name[lettera]!='\\0')\n"
        "    {\n"
        "        putchar(name[lettera]);\n"
        "        fflush(stdout);\n"
        "        usleep(time1);\n"
        "        lettera++;\n"
        "    }\n"
        "    do\n"
        "    {\n"
        "        printf(menu0);\n"
        "        printf(menu1);\n"
        "        printf(menu2);\n"
        "        printf(menu3);\n"
        "        printf(menu4);\n"
        "        printf(menu5);\n"
        "        printf(menu6);\n"
        "        printf(menu7);\n"
        "        printf(menu8);\n"
        "        printf(menu9);\n"
        "        error=scanf(\"%d\", &scelta);\n"
        "        getchar();\n"
        "        if (error != 1)\n"
        "        {\n"
        "            printf(\"Tasto errato\\n\");\n"
        "        }\n"
        "        switch (scelta)\n"
        "        {\n"
        "            case 1:\n"
        "                visualizza_codice();\n"
        "                usleep(time2);\n"
        "                error=2;\n"
        "                break;\n"
        "            case 2:\n"
        "                printf(\"Se ti faccio perdere tempo, evidentemente un motivo c'è..... \\n Penalità di 1s.\\n\");\n"
        "                time2=time2+time1*10;\n"
        "                usleep(time2);\n"
        "                error=2;\n"
        "                break;\n"
        "            case 3:\n"
        "                printf(\"Cerca di capire la procedura associata al case 5.\\n Come si comporta il programma quando un carattere della riga inserita dall'utente corrisponde con il carattere della parola da trovare?\\n Penalità di 1s.\\n\");\n"
        "                time2=time2+time1*10;\n"
        "                usleep(time2);\n"
        "                error=2;\n"
        "                break;\n"
        "            case 4:\n"
        "                printf(\"Ei fu. Siccome immobile, dato il mortal sospiro....(A. Manzoni) \\n Penalità di 1s.\\n\");\n"
        "                time2=time2+time1*10;\n"
        "                usleep(time2);\n"
        "                error=2;\n"
        "                break;\n"
        "            case 5:\n"
        "                printf(\"Complimenti! La tua pigrizia ti ha portato ad un vicolo cieco! Ti farò perdere ulteriore tempo\\n\");\n"
        "                time2=time2+5000000;\n"
        "                error=2;\n"
        "                break;\n"
        "            case 6:\n"
        "                test_string();\n"
        "                error=2;\n"
        "                break;\n"
        "            case 7:\n"
        "                printf(\"Una fork è per sempre ! (E. Pallotta, E. Zingaretti)\\n\");\n"
        "                error=2;\n"
        "                break;\n"
        "            case 8:\n"
        "                printf(\"Prof. posso andare in bagno? (N. Ion)\\n\");\n"
        "                error=2;\n"
        "                break;\n"
        "            case 9:\n"
        "                error=1;\n"
        "                break;\n"
        "            default:\n"
        "                printf(\"Tasto errato\\n\");\n"
        "                error=2;\n"
        "        }\n"
        "    }\n"
        "    while (error != 1);\n"
        "    usleep(time2);\n"
        "    printf(\"Anche nell'uscita ti faccio perdere tempo!!\");\n"
        "    return 0;\n"
        "}";

    printf("%s\n", codice);

}

    void test_string()
    {
    printf("Inserisci la tua stringa di 9 caratteri: ");
    char test[9];
    scanf("%9s", test);
    for (int car=0; car<sizeof(test)/sizeof (char);car++ )
    {

        if (test[car]==secret[car])
        {
            printf("Sto controllando\n");
            usleep(time1*10);
        }
        else{
            printf("Stringa errata!\n");
                car=10;

        }
    }


    }
int main()
{

    char frase[]="Buongiorno ! Inserisci il tuo nome\n";
    int lettera=0;

    int time2=2000000;
    int scelta;
    int error=1;
    char menu0[]="Cosa vuoi fare?\n";
    char menu1[]="1 - visualizza il codice di questo programma\n";
    char menu2[]="2 - indizio 1\n";
    char menu3[]="3 - indizio 2\n";
    char menu4[]="4 - indizio 3\n";
    char menu5[]="5 - SOLUZIONE E NON TI FACCIO PERDERE TEMPO \n";
    char menu6[]="6 - testa il segreto\n";
    char menu7[]="7 - frase del giorno 1\n";
    char menu8[]="8 - frase del giorno 2\n";
    char menu9[]="9 - esci 2\n";
    char menu10[]="Qualsiasi altro tasto ripropone qeusta scelta\n";
    char name[200];
    while (frase[lettera]!='\0')
    {
    putchar(frase[lettera]);
    fflush(stdout);
    usleep(time1);
    lettera++;
    }

    scanf("%99s", name);
    snprintf(name, sizeof(name), "%s farò di tutto per farti perdere tempo a risolvere questo enigma\n", name);

    lettera=0;
while (name[lettera]!='\0')
    {
    putchar(name[lettera]);
    fflush(stdout);
    usleep(time1);
    lettera++;
    }

do
{
    printf(menu0);
    printf(menu1);
    printf(menu2);
    printf(menu3);
    printf(menu4);
    printf(menu5);
    printf(menu6);
    printf(menu7);
    printf(menu8);
    printf(menu9);
    error=scanf("%d", &scelta);
    getchar();
    if (error != 1)
    {
    printf("Tasto errato\n");
    }
    switch (scelta)
    {
        case 1:
            visualizza_codice();
            usleep(time2);
            error=2;
            break;
        case 2:
            printf("Se ti faccio perdere tempo, evidentemente un motivo c'è..... \n Penalità di 1s.\n");
            time2=time2+time1*10;
            usleep(time2);
            error=2;
            break;
        case 3:
            printf("Cerca di capire la procedura associata al case 5.\n Come si comporta il programma quando un carattere della riga inserita dall'utente corrisponde con il carattere della parola da trovare?\n Penalità di 1s.\n");
            time2=time2+time1*10;
            usleep(time2);
            error=2;
            break;
        case 4:
            printf("Ei fu. Siccome immobile, dato il mortal sospiro....(A. Manzoni) \n Penalità di 1s.\n");
            time2=time2+time1*10;
            usleep(time2);
            error=2;
            break;
        case 5:
            printf("Complimenti! La tua pigrizia ti ha portato ad un vicolo cieco! Ti farò perdere ulteriore tempo\n");
            time2=time2+5000000;
            error=2;
            break;
        case 6:
            test_string();
            error=2;
            break;
        case 7:
            printf("Una fork è per sempre ! (E. Pallotta, E. Zingaretti)\n");
            error=2;
            break;
        case 8:
            printf("Prof. posso andare in bagno? (N. Ion)\n");
            error=2;
            break;
        case 9:
            error=1;
            break;
    default:
        printf("Tasto errato\n");
        getchar();
        error=2;
    }
    }
while (error != 1) ;


usleep(time2);
printf("Anche nell'uscita ti faccio perdere tempo!!");

    return 0;
}
