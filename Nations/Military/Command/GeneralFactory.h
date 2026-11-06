#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class GeneralFactory : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GeneralFactory(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "GeneralFactory") {}
    public:
        void Install(void* store, void* cultureOf, void* worldSeed, void* now) const { void* args[] = { store, cultureOf, worldSeed, now }; CallStatic("Install", args, 4); }
        void* Roll(void* store, int nationId, int culture, int seed, int tick) const { void* args[] = { store, &nationId, &culture, &seed, &tick }; return CallStatic("Roll", args, 5); }
        void* Make(int id, int nationId, int culture, int seed, int tick) const { void* args[] = { &id, &nationId, &culture, &seed, &tick }; return CallStatic("Make", args, 5); }
        void Upkeep(void* store) const { void* args[] = { store }; CallStatic("Upkeep", args, 1); }
        void* BestFree(void* nc) const { void* args[] = { nc }; return CallStatic("BestFree", args, 1); }
        int PoolSize() const { return ReadStaticField<int>("PoolSize"); }
    };
}
