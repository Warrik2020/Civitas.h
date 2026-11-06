#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class TacticalBattle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TacticalBattle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "TacticalBattle") {}
    public:
        bool TryOpenSandbox(void* age, const char*& refusal) const { void* __callArgs[] = { age, &refusal }; return CallStaticValue<bool>("TryOpenSandbox", __callArgs, 2); }
        int StartAlive(int side) const { void* __callArgs[] = { &side }; return CallValue<int>("StartAlive", __callArgs, 1); }
        void* EntryOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("EntryOf", __callArgs, 1); }
        void* EntryBySim(int simIndex) const { void* __callArgs[] = { &simIndex }; return Call("EntryBySim", __callArgs, 1); }
        void* LocalToTile(void* local) const { void* __callArgs[] = { local }; return Call("LocalToTile", __callArgs, 1); }
        void* TileToLocal(void* tile) const { void* __callArgs[] = { tile }; return Call("TileToLocal", __callArgs, 1); }
        void* LocalToWorld(void* local) const { void* __callArgs[] = { local }; return Call("LocalToWorld", __callArgs, 1); }
        void* ScreenToLocal(void* screen) const { void* __callArgs[] = { screen }; return Call("ScreenToLocal", __callArgs, 1); }
        void* LocalToRender(void* local) const { void* __callArgs[] = { local }; return Call("LocalToRender", __callArgs, 1); }
        void* LocalToScreen(void* local) const { void* __callArgs[] = { local }; return Call("LocalToScreen", __callArgs, 1); }
        void* TileToWorld(void* tile) const { void* __callArgs[] = { tile }; return Call("TileToWorld", __callArgs, 1); }
        bool CanOpen(void* seedIds) const { void* __callArgs[] = { seedIds }; return CallStaticValue<bool>("CanOpen", __callArgs, 1); }
        bool TryOpen(void* seedIds, const char*& refusal) const { void* __callArgs[] = { seedIds, &refusal }; return CallStaticValue<bool>("TryOpen", __callArgs, 2); }
        bool CallIn(int divisionId, void* localTarget, const char*& refusal) const { void* __callArgs[] = { &divisionId, localTarget, &refusal }; return CallValue<bool>("CallIn", __callArgs, 3); }
        int PickOffFieldAt(void* screen) const { void* __callArgs[] = { screen }; return CallValue<int>("PickOffFieldAt", __callArgs, 1); }
        int PickDivisionAt(void* screen) const { void* __callArgs[] = { screen }; return CallValue<int>("PickDivisionAt", __callArgs, 1); }
        bool CallIn(int divisionId, void* localTarget) const { void* __callArgs[] = { &divisionId, localTarget }; return CallValue<bool>("CallIn", __callArgs, 2); }
        bool IsControllableFormation(int formation) const { void* __callArgs[] = { &formation }; return CallValue<bool>("IsControllableFormation", __callArgs, 1); }
        void NotifyPlayerOrderFormation(int formation) const { void* __callArgs[] = { &formation }; Call("NotifyPlayerOrderFormation", __callArgs, 1); }
        bool IsControllable(int battalion) const { void* __callArgs[] = { &battalion }; return CallValue<bool>("IsControllable", __callArgs, 1); }
        bool IsAuto(int simDivision) const { void* __callArgs[] = { &simDivision }; return CallValue<bool>("IsAuto", __callArgs, 1); }
        void SetAuto(int simDivision, bool on) const { void* __callArgs[] = { &simDivision, &on }; Call("SetAuto", __callArgs, 2); }
        void NotifyPlayerOrder(int battalion) const { void* __callArgs[] = { &battalion }; Call("NotifyPlayerOrder", __callArgs, 1); }
        bool IsFormationAuto(int formation) const { void* __callArgs[] = { &formation }; return CallValue<bool>("IsFormationAuto", __callArgs, 1); }
        void SetFormationAuto(int formation, bool on) const { void* __callArgs[] = { &formation, &on }; Call("SetFormationAuto", __callArgs, 2); }
        void EndBattleByPlayer() const { Call("EndBattleByPlayer", nullptr, 0); }
        float GroundZ() const { return ReadStaticField<float>("GroundZ"); }
        float UrbanZ() const { return ReadStaticField<float>("UrbanZ"); }
        float WorksZ() const { return ReadStaticField<float>("WorksZ"); }
        float DotsZ() const { return ReadStaticField<float>("DotsZ"); }
        float FxZ() const { return ReadStaticField<float>("FxZ"); }
        float SelectionZ() const { return ReadStaticField<float>("SelectionZ"); }
        float CountersZ() const { return ReadStaticField<float>("CountersZ"); }
        float BadgesZ() const { return ReadStaticField<float>("BadgesZ"); }
        int PlayerSide() const { return ReadStaticField<int>("PlayerSide"); }
    };
}
