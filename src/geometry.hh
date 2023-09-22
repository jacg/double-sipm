#ifndef GEOMETRY_H_
#define GEOMETRY_H_

#include "my.hh"

#include <G4PVPlacement.hh>

G4PVPlacement* make_geometry(std::vector<std::vector<G4double>>& times_of_arrival, const my& my);

#endif // GEOMETRY_H_
