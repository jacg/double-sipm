#include "my.hh"

#include <G4UnitsTable.hh>
#include <Randomize.hh>


my::my() : msngr{new G4GenericMessenger{nullptr, "/my/", "docs: bla bla bla"}} {
  // The trailing slash after '/my' is CRUCIAL: without it, the msngr
  // violates the principle of least surprise.

  G4UnitDefinition::BuildUnitsTable();

  new G4UnitDefinition("1/MeV","1/MeV", "1/Energy", 1/MeV);
  msngr -> DeclarePropertyWithUnit("csi_scint_yield", "1/MeV", csi_scint_yield);
  msngr -> DeclareMethod("seed", &my::set_random_seed);
}

void my::set_random_seed(G4long seed) { G4Random::setTheSeed(seed); }

G4long my::seed = 123456789;
