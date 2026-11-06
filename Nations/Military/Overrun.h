#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class Overrun : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Overrun(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "Overrun") {}
    public:
        bool Encircled(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Encircled", args, 1); }
        bool DestroyIfEncircled(void* d, void* mil, void* n, void* grid) const { void* args[] = { d, mil, n, grid }; return CallStaticValue<bool>("DestroyIfEncircled", args, 4); }
        bool LocalPocket(void* d, int start, void* mil, void* n, void* grid) const { void* args[] = { d, &start, mil, n, grid }; return CallStaticValue<bool>("LocalPocket", args, 5); }
        int LocalPocketMaxTiles() const { return ReadStaticField<int>("LocalPocketMaxTiles"); }
    };
}
