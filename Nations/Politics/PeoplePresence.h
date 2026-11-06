#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PeoplePresence : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplePresence(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PeoplePresence") {}
    public:
        float ValueOf(int c, int t) const { void* args[] = { &c, &t }; return CallStaticValue<float>("ValueOf", args, 2); }
        float AxisValue(int c, int realm, int zone, float zoneFrac, bool official) const { void* args[] = { &c, &realm, &zone, &zoneFrac, &official }; return CallStaticValue<float>("AxisValue", args, 5); }
        void Blend(void* e, int fallbackMask) const { void* args[] = { e, &fallbackMask }; CallStatic("Blend", args, 2); }
        float Value(void* e, int c) const { void* args[] = { e, &c }; return CallStaticValue<float>("Value", args, 2); }
        int BlendedStanding(void* e) const { void* args[] = { e }; return CallStaticValue<int>("BlendedStanding", args, 1); }
        bool PickRaise(void* e, int standingCap, bool allowZone, int& axis, bool& onZone) const { void* args[] = { e, &standingCap, &allowZone, &axis, &onZone }; return CallStaticValue<bool>("PickRaise", args, 5); }
        bool CanRaise(int t, int standingCap) const { void* args[] = { &t, &standingCap }; return CallStaticValue<bool>("CanRaise", args, 2); }
        bool AnyRaise(void* e, int standingCap, bool allowZone) const { void* args[] = { e, &standingCap, &allowZone }; return CallStaticValue<bool>("AnyRaise", args, 3); }
        int64_t MassUnits(int share, int maxForeign, int sumForeign) const { void* args[] = { &share, &maxForeign, &sumForeign }; return CallStaticValue<int64_t>("MassUnits", args, 3); }
        int Columns() const { return ReadStaticField<int>("Columns"); }
        float MassUnitsPerTile() const { return ReadStaticField<float>("MassUnitsPerTile"); }
    };
}
