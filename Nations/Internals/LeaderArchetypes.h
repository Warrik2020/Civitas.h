#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderArchetypes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderArchetypes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderArchetypes") {}
    public:
        void* DisplayName(int a) const { void* __callArgs[] = { &a }; return CallStatic("DisplayName", __callArgs, 1); }
        void* Blurb(int a) const { void* __callArgs[] = { &a }; return CallStatic("Blurb", __callArgs, 1); }
        void* Persona(int a) const { void* __callArgs[] = { &a }; return CallStatic("Persona", __callArgs, 1); }
        void* TraitCentre(int a) const { void* __callArgs[] = { &a }; return CallStatic("TraitCentre", __callArgs, 1); }
        float ResearchMulOf(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<float>("ResearchMulOf", __callArgs, 1); }
        float OpinionAddOf(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<float>("OpinionAddOf", __callArgs, 1); }
        float RivalryOf(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<float>("RivalryOf", __callArgs, 1); }
        void* ColorOf(int a) const { void* __callArgs[] = { &a }; return CallStatic("ColorOf", __callArgs, 1); }
        void* ModifiersOf(int a) const { void* __callArgs[] = { &a }; return CallStatic("ModifiersOf", __callArgs, 1); }
        bool IsValid(int raw) const { void* __callArgs[] = { &raw }; return CallStaticValue<bool>("IsValid", __callArgs, 1); }
        float Friction(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<float>("Friction", __callArgs, 2); }
        int RollFor(int g) const { void* __callArgs[] = { &g }; return CallStaticValue<int>("RollFor", __callArgs, 1); }
        int RollCoup() const { return CallStaticValue<int>("RollCoup", nullptr, 0); }
        void AppendEffects(void* sb, int a, const char* separator = ", ", bool colorize = false) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { sb, &a, managed_2, &colorize }; CallStatic("AppendEffects", __callArgs, 4); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* All() const { return ReadStaticField<void*>("All"); }
        float TraitSpread() const { return ReadStaticField<float>("TraitSpread"); }
    };
}
