#ifndef MY_HH
#define MY_HH

#include <G4GenericMessenger.hh>
#include <G4SystemOfUnits.hh>
#include <G4ParticleGun.hh>

struct my {
  G4double example_with_unit =    3    *  m;
  G4double csi_scint_yield   = 3200    / MeV;
  std::unique_ptr<G4ParticleGun> gun{};
  G4String particle = "e-";

  my() : msngr{new G4GenericMessenger{nullptr, "/my/", "docs: bla bla bla"}} {
    // The trailing slash after '/my' is CRUCIAL: without it, the msngr
    // violates the principle of least surprise.
    msngr -> DeclarePropertyWithUnit("example_with_unit", "m", example_with_unit);
    msngr -> DeclareProperty        ("csi_scint_yield"  ,      csi_scint_yield); // No unit because messenger does not understand `1 / MeV`
  }
  std::unique_ptr<G4GenericMessenger> msngr;
};

#endif // MY_HH
