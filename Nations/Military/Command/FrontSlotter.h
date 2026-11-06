#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontSlotter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontSlotter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontSlotter") {}
    public:
        void* SupportOffset(int row, void* back, float body) const { void* __callArgs[] = { &row, back, &body }; return CallStatic("SupportOffset", __callArgs, 3); }
        float ReserveShare(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<float>("ReserveShare", __callArgs, 1); }
        void WeighPosts(void* line, void* mil, void* buckets, void* cfg, int tick, void* cities) const { void* __callArgs[] = { line, mil, buckets, cfg, &tick, cities }; Call("WeighPosts", __callArgs, 6); }
        void Assign(void* army, void* line, void* divs, void* mil, void* grid, void* allowed = nullptr) const { void* __callArgs[] = { army, line, divs, mil, grid, allowed }; Call("Assign", __callArgs, 6); }
        void AssignByLand(void* army, void* line, void* divs, void* mil, void* grid, void* allowed, void* divComp, void* postComp, void* lands) const { void* __callArgs[] = { army, line, divs, mil, grid, allowed, divComp, postComp, lands }; Call("AssignByLand", __callArgs, 9); }
        float MaxBody(void* divs) const { void* __callArgs[] = { divs }; return CallStaticValue<float>("MaxBody", __callArgs, 1); }
        int DepthMax() const { return ReadStaticField<int>("DepthMax"); }
        float DepthStepTiles() const { return ReadStaticField<float>("DepthStepTiles"); }
        float ReserveBackTiles() const { return ReadStaticField<float>("ReserveBackTiles"); }
        float ThreatWeight() const { return ReadStaticField<float>("ThreatWeight"); }
        float ValueWeight() const { return ReadStaticField<float>("ValueWeight"); }
        float CityRadiusTiles() const { return ReadStaticField<float>("CityRadiusTiles"); }
        float CityValueCap() const { return ReadStaticField<float>("CityValueCap"); }
        void* slots() const { return ReadField<void*>("slots"); }
        void* slotOf() const { return ReadField<void*>("slotOf"); }
        float SupportGap() const { return ReadStaticField<float>("SupportGap"); }
        float RowBodies() const { return ReadStaticField<float>("RowBodies"); }
    };
}
