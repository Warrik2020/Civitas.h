#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class SpearheadDriver : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SpearheadDriver(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "SpearheadDriver") {}
    public:
        void* MembersOf(int index) const { void* __callArgs[] = { &index }; return Call("MembersOf", __callArgs, 1); }
        void Split(void* store, void* army, void* divs, float share = 0.25f) const { void* __callArgs[] = { store, army, divs, &share }; Call("Split", __callArgs, 4); }
        void Drive(void* store, void* army, void* mil, void* grid, void* cfg, void* buckets, int tick, bool ai) const { void* __callArgs[] = { store, army, mil, grid, cfg, buckets, &tick, &ai }; Call("Drive", __callArgs, 8); }
        float TakenArc(void* path, int nation, void* grid) const { void* __callArgs[] = { path, &nation, grid }; return CallStaticValue<float>("TakenArc", __callArgs, 3); }
        float ArmyShare() const { return ReadStaticField<float>("ArmyShare"); }
        float AheadTiles() const { return ReadStaticField<float>("AheadTiles"); }
        float LateralTiles() const { return ReadStaticField<float>("LateralTiles"); }
        int RowWidth() const { return ReadStaticField<int>("RowWidth"); }
        float RowGapTiles() const { return ReadStaticField<float>("RowGapTiles"); }
        float AssembleBackTiles() const { return ReadStaticField<float>("AssembleBackTiles"); }
        float SampleTiles() const { return ReadStaticField<float>("SampleTiles"); }
        float JoinSlackTiles() const { return ReadStaticField<float>("JoinSlackTiles"); }
        float CorridorTiles() const { return ReadStaticField<float>("CorridorTiles"); }
        float RejoinTiles() const { return ReadStaticField<float>("RejoinTiles"); }
        float RouteStepTiles() const { return ReadStaticField<float>("RouteStepTiles"); }
        int MaxRoutePoints() const { return ReadStaticField<int>("MaxRoutePoints"); }
        bool KeepAttacks() const { return ReadStaticField<bool>("KeepAttacks"); }
        void KeepAttacks(bool value) const { WriteStaticField<bool>("KeepAttacks", value); }
    };
}
