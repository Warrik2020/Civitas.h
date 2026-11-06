#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class BorderStroker : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderStroker(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "BorderStroker") {}
    public:
        void Begin(void* pts) const { void* __callArgs[] = { pts }; Call("Begin", __callArgs, 1); }
        void Line(float width, float feather, void* col, float dash, float gap, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { &width, &feather, col, &dash, &gap, v, c, t, uv }; Call("Line", __callArgs, 9); }
        void InnerBand(float width, void* col, void* v, void* c, void* t, void* uv = nullptr, void* startAlpha = nullptr) const { void* __callArgs[] = { &width, col, v, c, t, uv, startAlpha }; Call("InnerBand", __callArgs, 7); }
        void InnerStripe(float width, float feather, void* col, void* v, void* c, void* t, void* uv) const { void* __callArgs[] = { &width, &feather, col, v, c, t, uv }; Call("InnerStripe", __callArgs, 7); }
        void InnerBandProfile(float width, void* col, void* ringT, void* ringA, void* reach, void* v, void* c, void* t, void* uv = nullptr, void* startAlpha = nullptr) const { void* __callArgs[] = { &width, col, ringT, ringA, reach, v, c, t, uv, startAlpha }; Call("InnerBandProfile", __callArgs, 10); }
        void Skirt(float inward, float outward, float feather, float insideFade, void* cols, void* outScale, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { &inward, &outward, &feather, &insideFade, cols, outScale, v, c, t, uv }; Call("Skirt", __callArgs, 10); }
        void BeginOpen(void* pts) const { void* __callArgs[] = { pts }; Call("BeginOpen", __callArgs, 1); }
        void SkirtOpen(float inward, float outward, float feather, float insideFade, void* cols, void* outScale, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { &inward, &outward, &feather, &insideFade, cols, outScale, v, c, t, uv }; Call("SkirtOpen", __callArgs, 10); }
        void InnerBandOpen(float width, void* col, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { &width, col, v, c, t, uv }; Call("InnerBandOpen", __callArgs, 6); }
        void Glow(float reachIn, float reachOut, void* col, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { &reachIn, &reachOut, col, v, c, t, uv }; Call("Glow", __callArgs, 7); }
        void* Inset(int i, float dist) const { void* __callArgs[] = { &i, &dist }; return Call("Inset", __callArgs, 2); }
    };
}
