#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class BorderChains : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderChains(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "BorderChains") {}
    public:
        void Walk(void* tiles, int w, int h, float spacing, void* capital, void* samples, void* linePoints = nullptr, void* lineBreaks = nullptr, float lineStep = 1.5f) const { void* __callArgs[] = { tiles, &w, &h, &spacing, capital, samples, linePoints, lineBreaks, &lineStep }; CallStatic("Walk", __callArgs, 9); }
    };
}
