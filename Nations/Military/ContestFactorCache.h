#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class ContestFactorCache : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ContestFactorCache(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "ContestFactorCache") {}
    public:
        bool TryGet(int tile, int tick, int pair, float& value) const { void* __callArgs[] = { &tile, &tick, &pair, &value }; return CallValue<bool>("TryGet", __callArgs, 4); }
        void Store(int tile, int pair, float value, int expiry) const { void* __callArgs[] = { &tile, &pair, &value, &expiry }; Call("Store", __callArgs, 4); }
        void Sweep(int tick) const { void* __callArgs[] = { &tick }; Call("Sweep", __callArgs, 1); }
    };
}
