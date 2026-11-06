#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TileRegionOutline : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileRegionOutline(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TileRegionOutline") {}
    public:
        void Stroke(void* tiles, float widthWorld, float featherWorld, void* col, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { tiles, &widthWorld, &featherWorld, col, v, c, t, uv }; Call("Stroke", args, 8); }
        void StrokeDouble(void* tiles, float widthA, float featherA, void* colA, float widthB, float featherB, void* colB, void* v, void* c, void* t) const { void* args[] = { tiles, &widthA, &featherA, colA, &widthB, &featherB, colB, v, c, t }; Call("StrokeDouble", args, 10); }
        void MatchNationBorders(void* owner, void* contour) const { void* args[] = { owner, contour }; Call("MatchNationBorders", args, 2); }
        void StrokeGlow(void* tiles, float reach, void* glowCol, float lineWidth, float lineFeather, void* lineCol, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { tiles, &reach, glowCol, &lineWidth, &lineFeather, lineCol, v, c, t, uv }; Call("StrokeGlow", args, 10); }
        void StrokeGlow(void* loops, float reach, void* glowCol, float lineWidth, float lineFeather, void* lineCol, float dash, float gap, void* v, void* c, void* t, void* uv = nullptr) const { void* args[] = { loops, &reach, glowCol, &lineWidth, &lineFeather, lineCol, &dash, &gap, v, c, t, uv }; Call("StrokeGlow", args, 12); }
        void* TraceLoops(void* tiles) const { void* args[] = { tiles }; return Call("TraceLoops", args, 1); }
    };
}
