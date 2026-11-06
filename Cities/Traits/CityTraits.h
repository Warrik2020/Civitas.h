#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Traits
{
    class CityTraits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityTraits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Traits", "CityTraits") {}
    public:
        void* DisplayName(int t) const { void* __callArgs[] = { &t }; return CallStatic("DisplayName", __callArgs, 1); }
        void* Blurb(int t) const { void* __callArgs[] = { &t }; return CallStatic("Blurb", __callArgs, 1); }
        void* ModifiersOf(int t) const { void* __callArgs[] = { &t }; return CallStatic("ModifiersOf", __callArgs, 1); }
        int64_t Opposite(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int64_t>("Opposite", __callArgs, 1); }
        bool IsValid(int raw) const { void* __callArgs[] = { &raw }; return CallStaticValue<bool>("IsValid", __callArgs, 1); }
        int64_t Bit(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int64_t>("Bit", __callArgs, 1); }
        bool Has(int64_t mask, int t) const { void* __callArgs[] = { &mask, &t }; return CallStaticValue<bool>("Has", __callArgs, 2); }
        int64_t Sanitise(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int64_t>("Sanitise", __callArgs, 1); }
        int CountOf(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int>("CountOf", __callArgs, 1); }
        void* Combined(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStatic("Combined", __callArgs, 1); }
        void Recompute(void* c) const { void* __callArgs[] = { c }; CallStatic("Recompute", __callArgs, 1); }
        int64_t TryAdd(int64_t mask, int t) const { void* __callArgs[] = { &mask, &t }; return CallStaticValue<int64_t>("TryAdd", __callArgs, 2); }
        void AppendNames(void* sb, int64_t mask, const char* separator = ", ", const char* emptyText = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(emptyText ? emptyText : "") : nullptr; void* __callArgs[] = { sb, &mask, managed_2, managed_3 }; CallStatic("AppendNames", __callArgs, 4); }
        void AppendEffects(void* sb, int t, const char* separator = ", ") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { sb, &t, managed_2 }; CallStatic("AppendEffects", __callArgs, 3); }
        int64_t RollAtSite(int x, int y, void* n, void* grid, void* cfg, void* cities) const { void* __callArgs[] = { &x, &y, n, grid, cfg, cities }; return CallStaticValue<int64_t>("RollAtSite", __callArgs, 6); }
        int64_t RollEmergent(void* c, void* cfg, float ticksPerYear, int baseMaxBuildings, float trainingPower) const { void* __callArgs[] = { c, cfg, &ticksPerYear, &baseMaxBuildings, &trainingPower }; return CallStaticValue<int64_t>("RollEmergent", __callArgs, 5); }
        int Count() const { return ReadStaticField<int>("Count"); }
        int MaxTraits() const { return ReadStaticField<int>("MaxTraits"); }
        int64_t SiteMask() const { return ReadStaticField<int64_t>("SiteMask"); }
        int64_t EmergentMask() const { return ReadStaticField<int64_t>("EmergentMask"); }
        void* CapitalSeat() const { return ReadStaticField<void*>("CapitalSeat"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
