#ifndef SYNTHTEST_H
#define SYNTHTEST_H
#include "Synth.h"
#include "Modules.h"
#include "ModuleExternalInput.h"


class SynthTest : public Synth
{
    public:
    ModuleConstant param[8];

    SynthTest(Input_Manager * inputManager)
    {
    
        //Define Node Objects
  ModuleWavetableOsc *moduleWavetableOsc_1 = new ModuleWavetableOsc();
  ModuleMixer2 *moduleMixer2_1 = new ModuleMixer2();
  ModuleWavetableOsc *moduleWavetableOsc_2 = new ModuleWavetableOsc();
  ModuleExternalInput *pot1 = new ModuleExternalInput(1,inputManager);
  ModuleExternalInput *pot2 = new ModuleExternalInput(2,inputManager);

  moduleMixer2_1->ch1=moduleWavetableOsc_1;
  moduleMixer2_1->ch2=moduleWavetableOsc_2;
  moduleWavetableOsc_1->frequency_input = pot1;
  moduleWavetableOsc_2->frequency_input = pot2;


  this->last_module = moduleMixer2_1;
        
    }
};
#endif // SYNTHTEST_H    


/* 

This is espnode86 stuff do not edit

--BEGINESPNODEPATCH--
djIuMS4xCm5ldHdvcmsvYWRkLXBhdGNoIHNhZDQgcm9vdApwYXRjaC9vcGVuIHNhZDQKcGF0Y2gvYWRkLW5vZGUgc2FkNCA0ZHg1IGVzcG5vZGUvbm9kZWxpc3QgRXNwbm9kZSUyMFBhbGV0dGUKbm9kZS90dXJuLW9uIDRkeDUKcGF0Y2gvYWRkLW5vZGUgc2FkNCB4
aGlsIHdhdmUvb3NjaWxsYXRvciBPc2NpbGxhdG9yCm5vZGUvdHVybi1vbiB4aGlsCm5vZGUvYWRkLWlubGV0IHhoaWwgNXRxeCBlc3Bub2RlL3N0cmluZyBmcmVxdWVuY3lfaW5wdXQgZnJlcXVlbmN5X2lucHV0Cm5vZGUvYWRkLWlubGV0IHhoaWwgano3ZyBlc3Bu
b2RlL3N0cmluZyB3YXZldGFibGVfaW5wdXQgd2F2ZXRhYmxlX2lucHV0Cm5vZGUvYWRkLW91dGxldCB4aGlsIGR2YTggZXNwbm9kZS9zdHJpbmcgT3V0IE91dApwYXRjaC9hZGQtbm9kZSBzYWQ0IGg1enggb3V0cHV0L2RhYyBBdWRpbyUyMERBQwpub2RlL3R1cm4t
b24gaDV6eApub2RlL2FkZC1pbmxldCBoNXp4IGpzYXQgZXNwbm9kZS9zdHJpbmcgYXVkaW9faW5wdXQgYXVkaW9faW5wdXQKcGF0Y2gvYWRkLW5vZGUgc2FkNCB3ZTdoIHNpZ25hbC9taXhlcjIgMiUyMENoJTIwTWl4ZXIKbm9kZS90dXJuLW9uIHdlN2gKbm9kZS9h
ZGQtaW5sZXQgd2U3aCBmeGw1IGVzcG5vZGUvc3RyaW5nIGNoMSBjaDEKbm9kZS9hZGQtaW5sZXQgd2U3aCBwNWZwIGVzcG5vZGUvc3RyaW5nIGNoMiBjaDIKbm9kZS9hZGQtb3V0bGV0IHdlN2ggODUzciBlc3Bub2RlL3N0cmluZyBPdXQgT3V0CnBhdGNoL2FkZC1u
b2RlIHNhZDQga3l0biB3YXZlL29zY2lsbGF0b3IgT3NjaWxsYXRvcgpub2RlL3R1cm4tb24ga3l0bgpub2RlL2FkZC1pbmxldCBreXRuIG5nNzcgZXNwbm9kZS9zdHJpbmcgZnJlcXVlbmN5X2lucHV0IGZyZXF1ZW5jeV9pbnB1dApub2RlL2FkZC1pbmxldCBreXRu
IHo4dTkgZXNwbm9kZS9zdHJpbmcgd2F2ZXRhYmxlX2lucHV0IHdhdmV0YWJsZV9pbnB1dApub2RlL2FkZC1vdXRsZXQga3l0biBkbWw0IGVzcG5vZGUvc3RyaW5nIE91dCBPdXQKcGF0Y2gvYWRkLW5vZGUgc2FkNCByeXl0IGlucHV0L3BvdGVudGlvbWV0ZXIgUG90
ZW50aW8lMjB+JTIwSW5wdXQKbm9kZS90dXJuLW9uIHJ5eXQKbm9kZS9hZGQtaW5sZXQgcnl5dCByOW1hIGVzcG5vZGUvc3RyaW5nIHNhbXBsZSBzYW1wbGUKbm9kZS9hZGQtb3V0bGV0IHJ5eXQgejRtYiBlc3Bub2RlL3N0cmluZyBvdXQgb3V0CnBhdGNoL2FkZC1u
b2RlIHNhZDQgZmQ0aCBpbnB1dC9wb3RlbnRpb21ldGVyIFBvdGVudGlvJTIwfiUyMElucHV0Cm5vZGUvdHVybi1vbiBmZDRoCm5vZGUvYWRkLWlubGV0IGZkNGggYnhwdyBlc3Bub2RlL3N0cmluZyBzYW1wbGUgc2FtcGxlCm5vZGUvYWRkLW91dGxldCBmZDRoIGgy
cTQgZXNwbm9kZS9zdHJpbmcgb3V0IG91dApub2RlL21vdmUgNGR4NSAzMCAyMApub2RlL21vdmUgeGhpbCA3MDUgMTgyCm5vZGUvbW92ZSBoNXp4IDEwODQgMjIyCm5vZGUvbW92ZSB3ZTdoIDkyNSAyMTgKbm9kZS9tb3ZlIGt5dG4gNzAyIDI4NApub2RlL21vdmUg
cnl5dCA0NDggMTQ4Cm5vZGUvbW92ZSBmZDRoIDQ1NCAyNzYKb3V0bGV0L2Nvbm5lY3QgZHZhOCBmeGw1IDN1OG4Kb3V0bGV0L2Nvbm5lY3QgZG1sNCBwNWZwIGJ4M2MKb3V0bGV0L2Nvbm5lY3QgODUzciBqc2F0IHUzZ20Kb3V0bGV0L2Nvbm5lY3QgejRtYiA1dHF4
IDNwcXkKb3V0bGV0L2Nvbm5lY3QgaDJxNCBuZzc3IDVnbTYKbm9kZS91cGRhdGUtaW5sZXQgeGhpbCBqejdnIHdhdmV0YWJsZV9pbnB1dCAwCm5vZGUvdXBkYXRlLWlubGV0IGt5dG4gejh1OSB3YXZldGFibGVfaW5wdXQgMApub2RlL3VwZGF0ZS1pbmxldCByeXl0
IHI5bWEgc2FtcGxlIDEKbm9kZS91cGRhdGUtaW5sZXQgZmQ0aCBieHB3IHNhbXBsZSAy
--ENDESPNODEPATCH--

*/
