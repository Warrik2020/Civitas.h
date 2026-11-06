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
        void* DisplayName(int a) const { void* args[] = { &a }; return CallStatic("DisplayName", args, 1); }
        void* Blurb(int a) const { void* args[] = { &a }; return CallStatic("Blurb", args, 1); }
        void* Persona(int a) const { void* args[] = { &a }; return CallStatic("Persona", args, 1); }
        void* TraitCentre(int a) const { void* args[] = { &a }; return CallStatic("TraitCentre", args, 1); }
        float ResearchMulOf(int a) const { void* args[] = { &a }; return CallStaticValue<float>("ResearchMulOf", args, 1); }
        float OpinionAddOf(int a) const { void* args[] = { &a }; return CallStaticValue<float>("OpinionAddOf", args, 1); }
        float RivalryOf(int a) const { void* args[] = { &a }; return CallStaticValue<float>("RivalryOf", args, 1); }
        void* ColorOf(int a) const { void* args[] = { &a }; return CallStatic("ColorOf", args, 1); }
        void* ModifiersOf(int a) const { void* args[] = { &a }; return CallStatic("ModifiersOf", args, 1); }
        bool IsValid(int raw) const { void* args[] = { &raw }; return CallStaticValue<bool>("IsValid", args, 1); }
        float Friction(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("Friction", args, 2); }
        int RollFor(int g) const { void* args[] = { &g }; return CallStaticValue<int>("RollFor", args, 1); }
        int RollCoup() const { return CallStaticValue<int>("RollCoup", nullptr, 0); }
        void AppendEffects(void* sb, int a, const char* separator = ", ", bool colorize = false) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { sb, &a, managed_2, &colorize }; CallStatic("AppendEffects", args, 4); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* All() const { return ReadStaticField<void*>("All"); }
        float TraitSpread() const { return ReadStaticField<float>("TraitSpread"); }
    };
}
