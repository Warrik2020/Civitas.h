#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class StateIndustry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateIndustry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "StateIndustry") {}
    public:
        uint8_t FortLevelUnder(void* d) const { void* args[] = { d }; return CallStaticValue<uint8_t>("FortLevelUnder", args, 1); }
        float PowerOf(int stateId, int cat) const { void* args[] = { &stateId, &cat }; return CallStaticValue<float>("PowerOf", args, 2); }
        float Effectiveness(void* b, void* p, void* cfg) const { void* args[] = { b, p, cfg }; return CallStaticValue<float>("Effectiveness", args, 3); }
        int SlotsOf(void* p, void* it, void* scfg, void* cfg, int landTileCount, bool capital) const { void* args[] = { p, it, scfg, cfg, &landTileCount, &capital }; return CallStaticValue<int>("SlotsOf", args, 6); }
        void EnsureCapacity(int stateId) const { void* args[] = { &stateId }; CallStatic("EnsureCapacity", args, 1); }
        void Publish(int stateId, void* powerByCategory, int fortLevel) const { void* args[] = { &stateId, powerByCategory, &fortLevel }; CallStatic("Publish", args, 3); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* FortLevelByState() const { return ReadStaticField<void*>("FortLevelByState"); }
        void SetFortLevelByState(void* value) const { WriteStaticField<void*>("FortLevelByState", value); }
        void* PowerByState() const { return ReadStaticField<void*>("PowerByState"); }
        void SetPowerByState(void* value) const { WriteStaticField<void*>("PowerByState", value); }
        void* Grid() const { return ReadStaticField<void*>("Grid"); }
        void SetGrid(void* value) const { WriteStaticField<void*>("Grid", value); }
        int CategoryCount() const { return ReadStaticField<int>("CategoryCount"); }
    };
}
