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
        void* DisplayName(int i) const { void* args[] = { &i }; return CallStatic("DisplayName", args, 1); }
        void* Blurb(int i) const { void* args[] = { &i }; return CallStatic("Blurb", args, 1); }
        void* ColorOf(int i) const { void* args[] = { &i }; return CallStatic("ColorOf", args, 1); }
        void* ModifiersOf(int i) const { void* args[] = { &i }; return CallStatic("ModifiersOf", args, 1); }
        void* TitleFor(int i, bool female) const { void* args[] = { &i, &female }; return CallStatic("TitleFor", args, 2); }
        int UnlockYearOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("UnlockYearOf", args, 1); }
        bool AvailableIn(int i, int astronomicalYear) const { void* args[] = { &i, &astronomicalYear }; return CallStaticValue<bool>("AvailableIn", args, 2); }
        void* UnlockLabel(int i) const { void* args[] = { &i }; return CallStatic("UnlockLabel", args, 1); }
        bool IsHereditary(int i) const { void* args[] = { &i }; return CallStaticValue<bool>("IsHereditary", args, 1); }
        bool RulesThroughFiefs(int i) const { void* args[] = { &i }; return CallStaticValue<bool>("RulesThroughFiefs", args, 1); }
        float WelfareFloor(int i) const { void* args[] = { &i }; return CallStaticValue<float>("WelfareFloor", args, 1); }
        int SignatureOf(int i) const { void* args[] = { &i }; return CallStaticValue<int>("SignatureOf", args, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
