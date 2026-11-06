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
        void StrokeOpen(void* pts, float halfW, void* col, void* v, void* c, void* tri, void* uv = nullptr) const { void* __callArgs[] = { pts, &halfW, col, v, c, tri, uv }; CallStatic("StrokeOpen", __callArgs, 7); }
        void AddQuad(void* v, void* c, void* tri, void* center, float halfW, float halfH, float angle, void* col) const { void* __callArgs[] = { v, c, tri, center, &halfW, &halfH, &angle, col }; CallStatic("AddQuad", __callArgs, 8); }
        void* SmoothOpen(void* pts, int iterations) const { void* __callArgs[] = { pts, &iterations }; return CallStatic("SmoothOpen", __callArgs, 2); }
        void* SmoothOpenInto(void* pts, int iterations, void* bufA, void* bufB) const { void* __callArgs[] = { pts, &iterations, bufA, bufB }; return CallStatic("SmoothOpenInto", __callArgs, 4); }
        void* SimplifyOpen(void* pts, float epsilon) const { void* __callArgs[] = { pts, &epsilon }; return CallStatic("SimplifyOpen", __callArgs, 2); }
        void SimplifyOpenInto(void* pts, float epsilon, void* dst) const { void* __callArgs[] = { pts, &epsilon, dst }; CallStatic("SimplifyOpenInto", __callArgs, 3); }
        float Length(void* pts) const { void* __callArgs[] = { pts }; return CallStaticValue<float>("Length", __callArgs, 1); }
        void* Slice(void* pts, float length) const { void* __callArgs[] = { pts, &length }; return CallStatic("Slice", __callArgs, 2); }
        void SliceRangeInto(void* pts, float from, float to, void* dst) const { void* __callArgs[] = { pts, &from, &to, dst }; CallStatic("SliceRangeInto", __callArgs, 4); }
        void StrokeDashedOpen(void* pts, float halfW, float dash, float gap, float phase, void* col, void* v, void* c, void* tri, void* uv = nullptr) const { void* __callArgs[] = { pts, &halfW, &dash, &gap, &phase, col, v, c, tri, uv }; CallStatic("StrokeDashedOpen", __callArgs, 10); }
    };
}
