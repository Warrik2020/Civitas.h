#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PortraitImage : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PortraitImage(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PortraitImage") {}
    public:
        void* Coverage(void* loops, int w, int h) const { void* __callArgs[] = { loops, &w, &h }; return CallStatic("Coverage", __callArgs, 3); }
        void* DistanceOutside(void* cov, int w, int h) const { void* __callArgs[] = { cov, &w, &h }; return CallStatic("DistanceOutside", __callArgs, 3); }
        void* Compose(void* cov, void* fill, void* dist, int w, int h, void* glow) const { void* __callArgs[] = { cov, fill, dist, &w, &h, glow }; return CallStatic("Compose", __callArgs, 6); }
        float SignedArea(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("SignedArea", __callArgs, 1); }
    };
}
