#ifndef WCSimDetectorMessenger_h
#define WCSimDetectorMessenger_h 1

class WCSimDetectorConstruction;
class G4UIdirectory;
class G4UIcmdWithAString;

#include "G4UImessenger.hh"
#include "globals.hh"
#include "G4ios.hh"
#include "G4UImessenger.hh"
#include "G4UIdirectory.hh"
#include "G4UIcmdWithADouble.hh"
#include "G4UIcmdWithoutParameter.hh"
#include "G4UIcmdWithABool.hh"
#include "G4UIcmdWithADoubleAndUnit.hh"

class WCSimDetectorMessenger: public G4UImessenger
{
 public:
  WCSimDetectorMessenger(WCSimDetectorConstruction* mpga);
  ~WCSimDetectorMessenger();
  
 public:
  void         SetNewValue(G4UIcommand* command, G4String newValues);
 
 private:
  WCSimDetectorConstruction* WCSimDetector;

 private: //commands
  
  G4UIdirectory*      WCSimDir;
  G4UIcmdWithAString* PMTConfig;
  G4UIcmdWithAString* PMTGeomDetails;
  G4UIcmdWithAString* PMTSize;
  G4UIcmdWithAString* SavePi0;
  G4UIcmdWithAString* WLSPSIZE;

  G4UIcmdWithAString* PMTQEMethod;
  G4UIcmdWithAString* tubeCmd;
  G4UIcmdWithAString* distortionCmd;
  G4UIcmdWithoutParameter* WCConstruct;

  //Winston cone and WLS options: K.Z.
  G4UIcmdWithABool* ConstructWLS;
  G4UIcmdWithABool* ConstructWLSP;
  G4UIcmdWithABool* ConstructLC;

};

#endif


