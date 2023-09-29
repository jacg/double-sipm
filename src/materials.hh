#ifndef MATERIALS_HH
#define MATERIALS_HH

#include "my.hh"

#include <G4Material.hh>

G4Material*    csi_with_properties(const my& my);
G4Material*    air_with_properties();
G4Material* teflon_with_properties();

#endif // MATERIALS_HH
