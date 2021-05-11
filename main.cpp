#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <string>
#include <fstream>
#include <conio.h>
#include "Opcje.h"
#include "Obsluga_GUI.h"
#include "Obsluga_gry.h"
#include "Obsluga_plikow_list_pamieci.h"
using namespace std;

/**
 * \mainpage
 * \par KOLKO_KRZYZYK_WERSJA_KONCOWA
 * \par Projekt z Przedmiot ZAP II
 *Program do gry w popularną na całym świecie grę KOLKO I KRZYK w wersji konsolowej.
 *Program daje mozliwosc uzytkownikowi wyboru 3 rodzaji gry, wyswietlania danych o autorze.
 *Ponadto daje mozliwosc wystwietlania historii rozgrywek podczas ostatniego uruchomienia programu i zobaczenia historii ruchow z ostatniej gry.
 *
 *
 * \author Tomasz Wardak
 * \date 2020.06.04
 * \version 3.0
 */

int main()
{
 powitanie();
 Sleep(3000);
 char wybor;//TA ZMIENNA JEST ODPOWIEDZIALNA ZA WYBOR RODZAJU GRY!!
 Lista *glowa=NULL;//INICJALIZACJA PIERWSZEGO ELEMENTU LISTU JEDNOKIERUNKOWEJ, KTORA BEDZIE UZYWANA DO PRZECHOWYWANIA POSZCZEGOLNYCH ROZGRYWEK
 Niestandardowa *poczatek=NULL;//INICJALIZACJA PIERWSZEGO ELEMENTU LISTY W KTOREJ BEDĄ PRZECHOWYWANE RUCHY Z OSTATNIEJ ROZGRYWKI Dla opcji 3;
 int rozgrywka=0;//ZMIENNA TYPU INT PRZECHOWUJACA WARTOSC ODPOWIADAJACA OSTATNIEMY WYBRANEGO TRYBOWI GRY
 char Gracz='O';//GRACZ ZACZYNA JAKO KOLKO
 Petla(wybor,Gracz,glowa,poczatek, rozgrywka);
    return 0;
}

