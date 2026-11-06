#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TileGridBuilder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileGridBuilder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TileGridBuilder") {}
    public:
        void* Build(void* landGrid, int w, int h) const { void* __callArgs[] = { landGrid, &w, &h }; return CallStatic("Build", __callArgs, 3); }
    };
}
