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
        bool InCombat(int tick) const { void* args[] = { &tick }; return CallValue<bool>("InCombat", args, 1); }
        void SnapRender() const { Call("SnapRender", nullptr, 0); }
        void* OrdinalName(int n) const { void* args[] = { &n }; return CallStatic("OrdinalName", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void SetOrdinal(int value) const { WriteField<int>("ordinal", value); }
        void* customName() const { return ReadField<void*>("customName"); }
        void SetCustomName(void* value) const { WriteField<void*>("customName", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* heading() const { return ReadField<void*>("heading"); }
        void SetHeading(void* value) const { WriteField<void*>("heading", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void SetWaterTile(int value) const { WriteField<int>("waterTile", value); }
        int mode() const { return ReadField<int>("mode"); }
        void SetMode(int value) const { WriteField<int>("mode", value); }
        int patrolSize() const { return ReadField<int>("patrolSize"); }
        void SetPatrolSize(int value) const { WriteField<int>("patrolSize", value); }
        void* target() const { return ReadField<void*>("target"); }
        void SetTarget(void* value) const { WriteField<void*>("target", value); }
        bool hasTarget() const { return ReadField<bool>("hasTarget"); }
        void SetHasTarget(bool value) const { WriteField<bool>("hasTarget", value); }
        int escortDivisionId() const { return ReadField<int>("escortDivisionId"); }
        void SetEscortDivisionId(int value) const { WriteField<int>("escortDivisionId", value); }
        int chaseFleetId() const { return ReadField<int>("chaseFleetId"); }
        void SetChaseFleetId(int value) const { WriteField<int>("chaseFleetId", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void SetManualControl(bool value) const { WriteField<bool>("manualControl", value); }
        void* route() const { return ReadField<void*>("route"); }
        void SetRoute(void* value) const { WriteField<void*>("route", value); }
        int routeCount() const { return ReadField<int>("routeCount"); }
        void SetRouteCount(int value) const { WriteField<int>("routeCount", value); }
        int leg() const { return ReadField<int>("leg"); }
        void SetLeg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void SetLegPos(float value) const { WriteField<float>("legPos", value); }
        int replanTick() const { return ReadField<int>("replanTick"); }
        void SetReplanTick(int value) const { WriteField<int>("replanTick", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        int homeCityTile() const { return ReadField<int>("homeCityTile"); }
        void SetHomeCityTile(int value) const { WriteField<int>("homeCityTile", value); }
        int lastCombatTick() const { return ReadField<int>("lastCombatTick"); }
        void SetLastCombatTick(int value) const { WriteField<int>("lastCombatTick", value); }
        int combatStartTick() const { return ReadField<int>("combatStartTick"); }
        void SetCombatStartTick(int value) const { WriteField<int>("combatStartTick", value); }
        int lastEnemyNationId() const { return ReadField<int>("lastEnemyNationId"); }
        void SetLastEnemyNationId(int value) const { WriteField<int>("lastEnemyNationId", value); }
        int engagedFleetId() const { return ReadField<int>("engagedFleetId"); }
        void SetEngagedFleetId(int value) const { WriteField<int>("engagedFleetId", value); }
        float reach() const { return ReadField<float>("reach"); }
        void SetReach(float value) const { WriteField<float>("reach", value); }
        bool inPort() const { return ReadField<bool>("inPort"); }
        void SetInPort(bool value) const { WriteField<bool>("inPort", value); }
        uint8_t aiMission() const { return ReadField<uint8_t>("aiMission"); }
        void SetAiMission(uint8_t value) const { WriteField<uint8_t>("aiMission", value); }
        int aiMissionUntil() const { return ReadField<int>("aiMissionUntil"); }
        void SetAiMissionUntil(int value) const { WriteField<int>("aiMissionUntil", value); }
        int aiTargetTile() const { return ReadField<int>("aiTargetTile"); }
        void SetAiTargetTile(int value) const { WriteField<int>("aiTargetTile", value); }
        void* renderPos() const { return ReadField<void*>("renderPos"); }
        void SetRenderPos(void* value) const { WriteField<void*>("renderPos", value); }
        void* renderVel() const { return ReadField<void*>("renderVel"); }
        void SetRenderVel(void* value) const { WriteField<void*>("renderVel", value); }
        bool renderInit() const { return ReadField<bool>("renderInit"); }
        void SetRenderInit(bool value) const { WriteField<bool>("renderInit", value); }
        float fxDamage() const { return ReadField<float>("fxDamage"); }
        void SetFxDamage(float value) const { WriteField<float>("fxDamage", value); }
    };
}
