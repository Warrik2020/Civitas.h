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
        void ClassDefault(void* t, void* w = nullptr) const { void* __callArgs[] = { t, w }; CallStatic("ClassDefault", __callArgs, 2); }
        int EraGuns(int cls, int best) const { void* __callArgs[] = { &cls, &best }; return CallStaticValue<int>("EraGuns", __callArgs, 2); }
        void EraPreset(void* it, void* t, int best) const { void* __callArgs[] = { it, t, &best }; CallStatic("EraPreset", __callArgs, 3); }
        void EnsureComposed(void* t, void* w) const { void* __callArgs[] = { t, w }; CallStatic("EnsureComposed", __callArgs, 2); }
        int TankCrewOf(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<int>("TankCrewOf", __callArgs, 2); }
        int GunCrewOf(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<int>("GunCrewOf", __callArgs, 2); }
        int TankCrewTotal(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<int>("TankCrewTotal", __callArgs, 2); }
        int GunCrewTotal(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<int>("GunCrewTotal", __callArgs, 2); }
        float SeatsOf(void* carrier) const { void* __callArgs[] = { carrier }; return CallStaticValue<float>("SeatsOf", __callArgs, 1); }
        float SeatsPerCar(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("SeatsPerCar", __callArgs, 2); }
        int Men(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<int>("Men", __callArgs, 2); }
        void* Derive(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("Derive", __callArgs, 2); }
        void* Legacy(int cls, void* cfg) const { void* __callArgs[] = { &cls, cfg }; return CallStatic("Legacy", __callArgs, 2); }
        void* Refusal(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("Refusal", __callArgs, 2); }
        float GoldWeight(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("GoldWeight", __callArgs, 2); }
        float GoldMul(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("GoldMul", __callArgs, 2); }
        float TimeMul(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("TimeMul", __callArgs, 2); }
        float PoolCount(void* it, void* t, int pool, void* cfg) const { void* __callArgs[] = { it, t, &pool, cfg }; return CallStaticValue<float>("PoolCount", __callArgs, 4); }
    };
}
