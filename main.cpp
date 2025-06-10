#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    printf("Srednja Strukovna Škola Samobor\n1.G\nMarin Boršić & Lovro Guliš\n\n");
    int izbor = 0;
    while (1)
    {
        printf("Dobrodošli u igru Spoji 5\n\n");
        printf("Pritisnite broj kraj odgovarajućeg izbora.\n\n");
        printf("1:Započni igru\n\n");
        printf("2:Upute\n\n");
        printf("3:Izlaz\n\n");
        scanf("%d", &izbor);
        printf("\n");
        if (izbor == 1)
        {
            printf("Započeli ste igru.\n\n\n");

            

            int polje[6][7] = {0};
            int igrac = 1;
            int UneseniStupac, RedZaUbacivanje = -1;
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    printf("🞅 ");
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }
            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }
            
            int red = RedZaUbacivanje;
            int stupac = UneseniStupac;
            int igracVrijednost = polje[red][stupac];
            int count = 1;

            // Provjera horizontalno
            int j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            int i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 1;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
            printf("\n");
            scanf("%d", &UneseniStupac);
            UneseniStupac -= 1;
            printf("\n");
            for (int i = 5; i >= 0; i--)
            {
                if (polje[i][UneseniStupac] == 0)
                {
                    polje[i][UneseniStupac] = 2;
                    RedZaUbacivanje = i;
                    break;
                }
            }

            for (int i = 1; i <= 7; i++)
            {
                printf("%d ", i);
            }
            printf("\n\n");

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (polje[i][j] == 1)
                    {
                        printf("\033[0;31m🞅\033[0m ");
                    }
                    else if (polje[i][j] == 2)
                    {
                        printf("\033[0;34m🞅\033[0m ");
                    }
                    else
                    {
                        printf("🞅 ");
                    }
                }
                printf("\n");
            }

            red = RedZaUbacivanje;
            stupac = UneseniStupac;
            igracVrijednost = polje[red][stupac];
            count = 1;

            // Provjera horizontalno 
            j = stupac - 1;
            while (j >= 0 && polje[red][j] == igracVrijednost)
            {
                count++;
                j--;
            }
            j = stupac + 1;
            while (j < 7 && polje[red][j] == igracVrijednost)
            {
                count++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            // Provjera vertikalno 
            count = 1;
            i = red + 1;
            while (i < 6 && polje[i][stupac] == igracVrijednost)
            {
                count++;
                i++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac - 1;
            while (i >= 0 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j--;
            }
            i = red + 1;
            j = stupac + 1;
            while (i < 6 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j++;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }

            //  Provjera dijagonala 
            count = 1;
            i = red - 1;
            j = stupac + 1;
            while (i >= 0 && j < 7 && polje[i][j] == igracVrijednost)
            {
                count++;
                i--;
                j++;
            }
            i = red + 1;
            j = stupac - 1;
            while (i < 6 && j >= 0 && polje[i][j] == igracVrijednost)
            {
                count++;
                i++;
                j--;
            }
            if (count >= 5)
            {
                printf("Igrač %d je pobijedio!\n", igracVrijednost);
                break;
            }
        }
        else if (izbor == 2)
        {
            printf("Upute:\n\n");
            printf("Ova je igra slična kao spoji 4, samo što sada moraš spojiti 5!\n\n");
            printf("Pravila igre:\n");
            printf("1.:Odlučiti koji igrać će biti crveni, a koji žuti.\n");
            printf("2.:Odlučiti koji igrač će igrati prvi.\n");
            printf("3.:Dva igrača igraju naizmjenično.\n");
            printf("4.:Igrač bira stupac u koji želi ubaciti žeon, žeton se ne može baciti u stupac koji je pun!\n");
            printf("5.:Kada žeton padne, nije ga dopušteno pomicati.\n\n");
            printf("Cilj igre: Pobjednik je igrač koji je spojio 5 žetona za redom, u bilo kojem smjeru (dijagonali, redu ili stupcu).\n");
            printf("Ako je cijela mreža ispunjena (i nitko nije spojio 5), igra završava neriješeno.\n\n");
            printf("SRETNO!!!");
        }
        else if (izbor == 3)
        {
            printf("Izlaz iz igre.\n\n");
            break;
        }
        else
        {
            printf("Nepoznati izbor, pokušajte ponovo s brojem 1, 2 ili 3!");
        }
        printf("\n\n");
    }
    return 0;
}