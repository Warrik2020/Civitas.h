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
        uint8_t FortLevelUnder(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<uint8_t>("FortLevelUnder", __callArgs, 1); }
        float PowerOf(int stateId, int cat) const { void* __callArgs[] = { &stateId, &cat }; return CallStaticValue<float>("PowerOf", __callArgs, 2); }
        float Effectiveness(void* b, void* p, void* cfg) const { void* __callArgs[] = { b, p, cfg }; return CallStaticValue<float>("Effectiveness", __callArgs, 3); }
        int SlotsOf(void* p, void* it, void* scfg, void* cfg, int landTileCount, bool capital) const { void* __callArgs[] = { p, it, scfg, cfg, &landTileCount, &capital }; return CallStaticValue<int>("SlotsOf", __callArgs, 6); }
        void EnsureCapacity(int stateId) const { void* __callArgs[] = { &stateId }; CallStatic("EnsureCapacity", __callArgs, 1); }
        void Publish(int stateId, void* powerByCategory, int fortLevel) const { void* __callArgs[] = { &stateId, powerByCategory, &fortLevel }; CallStatic("Publish", __callArgs, 3); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* FortLevelByState() const { return ReadStaticField<void*>("FortLevelByState"); }
        void FortLevelByState(void* value) const { WriteStaticField<void*>("FortLevelByState", value); }
        void* PowerByState() const { return ReadStaticField<void*>("PowerByState"); }
        void PowerByState(void* value) const { WriteStaticField<void*>("PowerByState", value); }
        void* Grid() const { return ReadStaticField<void*>("Grid"); }
        void Grid(void* value) const { WriteStaticField<void*>("Grid", value); }
        int CategoryCount() const { return ReadStaticField<int>("CategoryCount"); }
    };
}
