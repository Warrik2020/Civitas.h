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
        void Begin(void* pts) const { void* args[] = { pts }; Call("Begin", args, 1); }
        void Line(float width, float feather, void* col, float dash, float gap, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { &width, &feather, col, &dash, &gap, v, c, t, uv }; Call("Line", args, 9); }
        void InnerBand(float width, void* col, void* v, void* c, void* t, void* uv = nullptr, void* startAlpha = nullptr) const { void* args[] = { &width, col, v, c, t, uv, startAlpha }; Call("InnerBand", args, 7); }
        void InnerStripe(float width, float feather, void* col, void* v, void* c, void* t, void* uv) const { void* args[] = { &width, &feather, col, v, c, t, uv }; Call("InnerStripe", args, 7); }
        void InnerBandProfile(float width, void* col, void* ringT, void* ringA, void* reach, void* v, void* c, void* t, void* uv = nullptr, void* startAlpha = nullptr) const { void* args[] = { &width, col, ringT, ringA, reach, v, c, t, uv, startAlpha }; Call("InnerBandProfile", args, 10); }
        void Skirt(float inward, float outward, float feather, float insideFade, void* cols, void* outScale, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { &inward, &outward, &feather, &insideFade, cols, outScale, v, c, t, uv }; Call("Skirt", args, 10); }
        void BeginOpen(void* pts) const { void* args[] = { pts }; Call("BeginOpen", args, 1); }
        void SkirtOpen(float inward, float outward, float feather, float insideFade, void* cols, void* outScale, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { &inward, &outward, &feather, &insideFade, cols, outScale, v, c, t, uv }; Call("SkirtOpen", args, 10); }
        void InnerBandOpen(float width, void* col, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { &width, col, v, c, t, uv }; Call("InnerBandOpen", args, 6); }
        void Glow(float reachIn, float reachOut, void* col, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { &reachIn, &reachOut, col, v, c, t, uv }; Call("Glow", args, 7); }
        void* Inset(int i, float dist) const { void* args[] = { &i, &dist }; return Call("Inset", args, 2); }
    };
}
