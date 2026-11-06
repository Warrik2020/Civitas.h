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
        void* DisplayName(int t) const { void* args[] = { &t }; return CallStatic("DisplayName", args, 1); }
        void* Blurb(int t) const { void* args[] = { &t }; return CallStatic("Blurb", args, 1); }
        void* ModifiersOf(int t) const { void* args[] = { &t }; return CallStatic("ModifiersOf", args, 1); }
        int64_t Opposite(int t) const { void* args[] = { &t }; return CallStaticValue<int64_t>("Opposite", args, 1); }
        bool IsValid(int raw) const { void* args[] = { &raw }; return CallStaticValue<bool>("IsValid", args, 1); }
        int64_t Bit(int t) const { void* args[] = { &t }; return CallStaticValue<int64_t>("Bit", args, 1); }
        bool Has(int64_t mask, int t) const { void* args[] = { &mask, &t }; return CallStaticValue<bool>("Has", args, 2); }
        int64_t Sanitise(int64_t mask) const { void* args[] = { &mask }; return CallStaticValue<int64_t>("Sanitise", args, 1); }
        int CountOf(int64_t mask) const { void* args[] = { &mask }; return CallStaticValue<int>("CountOf", args, 1); }
        void* Combined(int64_t mask) const { void* args[] = { &mask }; return CallStatic("Combined", args, 1); }
        void Recompute(void* c) const { void* args[] = { c }; CallStatic("Recompute", args, 1); }
        int64_t TryAdd(int64_t mask, int t) const { void* args[] = { &mask, &t }; return CallStaticValue<int64_t>("TryAdd", args, 2); }
        void AppendNames(void* sb, int64_t mask, const char* separator = ", ", const char* emptyText = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(emptyText ? emptyText : "") : nullptr; void* args[] = { sb, &mask, managed_2, managed_3 }; CallStatic("AppendNames", args, 4); }
        void AppendEffects(void* sb, int t, const char* separator = ", ") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { sb, &t, managed_2 }; CallStatic("AppendEffects", args, 3); }
        int64_t RollAtSite(int x, int y, void* n, void* grid, void* cfg, void* cities) const { void* args[] = { &x, &y, n, grid, cfg, cities }; return CallStaticValue<int64_t>("RollAtSite", args, 6); }
        int64_t RollEmergent(void* c, void* cfg, float ticksPerYear, int baseMaxBuildings, float trainingPower) const { void* args[] = { c, cfg, &ticksPerYear, &baseMaxBuildings, &trainingPower }; return CallStaticValue<int64_t>("RollEmergent", args, 5); }
        int Count() const { return ReadStaticField<int>("Count"); }
        int MaxTraits() const { return ReadStaticField<int>("MaxTraits"); }
        int64_t SiteMask() const { return ReadStaticField<int64_t>("SiteMask"); }
        int64_t EmergentMask() const { return ReadStaticField<int64_t>("EmergentMask"); }
        void* CapitalSeat() const { return ReadStaticField<void*>("CapitalSeat"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
