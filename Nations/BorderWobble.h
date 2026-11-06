#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class BorderWobble : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderWobble(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "BorderWobble") {}
    public:
        void Apply(void* pts, void* tags, void* ink, void* space, void* scratchPts, void* scratchTags) const { void* args[] = { pts, tags, ink, space, scratchPts, scratchTags }; CallStatic("Apply", args, 6); }
        void* Displace(void* p, void* ink, void* space) const { void* args[] = { p, ink, space }; return CallStatic("Displace", args, 3); }
        float CoastWeight(float tx, float ty, void* ink) const { void* args[] = { &tx, &ty, ink }; return CallStaticValue<float>("CoastWeight", args, 3); }
    };
}
