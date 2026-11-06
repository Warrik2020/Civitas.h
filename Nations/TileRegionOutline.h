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
        void Stroke(void* tiles, float widthWorld, float featherWorld, void* col, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { tiles, &widthWorld, &featherWorld, col, v, c, t, uv }; Call("Stroke", __callArgs, 8); }
        void StrokeDouble(void* tiles, float widthA, float featherA, void* colA, float widthB, float featherB, void* colB, void* v, void* c, void* t) const { void* __callArgs[] = { tiles, &widthA, &featherA, colA, &widthB, &featherB, colB, v, c, t }; Call("StrokeDouble", __callArgs, 10); }
        void MatchNationBorders(void* owner, void* contour) const { void* __callArgs[] = { owner, contour }; Call("MatchNationBorders", __callArgs, 2); }
        void StrokeGlow(void* tiles, float reach, void* glowCol, float lineWidth, float lineFeather, void* lineCol, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { tiles, &reach, glowCol, &lineWidth, &lineFeather, lineCol, v, c, t, uv }; Call("StrokeGlow", __callArgs, 10); }
        void StrokeGlow(void* loops, float reach, void* glowCol, float lineWidth, float lineFeather, void* lineCol, float dash, float gap, void* v, void* c, void* t, void* uv = nullptr) const { void* __callArgs[] = { loops, &reach, glowCol, &lineWidth, &lineFeather, lineCol, &dash, &gap, v, c, t, uv }; Call("StrokeGlow", __callArgs, 12); }
        void* TraceLoops(void* tiles) const { void* __callArgs[] = { tiles }; return Call("TraceLoops", __callArgs, 1); }
    };
}
