#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int an, a , score=0 , r,i,limit,b;
  const char *eln[] = {
      "Abey Saale",       "Hydrogen (H)",      "Helium (He)",
      "Lithium (Li)",     "Beryllium (Be)",    "Boron (B)",
      "Carbon (C)",       "Nitrogen (N)",      "Oxygen (O)",
      "Fluorine (F)",     "Neon (Ne)",         "Sodium (Na)",
      "Magnesium (Mg)",   "Aluminum (Al)",     "Silicon (Si)",
      "Phosphorus (P)",   "Sulfur (S)",        "Chlorine (Cl)",
      "Argon (Ar)",       "Potassium (K)",     "Calcium (Ca)",
      "Scandium (Sc)",    "Titanium (Ti)",     "Vanadium (V)",
      "Chromium (Cr)",    "Manganese (Mn)",    "Iron (Fe)",
      "Cobalt (Co)",      "Nickel (Ni)",       "Copper (Cu)",
      "Zinc (Zn)",        "Gallium (Ga)",      "Germanium (Ge)",
      "Arsenic (As)",     "Selenium (Se)",     "Bromine (Br)",
      "Krypton (Kr)",     "Rubidium (Rb)",     "Strontium (Sr)",
      "Yttrium (Y)",      "Zirconium (Zr)",    "Niobium (Nb)",
      "Molybdenum (Mo)",  "Technetium (Tc)",   "Ruthenium (Ru)",
      "Rhodium (Rh)",     "Palladium (Pd)",    "Silver (Ag)",
      "Cadmium (Cd)",     "Indium (In)",       "Tin (Sn)",
      "Antimony (Sb)",    "Tellurium (Te)",    "Iodine (I)",
      "Xenon (Xe)",       "Cesium (Cs)",       "Barium (Ba)",
      "Lanthanum (La)",   "Cerium (Ce)",       "Praseodymium (Pr)",
      "Neodymium (Nd)",   "Promethium (Pm)",   "Samarium (Sm)",
      "Europium (Eu)",    "Gadolinium (Gd)",   "Terbium (Tb)",
      "Dysprosium (Dy)",  "Holmium (Ho)",      "Erbium (Er)",
      "Thulium (Tm)",     "Ytterbium (Yb)",    "Lutetium (Lu)",
      "Hafnium (Hf)",     "Tantalum (Ta)",     "Tungsten (W)",
      "Rhenium (Re)",     "Osmium (Os)",       "Iridium (Ir)",
      "Platinum (Pt)",    "Gold (Au)",         "Mercury (Hg)",
      "Thallium (Tl)",    "Lead (Pb)",         "Bismuth (Bi)",
      "Polonium (Po)",    "Astatine (At)",     "Radon (Rn)",
      "Francium (Fr)",    "Radium (Ra)",       "Actinium (Ac)",
      "Thorium (Th)",     "Protactinium (Pa)", "Uranium (U)",
      "Neptunium (Np)",   "Plutonium (Pu)",    "Americium (Am)",
      "Curium (Cm)",      "Berkelium (Bk)",    "Californium (Cf)",
      "Einsteinium (Es)", "Fermium (Fm)",      "Mendelevium (Md)",
      "Nobelium (No)",    "Lawrencium (Lr)",   "Rutherfordium (Rf)",
      "Dubnium (Db)",     "Seaborgium (Sg)",   "Bohrium (Bh)",
      "Hassium (Hs)",     "Meitnerium (Mt)",   "Darmstadtium (Ds)",
      "Roentgenium (Rg)", "Copernicium (Cn)",  "Nihonium (Nh)",
      "Flerovium (Fl)",   "Moscovium (Mc)",    "Livermorium (Lv)",
      "Tennessine (Ts)",  "Oganesson (Og)"};
  
  printf("How many times do you want to play the quiz BAAAAAAAAAAAAAKA ???? :   ");
  scanf("%d",&r);
  system("clear");
  printf("Huh Okay\n");
  printf("Choose your difficulty noooob hahaha: \n[1] Noob [1-18]\n[2] Intermediate[1-36]\n[3]Piro [1-54] \n[4] Ultra piro [1-86]\n[5] GOD [1-118]\n=> ");
  scanf("%d",&b);
   system("clear");
  if(b == 1){
    printf("Hahahahaha , as expected noob . Fine get ready hahahaha");
    limit = 18;
  }
  else if(b == 2){
    printf("Are you sure ? That is above your level noob . Hahahahaha ");
    limit = 36 ;
  }
  else if(b == 3){
    printf("Know you limits . hahahh , you cant win i bet ");
    limit = 54;
  }
  else if(b == 4){
    printf("LMAAAAAAAAAAAOOOOOOOO , Look at this noob , he thinks he is Mendeliv ");
    limit = 86;
  }
  else if(b == 5){
    printf("Are you comedy me??");
    limit = 118;
  }
  for (i=1;i<=r;i++)
    {an = (rand() % limit) + 1;
      printf("\n\n What is the atomic mass of %s : ", eln[an]);
  scanf("%d", &a);
      if (a == an) {
    printf("\nCORRECT MF , You Nerd \nThe Atomic Number of %s is %d", eln[an],
           an);
      score++;
  } else
    printf("\nBAAAAAKA , Stop watching anime and go read your books . \nThe "
           "Atomic Number of %s is %d",
           eln[an], an);
    }
  // if(score/r*100>70)
  //   printf("\nHmmmm . I dont have anything to say . You are a nerd who beat me.");
  // else
  //   printf("\nKNOW YOUR PLACE FOOL");
  printf("\nSCORE : %d",score);
  return 0;
}
