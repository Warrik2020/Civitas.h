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
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void ordinal(int value) const { WriteField<int>("ordinal", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float x() const { return ReadField<float>("x"); }
        void x(float value) const { WriteField<float>("x", value); }
        float y() const { return ReadField<float>("y"); }
        void y(float value) const { WriteField<float>("y", value); }
        float headX() const { return ReadField<float>("headX"); }
        void headX(float value) const { WriteField<float>("headX", value); }
        float headY() const { return ReadField<float>("headY"); }
        void headY(float value) const { WriteField<float>("headY", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void waterTile(int value) const { WriteField<int>("waterTile", value); }
        int mode() const { return ReadField<int>("mode"); }
        void mode(int value) const { WriteField<int>("mode", value); }
        int patrolSize() const { return ReadField<int>("patrolSize"); }
        void patrolSize(int value) const { WriteField<int>("patrolSize", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void manualControl(bool value) const { WriteField<bool>("manualControl", value); }
        float strength() const { return ReadField<float>("strength"); }
        void strength(float value) const { WriteField<float>("strength", value); }
        float org() const { return ReadField<float>("org"); }
        void org(float value) const { WriteField<float>("org", value); }
        int homeCityTile() const { return ReadField<int>("homeCityTile"); }
        void homeCityTile(int value) const { WriteField<int>("homeCityTile", value); }
        bool hasTarget() const { return ReadField<bool>("hasTarget"); }
        void hasTarget(bool value) const { WriteField<bool>("hasTarget", value); }
        float targetX() const { return ReadField<float>("targetX"); }
        void targetX(float value) const { WriteField<float>("targetX", value); }
        float targetY() const { return ReadField<float>("targetY"); }
        void targetY(float value) const { WriteField<float>("targetY", value); }
        void* lane() const { return ReadField<void*>("lane"); }
        void lane(void* value) const { WriteField<void*>("lane", value); }
        int leg() const { return ReadField<int>("leg"); }
        void leg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void legPos(float value) const { WriteField<float>("legPos", value); }
        int escortDivisionIndex() const { return ReadField<int>("escortDivisionIndex"); }
        void escortDivisionIndex(int value) const { WriteField<int>("escortDivisionIndex", value); }
        int chaseFleetIndex() const { return ReadField<int>("chaseFleetIndex"); }
        void chaseFleetIndex(int value) const { WriteField<int>("chaseFleetIndex", value); }
        int combatAgeTicks() const { return ReadField<int>("combatAgeTicks"); }
        void combatAgeTicks(int value) const { WriteField<int>("combatAgeTicks", value); }
        int sinceCombatTicks() const { return ReadField<int>("sinceCombatTicks"); }
        void sinceCombatTicks(int value) const { WriteField<int>("sinceCombatTicks", value); }
    };
}
