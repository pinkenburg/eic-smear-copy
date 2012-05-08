/**
 smearLinkDef.h

 \file
 Declaration of class smearLinkDef.

 \author Thomas Burton 
 \date 5/8/12
 \copyright 2012 BNL. All rights reserved.
*/

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ nestedclasses;
#pragma link C++ nestedtypedef;

// Namespace
#pragma link C++ namespace Smear;

// Functions
#pragma link C++ function SmearTree;
//#pragma link C++ function Smear::ParseInputFunction;

// Event structures
#pragma link C++ class Smear::Event+;
#pragma link C++ class Smear::ParticleMCS+;

// Core smearing components
#pragma link C++ class Smear::Acceptance+;
#pragma link C++ class Smear::Acceptance::CustomCut+;
#pragma link C++ class Smear::Acceptance::Zone+;
#pragma link C++ class Smear::Detector+;
#pragma link C++ class Smear::Distributor+;
#pragma link C++ class Smear::ParticleID+;
#pragma link C++ class Smear::Smearer+;

// Specialized smearing devices
#pragma link C++ class Smear::Bremsstrahlung+;
#pragma link C++ class Smear::Device+;
#pragma link C++ class Smear::Devious+;
#pragma link C++ class Smear::Tracker+;
#pragma link C++ Class Smear::EMCalorimeter+;
#pragma link C++ class Smear::HCalorimeter+;
#pragma link C++ class Smear::ParamSimple+;

// typedefs
#pragma link C++ class EventS;
#pragma link C++ class ParticleS;

#endif // __CINT__