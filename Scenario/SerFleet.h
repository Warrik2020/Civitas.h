#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerFleet : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerFleet(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerFleet") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void SetOrdinal(int value) const { WriteField<int>("ordinal", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float x() const { return ReadField<float>("x"); }
        void SetX(float value) const { WriteField<float>("x", value); }
        float y() const { return ReadField<float>("y"); }
        void SetY(float value) const { WriteField<float>("y", value); }
        float headX() const { return ReadField<float>("headX"); }
        void SetHeadX(float value) const { WriteField<float>("headX", value); }
        float headY() const { return ReadField<float>("headY"); }
        void SetHeadY(float value) const { WriteField<float>("headY", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void SetWaterTile(int value) const { WriteField<int>("waterTile", value); }
        int mode() const { return ReadField<int>("mode"); }
        void SetMode(int value) const { WriteField<int>("mode", value); }
        int patrolSize() const { return ReadField<int>("patrolSize"); }
        void SetPatrolSize(int value) const { WriteField<int>("patrolSize", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void SetManualControl(bool value) const { WriteField<bool>("manualControl", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        int homeCityTile() const { return ReadField<int>("homeCityTile"); }
        void SetHomeCityTile(int value) const { WriteField<int>("homeCityTile", value); }
        bool hasTarget() const { return ReadField<bool>("hasTarget"); }
        void SetHasTarget(bool value) const { WriteField<bool>("hasTarget", value); }
        float targetX() const { return ReadField<float>("targetX"); }
        void SetTargetX(float value) const { WriteField<float>("targetX", value); }
        float targetY() const { return ReadField<float>("targetY"); }
        void SetTargetY(float value) const { WriteField<float>("targetY", value); }
        void* lane() const { return ReadField<void*>("lane"); }
        void SetLane(void* value) const { WriteField<void*>("lane", value); }
        int leg() const { return ReadField<int>("leg"); }
        void SetLeg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void SetLegPos(float value) const { WriteField<float>("legPos", value); }
        int escortDivisionIndex() const { return ReadField<int>("escortDivisionIndex"); }
        void SetEscortDivisionIndex(int value) const { WriteField<int>("escortDivisionIndex", value); }
        int chaseFleetIndex() const { return ReadField<int>("chaseFleetIndex"); }
        void SetChaseFleetIndex(int value) const { WriteField<int>("chaseFleetIndex", value); }
        int combatAgeTicks() const { return ReadField<int>("combatAgeTicks"); }
        void SetCombatAgeTicks(int value) const { WriteField<int>("combatAgeTicks", value); }
        int sinceCombatTicks() const { return ReadField<int>("sinceCombatTicks"); }
        void SetSinceCombatTicks(int value) const { WriteField<int>("sinceCombatTicks", value); }
    };
}
