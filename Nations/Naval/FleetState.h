#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class FleetState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FleetState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "FleetState") {}
    public:
        bool InCombat(int tick) const { void* __callArgs[] = { &tick }; return CallValue<bool>("InCombat", __callArgs, 1); }
        void SnapRender() const { Call("SnapRender", nullptr, 0); }
        void* OrdinalName(int n) const { void* __callArgs[] = { &n }; return CallStatic("OrdinalName", __callArgs, 1); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void ordinal(int value) const { WriteField<int>("ordinal", value); }
        void* customName() const { return ReadField<void*>("customName"); }
        void customName(void* value) const { WriteField<void*>("customName", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        void* heading() const { return ReadField<void*>("heading"); }
        void heading(void* value) const { WriteField<void*>("heading", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void waterTile(int value) const { WriteField<int>("waterTile", value); }
        int mode() const { return ReadField<int>("mode"); }
        void mode(int value) const { WriteField<int>("mode", value); }
        int patrolSize() const { return ReadField<int>("patrolSize"); }
        void patrolSize(int value) const { WriteField<int>("patrolSize", value); }
        void* target() const { return ReadField<void*>("target"); }
        void target(void* value) const { WriteField<void*>("target", value); }
        bool hasTarget() const { return ReadField<bool>("hasTarget"); }
        void hasTarget(bool value) const { WriteField<bool>("hasTarget", value); }
        int escortDivisionId() const { return ReadField<int>("escortDivisionId"); }
        void escortDivisionId(int value) const { WriteField<int>("escortDivisionId", value); }
        int chaseFleetId() const { return ReadField<int>("chaseFleetId"); }
        void chaseFleetId(int value) const { WriteField<int>("chaseFleetId", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void manualControl(bool value) const { WriteField<bool>("manualControl", value); }
        void* route() const { return ReadField<void*>("route"); }
        void route(void* value) const { WriteField<void*>("route", value); }
        int routeCount() const { return ReadField<int>("routeCount"); }
        void routeCount(int value) const { WriteField<int>("routeCount", value); }
        int leg() const { return ReadField<int>("leg"); }
        void leg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void legPos(float value) const { WriteField<float>("legPos", value); }
        int replanTick() const { return ReadField<int>("replanTick"); }
        void replanTick(int value) const { WriteField<int>("replanTick", value); }
        float strength() const { return ReadField<float>("strength"); }
        void strength(float value) const { WriteField<float>("strength", value); }
        float org() const { return ReadField<float>("org"); }
        void org(float value) const { WriteField<float>("org", value); }
        int homeCityTile() const { return ReadField<int>("homeCityTile"); }
        void homeCityTile(int value) const { WriteField<int>("homeCityTile", value); }
        int lastCombatTick() const { return ReadField<int>("lastCombatTick"); }
        void lastCombatTick(int value) const { WriteField<int>("lastCombatTick", value); }
        int combatStartTick() const { return ReadField<int>("combatStartTick"); }
        void combatStartTick(int value) const { WriteField<int>("combatStartTick", value); }
        int lastEnemyNationId() const { return ReadField<int>("lastEnemyNationId"); }
        void lastEnemyNationId(int value) const { WriteField<int>("lastEnemyNationId", value); }
        int engagedFleetId() const { return ReadField<int>("engagedFleetId"); }
        void engagedFleetId(int value) const { WriteField<int>("engagedFleetId", value); }
        float reach() const { return ReadField<float>("reach"); }
        void reach(float value) const { WriteField<float>("reach", value); }
        bool inPort() const { return ReadField<bool>("inPort"); }
        void inPort(bool value) const { WriteField<bool>("inPort", value); }
        uint8_t aiMission() const { return ReadField<uint8_t>("aiMission"); }
        void aiMission(uint8_t value) const { WriteField<uint8_t>("aiMission", value); }
        int aiMissionUntil() const { return ReadField<int>("aiMissionUntil"); }
        void aiMissionUntil(int value) const { WriteField<int>("aiMissionUntil", value); }
        int aiTargetTile() const { return ReadField<int>("aiTargetTile"); }
        void aiTargetTile(int value) const { WriteField<int>("aiTargetTile", value); }
        void* renderPos() const { return ReadField<void*>("renderPos"); }
        void renderPos(void* value) const { WriteField<void*>("renderPos", value); }
        void* renderVel() const { return ReadField<void*>("renderVel"); }
        void renderVel(void* value) const { WriteField<void*>("renderVel", value); }
        bool renderInit() const { return ReadField<bool>("renderInit"); }
        void renderInit(bool value) const { WriteField<bool>("renderInit", value); }
        float fxDamage() const { return ReadField<float>("fxDamage"); }
        void fxDamage(float value) const { WriteField<float>("fxDamage", value); }
    };
}
