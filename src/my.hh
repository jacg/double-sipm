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

  static G4long seed;
  my();

private:
  std::unique_ptr<G4GenericMessenger> msngr;
  void set_random_seed(G4long seed);
};

#endif // MY_HH
