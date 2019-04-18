#include <iostream>
#include "CAsmuo.h"


int main(){

   CAsmuo vienas{"Jonas", "Aitis", "39906151023"};
   vienas.keiskVieta(54,26);
   vienas.rodykViska();

   CAsmuo kita{"Asta", "Aitė", "49906151024"};
   kita.keiskVieta(51,-0.78);
   kita.rodykViska();

   return 0;

}
