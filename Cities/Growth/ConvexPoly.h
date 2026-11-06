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
        float SignedArea(void* p) const { void* args[] = { p }; return CallStaticValue<float>("SignedArea", args, 1); }
        float Area(void* p) const { void* args[] = { p }; return CallStaticValue<float>("Area", args, 1); }
        void* Centroid(void* p) const { void* args[] = { p }; return CallStatic("Centroid", args, 1); }
        void* Clip(void* poly, void* n, float d) const { void* args[] = { poly, n, &d }; return CallStatic("Clip", args, 3); }
        void* Inset(void* poly, float dist) const { void* args[] = { poly, &dist }; return CallStatic("Inset", args, 2); }
        void* Block(void* center, float radius, int sides, float jitter) const { void* args[] = { center, &radius, &sides, &jitter }; return CallStatic("Block", args, 4); }
        void* Hull(void* pts) const { void* args[] = { pts }; return CallStatic("Hull", args, 1); }
        void Subdivide(void* poly, float targetArea, float areaJitter, int depth, void* outParcels) const { void* args[] = { poly, &targetArea, &areaJitter, &depth, outParcels }; CallStatic("Subdivide", args, 5); }
        bool ClipLine(void* poly, void* origin, void* dir, float& t0, float& t1) const { void* args[] = { poly, origin, dir, &t0, &t1 }; return CallStaticValue<bool>("ClipLine", args, 5); }
    };
}
