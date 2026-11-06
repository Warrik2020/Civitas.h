#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class Blockades : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Blockades(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "Blockades") {}
    public:
        bool IsBlockaded(int cityTile) const { void* __callArgs[] = { &cityTile }; return CallStaticValue<bool>("IsBlockaded", __callArgs, 1); }
        int BlockaderOf(int cityTile) const { void* __callArgs[] = { &cityTile }; return CallStaticValue<int>("BlockaderOf", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void CopyTo(void* cityTiles) const { void* __callArgs[] = { cityTiles }; CallStatic("CopyTo", __callArgs, 1); }
    };
}
