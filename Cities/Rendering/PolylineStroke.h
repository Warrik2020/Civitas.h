#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class PolylineStroke : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PolylineStroke(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "PolylineStroke") {}
    public:
        void StrokeOpen(void* pts, float halfW, void* col, void* v, void* c, void* tri, void* uv = nullptr) const { void* args[] = { pts, &halfW, col, v, c, tri, uv }; CallStatic("StrokeOpen", args, 7); }
        void AddQuad(void* v, void* c, void* tri, void* center, float halfW, float halfH, float angle, void* col) const { void* args[] = { v, c, tri, center, &halfW, &halfH, &angle, col }; CallStatic("AddQuad", args, 8); }
        void* SmoothOpen(void* pts, int iterations) const { void* args[] = { pts, &iterations }; return CallStatic("SmoothOpen", args, 2); }
        void* SmoothOpenInto(void* pts, int iterations, void* bufA, void* bufB) const { void* args[] = { pts, &iterations, bufA, bufB }; return CallStatic("SmoothOpenInto", args, 4); }
        void* SimplifyOpen(void* pts, float epsilon) const { void* args[] = { pts, &epsilon }; return CallStatic("SimplifyOpen", args, 2); }
        void SimplifyOpenInto(void* pts, float epsilon, void* dst) const { void* args[] = { pts, &epsilon, dst }; CallStatic("SimplifyOpenInto", args, 3); }
        float Length(void* pts) const { void* args[] = { pts }; return CallStaticValue<float>("Length", args, 1); }
        void* Slice(void* pts, float length) const { void* args[] = { pts, &length }; return CallStatic("Slice", args, 2); }
        void SliceRangeInto(void* pts, float from, float to, void* dst) const { void* args[] = { pts, &from, &to, dst }; CallStatic("SliceRangeInto", args, 4); }
        void StrokeDashedOpen(void* pts, float halfW, float dash, float gap, float phase, void* col, void* v, void* c, void* tri, void* uv = nullptr) const { void* args[] = { pts, &halfW, &dash, &gap, &phase, col, v, c, tri, uv }; CallStatic("StrokeDashedOpen", args, 10); }
    };
}
