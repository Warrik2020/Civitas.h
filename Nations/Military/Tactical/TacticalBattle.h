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
        bool TryOpenSandbox(void* age, const char*& refusal) const { void* args[] = { age, &refusal }; return CallStaticValue<bool>("TryOpenSandbox", args, 2); }
        int StartAlive(int side) const { void* args[] = { &side }; return CallValue<int>("StartAlive", args, 1); }
        void* EntryOf(int divisionId) const { void* args[] = { &divisionId }; return Call("EntryOf", args, 1); }
        void* EntryBySim(int simIndex) const { void* args[] = { &simIndex }; return Call("EntryBySim", args, 1); }
        void* LocalToTile(void* local) const { void* args[] = { local }; return Call("LocalToTile", args, 1); }
        void* TileToLocal(void* tile) const { void* args[] = { tile }; return Call("TileToLocal", args, 1); }
        void* LocalToWorld(void* local) const { void* args[] = { local }; return Call("LocalToWorld", args, 1); }
        void* ScreenToLocal(void* screen) const { void* args[] = { screen }; return Call("ScreenToLocal", args, 1); }
        void* LocalToRender(void* local) const { void* args[] = { local }; return Call("LocalToRender", args, 1); }
        void* LocalToScreen(void* local) const { void* args[] = { local }; return Call("LocalToScreen", args, 1); }
        void* TileToWorld(void* tile) const { void* args[] = { tile }; return Call("TileToWorld", args, 1); }
        bool CanOpen(void* seedIds) const { void* args[] = { seedIds }; return CallStaticValue<bool>("CanOpen", args, 1); }
        bool TryOpen(void* seedIds, const char*& refusal) const { void* args[] = { seedIds, &refusal }; return CallStaticValue<bool>("TryOpen", args, 2); }
        bool CallIn(int divisionId, void* localTarget, const char*& refusal) const { void* args[] = { &divisionId, localTarget, &refusal }; return CallValue<bool>("CallIn", args, 3); }
        int PickOffFieldAt(void* screen) const { void* args[] = { screen }; return CallValue<int>("PickOffFieldAt", args, 1); }
        int PickDivisionAt(void* screen) const { void* args[] = { screen }; return CallValue<int>("PickDivisionAt", args, 1); }
        bool CallIn(int divisionId, void* localTarget) const { void* args[] = { &divisionId, localTarget }; return CallValue<bool>("CallIn", args, 2); }
        bool IsControllableFormation(int formation) const { void* args[] = { &formation }; return CallValue<bool>("IsControllableFormation", args, 1); }
        void NotifyPlayerOrderFormation(int formation) const { void* args[] = { &formation }; Call("NotifyPlayerOrderFormation", args, 1); }
        bool IsControllable(int battalion) const { void* args[] = { &battalion }; return CallValue<bool>("IsControllable", args, 1); }
        bool IsAuto(int simDivision) const { void* args[] = { &simDivision }; return CallValue<bool>("IsAuto", args, 1); }
        void SetAuto(int simDivision, bool on) const { void* args[] = { &simDivision, &on }; Call("SetAuto", args, 2); }
        void NotifyPlayerOrder(int battalion) const { void* args[] = { &battalion }; Call("NotifyPlayerOrder", args, 1); }
        bool IsFormationAuto(int formation) const { void* args[] = { &formation }; return CallValue<bool>("IsFormationAuto", args, 1); }
        void SetFormationAuto(int formation, bool on) const { void* args[] = { &formation, &on }; Call("SetFormationAuto", args, 2); }
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
        int divisionId() const { return ReadField<int>("divisionId"); }
        void SetDivisionId(int value) const { WriteField<int>("divisionId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int simIndex() const { return ReadField<int>("simIndex"); }
        void SetSimIndex(int value) const { WriteField<int>("simIndex", value); }
        void* entryPos() const { return ReadField<void*>("entryPos"); }
        void SetEntryPos(void* value) const { WriteField<void*>("entryPos", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        bool controllable() const { return ReadField<bool>("controllable"); }
        void SetControllable(bool value) const { WriteField<bool>("controllable", value); }
        bool auto_() const { return ReadField<bool>("auto"); }
        void SetAuto(bool value) const { WriteField<bool>("auto", value); }
        bool removed() const { return ReadField<bool>("removed"); }
        void SetRemoved(bool value) const { WriteField<bool>("removed", value); }
        bool handedBack() const { return ReadField<bool>("handedBack"); }
        void SetHandedBack(bool value) const { WriteField<bool>("handedBack", value); }
        int startMen() const { return ReadField<int>("startMen"); }
        void SetStartMen(int value) const { WriteField<int>("startMen", value); }
        int divisionId() const { return ReadField<int>("divisionId"); }
        void SetDivisionId(int value) const { WriteField<int>("divisionId", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        uint32_t color() const { return ReadField<uint32_t>("color"); }
        void SetColor(uint32_t value) const { WriteField<uint32_t>("color", value); }
        int arm() const { return ReadField<int>("arm"); }
        void SetArm(int value) const { WriteField<int>("arm", value); }
        int men() const { return ReadField<int>("men"); }
        void SetMen(int value) const { WriteField<int>("men", value); }
        int establishment() const { return ReadField<int>("establishment"); }
        void SetEstablishment(int value) const { WriteField<int>("establishment", value); }
        float distanceTiles() const { return ReadField<float>("distanceTiles"); }
        void SetDistanceTiles(float value) const { WriteField<float>("distanceTiles", value); }
        float arrivesIn() const { return ReadField<float>("arrivesIn"); }
        void SetArrivesIn(float value) const { WriteField<float>("arrivesIn", value); }
        bool called() const { return ReadField<bool>("called"); }
        void SetCalled(bool value) const { WriteField<bool>("called", value); }
        int divisionId() const { return ReadField<int>("divisionId"); }
        void SetDivisionId(int value) const { WriteField<int>("divisionId", value); }
        void* target() const { return ReadField<void*>("target"); }
        void SetTarget(void* value) const { WriteField<void*>("target", value); }
        float at() const { return ReadField<float>("at"); }
        void SetAt(float value) const { WriteField<float>("at", value); }
    };
}
