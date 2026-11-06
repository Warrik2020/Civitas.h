#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ProductionLines : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProductionLines(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ProductionLines") {}
    public:
        bool Any(void* it, int pool) const { void* __callArgs[] = { it, &pool }; return CallStaticValue<bool>("Any", __callArgs, 2); }
        int Count(void* it, int pool) const { void* __callArgs[] = { it, &pool }; return CallStaticValue<int>("Count", __callArgs, 2); }
        void Gather(void* it, int pool, void* into) const { void* __callArgs[] = { it, &pool, into }; CallStatic("Gather", __callArgs, 3); }
        bool Has(void* it, int designId) const { void* __callArgs[] = { it, &designId }; return CallStaticValue<bool>("Has", __callArgs, 2); }
        int FactoriesOn(void* it, int designId) const { void* __callArgs[] = { it, &designId }; return CallStaticValue<int>("FactoriesOn", __callArgs, 2); }
        bool TryGet(void* it, int designId, void* line) const { void* __callArgs[] = { it, &designId, &line }; return CallStaticValue<bool>("TryGet", __callArgs, 3); }
        int FactoriesOnPool(void* it, int pool) const { void* __callArgs[] = { it, &pool }; return CallStaticValue<int>("FactoriesOnPool", __callArgs, 2); }
        int Assigned(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("Assigned", __callArgs, 1); }
        bool Retooling(void* line) const { void* __callArgs[] = { &line }; return CallStaticValue<bool>("Retooling", __callArgs, 1); }
        float AddFee(void* it, void* d) const { void* __callArgs[] = { it, d }; return CallStaticValue<float>("AddFee", __callArgs, 2); }
        void* Refusal(void* it, int designId, bool validate = true) const { void* __callArgs[] = { it, &designId, &validate }; return CallStatic("Refusal", __callArgs, 3); }
        bool Add(void* it, int designId, bool charge, const char*& refusal, int factories = 0, int pot = 2147483647, bool validate = true) const { void* __callArgs[] = { it, &designId, &charge, &refusal, &factories, &pot, &validate }; return CallStaticValue<bool>("Add", __callArgs, 7); }
        void MarkRetooling(void* it, int designId, int untilTick) const { void* __callArgs[] = { it, &designId, &untilTick }; CallStatic("MarkRetooling", __callArgs, 3); }
        int SetFactories(void* it, int designId, int want, int pot) const { void* __callArgs[] = { it, &designId, &want, &pot }; return CallStaticValue<int>("SetFactories", __callArgs, 4); }
        void Remove(void* it, int designId) const { void* __callArgs[] = { it, &designId }; CallStatic("Remove", __callArgs, 2); }
        void Prune(void* w) const { void* __callArgs[] = { w }; CallStatic("Prune", __callArgs, 1); }
        int PoolOf(int domain) const { void* __callArgs[] = { &domain }; return CallStaticValue<int>("PoolOf", __callArgs, 1); }
        int MaxPerPool() const { return ReadStaticField<int>("MaxPerPool"); }
    };
}
