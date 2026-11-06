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
        void Install(void* store, void* cultureOf, void* worldSeed, void* now) const { void* __callArgs[] = { store, cultureOf, worldSeed, now }; CallStatic("Install", __callArgs, 4); }
        void* Roll(void* store, int nationId, int culture, int seed, int tick) const { void* __callArgs[] = { store, &nationId, &culture, &seed, &tick }; return CallStatic("Roll", __callArgs, 5); }
        void* Make(int id, int nationId, int culture, int seed, int tick) const { void* __callArgs[] = { &id, &nationId, &culture, &seed, &tick }; return CallStatic("Make", __callArgs, 5); }
        void Upkeep(void* store) const { void* __callArgs[] = { store }; CallStatic("Upkeep", __callArgs, 1); }
        void* BestFree(void* nc) const { void* __callArgs[] = { nc }; return CallStatic("BestFree", __callArgs, 1); }
        int PoolSize() const { return ReadStaticField<int>("PoolSize"); }
    };
}
