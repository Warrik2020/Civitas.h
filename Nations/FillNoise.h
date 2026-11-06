#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FillNoise : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FillNoise(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FillNoise") {}
    public:
        void* Tint(void* fill, int nationId, int x, int y, float strength, float scaleTiles) const { void* __callArgs[] = { fill, &nationId, &x, &y, &strength, &scaleTiles }; return CallStatic("Tint", __callArgs, 6); }
        void* Lighten(void* c, float t) const { void* __callArgs[] = { c, &t }; return CallStatic("Lighten", __callArgs, 2); }
    };
}
