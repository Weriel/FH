/*
  Ersteller: Stefan Jonach
  Erstellungsdatum: 10.11.2023
  Details:Im Editor Lite XL geschrieben und mit gcc compiled.
*/

#include <stdio.h>

char vorname[16];  //String mit max. 15 Zeichen für den Vornamen
char famname[21];  //String mit max. 20 Zeichen für den Nachnamen
int alter;         //Ganzzahl um das Alter abzuspeichern
char geschlecht;   //Variable die ein Symbol einspeichern kann. Für das Geschlecht
float bmi;         //Gleitkommazahl für den BMI

//Als Erstes wird eine Funktion zur Ausgabe der Variablen erstellt
void datenkontrolle(){
  printf("\nIhr Vorname lautet %s\n"
  "Ihr Nachname lautet %s\n"
  "Sie sind %d alt\n"
  "Ihre Geschlechtsangabe lautet %c\n"
  "Ihr BMI betraegt %f\n\n",
  vorname, famname, alter, geschlecht, bmi);
}

//Für die Optik wird eine Funktion die eine Trennlinie druckt erstellt
void separator(){
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
//Für
int main(){
  separator();
  printf("Willkommen! Dieses Programm dient zur Aufnahme ihrer Daten in unser System.\n"
  "Drücken Sie Enter um fortzufahren!");
  getchar();
  separator();
  printf("\tGeben Sie bitte Ihren Vornamen ein (Maximal 15 Zeichen): ");
  scanf("%s", &vorname);
  printf("\tGeben Sie bitte Ihren Nachname ein (Maximal 20 Zeichen): ");
  scanf("%s", &famname);
  printf("\tGeben Sie bitte Ihr Alter an: ");
  scanf("%i", &alter);
  printf("\tGeben Sie bitte Ihr Geschlecht an (m/w/d): ");
  scanf(" %c", &geschlecht);
  printf("\tGeben Sie bitte Ihren BMI an: ");
  scanf("%f", &bmi);
  separator();
  datenkontrolle();
  return 0;
}

