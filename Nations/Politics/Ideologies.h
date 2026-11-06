#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class Ideologies : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Ideologies(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "Ideologies") {}
    public:
        void* DisplayName(int i) const { void* __callArgs[] = { &i }; return CallStatic("DisplayName", __callArgs, 1); }
        void* Blurb(int i) const { void* __callArgs[] = { &i }; return CallStatic("Blurb", __callArgs, 1); }
        void* ColorOf(int i) const { void* __callArgs[] = { &i }; return CallStatic("ColorOf", __callArgs, 1); }
        void* ModifiersOf(int i) const { void* __callArgs[] = { &i }; return CallStatic("ModifiersOf", __callArgs, 1); }
        void* TitleFor(int i, bool female) const { void* __callArgs[] = { &i, &female }; return CallStatic("TitleFor", __callArgs, 2); }
        int UnlockYearOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("UnlockYearOf", __callArgs, 1); }
        bool AvailableIn(int i, int astronomicalYear) const { void* __callArgs[] = { &i, &astronomicalYear }; return CallStaticValue<bool>("AvailableIn", __callArgs, 2); }
        void* UnlockLabel(int i) const { void* __callArgs[] = { &i }; return CallStatic("UnlockLabel", __callArgs, 1); }
        bool IsHereditary(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<bool>("IsHereditary", __callArgs, 1); }
        bool RulesThroughFiefs(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<bool>("RulesThroughFiefs", __callArgs, 1); }
        float WelfareFloor(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<float>("WelfareFloor", __callArgs, 1); }
        int SignatureOf(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<int>("SignatureOf", __callArgs, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
