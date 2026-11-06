#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Growth
{
    class ConvexPoly : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ConvexPoly(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Growth", "ConvexPoly") {}
    public:
        float SignedArea(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("SignedArea", __callArgs, 1); }
        float Area(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("Area", __callArgs, 1); }
        void* Centroid(void* p) const { void* __callArgs[] = { p }; return CallStatic("Centroid", __callArgs, 1); }
        void* Clip(void* poly, void* n, float d) const { void* __callArgs[] = { poly, n, &d }; return CallStatic("Clip", __callArgs, 3); }
        void* Inset(void* poly, float dist) const { void* __callArgs[] = { poly, &dist }; return CallStatic("Inset", __callArgs, 2); }
        void* Block(void* center, float radius, int sides, float jitter) const { void* __callArgs[] = { center, &radius, &sides, &jitter }; return CallStatic("Block", __callArgs, 4); }
        void* Hull(void* pts) const { void* __callArgs[] = { pts }; return CallStatic("Hull", __callArgs, 1); }
        void Subdivide(void* poly, float targetArea, float areaJitter, int depth, void* outParcels) const { void* __callArgs[] = { poly, &targetArea, &areaJitter, &depth, outParcels }; CallStatic("Subdivide", __callArgs, 5); }
        bool ClipLine(void* poly, void* origin, void* dir, float& t0, float& t1) const { void* __callArgs[] = { poly, origin, dir, &t0, &t1 }; return CallStaticValue<bool>("ClipLine", __callArgs, 5); }
    };
}
