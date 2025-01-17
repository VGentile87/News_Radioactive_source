#ifndef DetectorMessenger_h
#define DetectorMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class DetectorConstruction;
class G4UIdirectory;
class G4UIcmdWithAString;
class G4UIcmdWithAnInteger;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWithoutParameter;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class DetectorMessenger: public G4UImessenger
{
  public:
    DetectorMessenger(DetectorConstruction* );
    virtual ~DetectorMessenger();
    
  //virtual void SetNewValue(G4UIcommand*, G4String);
    
  private:
    DetectorConstruction* fDetConstruction;
  /*
    G4UIdirectory*             fN03Dir;
    G4UIdirectory*             fDetDir;
    G4UIcmdWithAString*        fAbsMaterCmd;
    G4UIcmdWithAString*        fGapMaterCmd;
    G4UIcmdWithADoubleAndUnit* fAbsThickCmd;
    G4UIcmdWithADoubleAndUnit* fGapThickCmd;
    G4UIcmdWithADoubleAndUnit* fSizeYZCmd;
    G4UIcmdWithAnInteger*      fNbLayersCmd;    
  */
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

