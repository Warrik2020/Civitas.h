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
        bool CanSail(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("CanSail", args, 1); }
        float FleetAttackOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("FleetAttackOf", args, 1); }
        float FleetDamageTakenOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("FleetDamageTakenOf", args, 1); }
        float FleetSpeedOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("FleetSpeedOf", args, 1); }
        float TransportSpeedOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("TransportSpeedOf", args, 1); }
        float PatrolRadiusOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("PatrolRadiusOf", args, 1); }
        float EmbarkTimeOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("EmbarkTimeOf", args, 1); }
        void Write(int nationId, void* m, void* researched) const { void* args[] = { &nationId, &m, researched }; CallStatic("Write", args, 3); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* canSail() const { return ReadStaticField<void*>("canSail"); }
        void SetCanSail(void* value) const { WriteStaticField<void*>("canSail", value); }
        void* fleetAttack() const { return ReadStaticField<void*>("fleetAttack"); }
        void SetFleetAttack(void* value) const { WriteStaticField<void*>("fleetAttack", value); }
        void* fleetDamageTaken() const { return ReadStaticField<void*>("fleetDamageTaken"); }
        void SetFleetDamageTaken(void* value) const { WriteStaticField<void*>("fleetDamageTaken", value); }
        void* fleetSpeed() const { return ReadStaticField<void*>("fleetSpeed"); }
        void SetFleetSpeed(void* value) const { WriteStaticField<void*>("fleetSpeed", value); }
        void* transportSpeed() const { return ReadStaticField<void*>("transportSpeed"); }
        void SetTransportSpeed(void* value) const { WriteStaticField<void*>("transportSpeed", value); }
        void* patrolRadius() const { return ReadStaticField<void*>("patrolRadius"); }
        void SetPatrolRadius(void* value) const { WriteStaticField<void*>("patrolRadius", value); }
        void* embarkTime() const { return ReadStaticField<void*>("embarkTime"); }
        void SetEmbarkTime(void* value) const { WriteStaticField<void*>("embarkTime", value); }
    };
}
