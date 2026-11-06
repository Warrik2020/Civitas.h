#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class Composition : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Composition(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "Composition") {}
    public:
        void ClassDefault(void* t, void* w = nullptr) const { void* args[] = { t, w }; CallStatic("ClassDefault", args, 2); }
        int EraGuns(int cls, int best) const { void* args[] = { &cls, &best }; return CallStaticValue<int>("EraGuns", args, 2); }
        void EraPreset(void* it, void* t, int best) const { void* args[] = { it, t, &best }; CallStatic("EraPreset", args, 3); }
        void EnsureComposed(void* t, void* w) const { void* args[] = { t, w }; CallStatic("EnsureComposed", args, 2); }
        int TankCrewOf(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<int>("TankCrewOf", args, 2); }
        int GunCrewOf(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<int>("GunCrewOf", args, 2); }
        int TankCrewTotal(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<int>("TankCrewTotal", args, 2); }
        int GunCrewTotal(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<int>("GunCrewTotal", args, 2); }
        float SeatsOf(void* carrier) const { void* args[] = { carrier }; return CallStaticValue<float>("SeatsOf", args, 1); }
        float SeatsPerCar(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("SeatsPerCar", args, 2); }
        int Men(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<int>("Men", args, 2); }
        void* Derive(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("Derive", args, 2); }
        void* Legacy(int cls, void* cfg) const { void* args[] = { &cls, cfg }; return CallStatic("Legacy", args, 2); }
        void* Refusal(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("Refusal", args, 2); }
        float GoldWeight(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("GoldWeight", args, 2); }
        float GoldMul(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("GoldMul", args, 2); }
        float TimeMul(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("TimeMul", args, 2); }
        float PoolCount(void* it, void* t, int pool, void* cfg) const { void* args[] = { it, t, &pool, cfg }; return CallStaticValue<float>("PoolCount", args, 4); }
    };
}
