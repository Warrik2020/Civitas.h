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
        float ValueOf(int c, int t) const { void* __callArgs[] = { &c, &t }; return CallStaticValue<float>("ValueOf", __callArgs, 2); }
        float AxisValue(int c, int realm, int zone, float zoneFrac, bool official) const { void* __callArgs[] = { &c, &realm, &zone, &zoneFrac, &official }; return CallStaticValue<float>("AxisValue", __callArgs, 5); }
        void Blend(void* e, int fallbackMask) const { void* __callArgs[] = { e, &fallbackMask }; CallStatic("Blend", __callArgs, 2); }
        float Value(void* e, int c) const { void* __callArgs[] = { e, &c }; return CallStaticValue<float>("Value", __callArgs, 2); }
        int BlendedStanding(void* e) const { void* __callArgs[] = { e }; return CallStaticValue<int>("BlendedStanding", __callArgs, 1); }
        bool PickRaise(void* e, int standingCap, bool allowZone, int& axis, bool& onZone) const { void* __callArgs[] = { e, &standingCap, &allowZone, &axis, &onZone }; return CallStaticValue<bool>("PickRaise", __callArgs, 5); }
        bool CanRaise(int t, int standingCap) const { void* __callArgs[] = { &t, &standingCap }; return CallStaticValue<bool>("CanRaise", __callArgs, 2); }
        bool AnyRaise(void* e, int standingCap, bool allowZone) const { void* __callArgs[] = { e, &standingCap, &allowZone }; return CallStaticValue<bool>("AnyRaise", __callArgs, 3); }
        int64_t MassUnits(int share, int maxForeign, int sumForeign) const { void* __callArgs[] = { &share, &maxForeign, &sumForeign }; return CallStaticValue<int64_t>("MassUnits", __callArgs, 3); }
        int Columns() const { return ReadStaticField<int>("Columns"); }
        float MassUnitsPerTile() const { return ReadStaticField<float>("MassUnitsPerTile"); }
    };
}
