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
        bool Any(void* it, int pool) const { void* args[] = { it, &pool }; return CallStaticValue<bool>("Any", args, 2); }
        int Count(void* it, int pool) const { void* args[] = { it, &pool }; return CallStaticValue<int>("Count", args, 2); }
        void Gather(void* it, int pool, void* into) const { void* args[] = { it, &pool, into }; CallStatic("Gather", args, 3); }
        bool Has(void* it, int designId) const { void* args[] = { it, &designId }; return CallStaticValue<bool>("Has", args, 2); }
        int FactoriesOn(void* it, int designId) const { void* args[] = { it, &designId }; return CallStaticValue<int>("FactoriesOn", args, 2); }
        bool TryGet(void* it, int designId, void* line) const { void* args[] = { it, &designId, &line }; return CallStaticValue<bool>("TryGet", args, 3); }
        int FactoriesOnPool(void* it, int pool) const { void* args[] = { it, &pool }; return CallStaticValue<int>("FactoriesOnPool", args, 2); }
        int Assigned(void* it) const { void* args[] = { it }; return CallStaticValue<int>("Assigned", args, 1); }
        bool Retooling(void* line) const { void* args[] = { &line }; return CallStaticValue<bool>("Retooling", args, 1); }
        float AddFee(void* it, void* d) const { void* args[] = { it, d }; return CallStaticValue<float>("AddFee", args, 2); }
        void* Refusal(void* it, int designId, bool validate = true) const { void* args[] = { it, &designId, &validate }; return CallStatic("Refusal", args, 3); }
        bool Add(void* it, int designId, bool charge, const char*& refusal, int factories = 0, int pot = 2147483647, bool validate = true) const { void* args[] = { it, &designId, &charge, &refusal, &factories, &pot, &validate }; return CallStaticValue<bool>("Add", args, 7); }
        void MarkRetooling(void* it, int designId, int untilTick) const { void* args[] = { it, &designId, &untilTick }; CallStatic("MarkRetooling", args, 3); }
        int SetFactories(void* it, int designId, int want, int pot) const { void* args[] = { it, &designId, &want, &pot }; return CallStaticValue<int>("SetFactories", args, 4); }
        void Remove(void* it, int designId) const { void* args[] = { it, &designId }; CallStatic("Remove", args, 2); }
        void Prune(void* w) const { void* args[] = { w }; CallStatic("Prune", args, 1); }
        int PoolOf(int domain) const { void* args[] = { &domain }; return CallStaticValue<int>("PoolOf", args, 1); }
        int MaxPerPool() const { return ReadStaticField<int>("MaxPerPool"); }
    };
}
