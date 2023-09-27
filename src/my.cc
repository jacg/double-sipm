#include "my.hh"

#include <G4UnitsTable.hh>

my::my() : msngr{new G4GenericMessenger{nullptr, "/my/", "docs: bla bla bla"}} {
  // The trailing slash after '/my' is CRUCIAL: without it, the msngr
  // violates the principle of least surprise.

  G4UnitDefinition::BuildUnitsTable();

  new G4UnitDefinition("1/MeV","1/MeV", "1/Energy", 1/MeV);
  msngr -> DeclarePropertyWithUnit("csi_scint_yield", "1/MeV", csi_scint_yield);
}
