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
        void* Tint(void* fill, int nationId, int x, int y, float strength, float scaleTiles) const { void* args[] = { fill, &nationId, &x, &y, &strength, &scaleTiles }; return CallStatic("Tint", args, 6); }
        void* Lighten(void* c, float t) const { void* args[] = { c, &t }; return CallStatic("Lighten", args, 2); }
    };
}
