#include "Suma2.h"
#include "Suma1.h"
#include "PolozeniePoczatkowe.h"

float Suma2 ()
{
  return Suma (Suma1(), PolozeniePoczatkowe());
}
