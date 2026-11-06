#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class NavalTech : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalTech(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "NavalTech") {}
    public:
        bool CanSail(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("CanSail", __callArgs, 1); }
        float FleetAttackOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("FleetAttackOf", __callArgs, 1); }
        float FleetDamageTakenOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("FleetDamageTakenOf", __callArgs, 1); }
        float FleetSpeedOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("FleetSpeedOf", __callArgs, 1); }
        float TransportSpeedOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("TransportSpeedOf", __callArgs, 1); }
        float PatrolRadiusOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("PatrolRadiusOf", __callArgs, 1); }
        float EmbarkTimeOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("EmbarkTimeOf", __callArgs, 1); }
        void Write(int nationId, void* m, void* researched) const { void* __callArgs[] = { &nationId, &m, researched }; CallStatic("Write", __callArgs, 3); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* canSail() const { return ReadStaticField<void*>("canSail"); }
        void canSail(void* value) const { WriteStaticField<void*>("canSail", value); }
        void* fleetAttack() const { return ReadStaticField<void*>("fleetAttack"); }
        void fleetAttack(void* value) const { WriteStaticField<void*>("fleetAttack", value); }
        void* fleetDamageTaken() const { return ReadStaticField<void*>("fleetDamageTaken"); }
        void fleetDamageTaken(void* value) const { WriteStaticField<void*>("fleetDamageTaken", value); }
        void* fleetSpeed() const { return ReadStaticField<void*>("fleetSpeed"); }
        void fleetSpeed(void* value) const { WriteStaticField<void*>("fleetSpeed", value); }
        void* transportSpeed() const { return ReadStaticField<void*>("transportSpeed"); }
        void transportSpeed(void* value) const { WriteStaticField<void*>("transportSpeed", value); }
        void* patrolRadius() const { return ReadStaticField<void*>("patrolRadius"); }
        void patrolRadius(void* value) const { WriteStaticField<void*>("patrolRadius", value); }
        void* embarkTime() const { return ReadStaticField<void*>("embarkTime"); }
        void embarkTime(void* value) const { WriteStaticField<void*>("embarkTime", value); }
    };
}
