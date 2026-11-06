#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapRemoval : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapRemoval(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapRemoval") {}
    public:
        bool RemoveAt(void* grid, int tile, const char*& said) const { void* __callArgs[] = { grid, &tile, &said }; return CallStaticValue<bool>("RemoveAt", __callArgs, 3); }
    };
}
