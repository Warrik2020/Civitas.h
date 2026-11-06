#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class LabelWarp : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LabelWarp(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "LabelWarp") {}
    public:
        bool LayoutName(void* fit, void* space, float curveStrength, float spineFillFraction, float heightMargin, float spillMultiple, float w0, float h0, void* pts, void* cum, int& np, float& scale, float& startArc) const { void* __callArgs[] = { fit, space, &curveStrength, &spineFillFraction, &heightMargin, &spillMultiple, &w0, &h0, &pts, &cum, &np, &scale, &startArc }; return CallStaticValue<bool>("LayoutName", __callArgs, 13); }
        void SimplifyToArc(void* pts, void* cum, void* room, int np, float curveStrength, void* roomAlt = nullptr) const { void* __callArgs[] = { pts, cum, room, &np, &curveStrength, roomAlt }; CallStatic("SimplifyToArc", __callArgs, 6); }
        float MinRoomOverSpan(void* cum, void* room, int np, float a0, float a1) const { void* __callArgs[] = { cum, room, &np, &a0, &a1 }; return CallStaticValue<float>("MinRoomOverSpan", __callArgs, 5); }
        bool MeasureGlyphs(void* tmp, float& xMin, float& xMax, float& yMin, float& yMax) const { void* __callArgs[] = { tmp, &xMin, &xMax, &yMin, &yMax }; return CallStaticValue<bool>("MeasureGlyphs", __callArgs, 5); }
        void WarpText(void* tmp, void* pts, void* cum, int np, float xMin, float yMid, float scale, float startArc) const { void* __callArgs[] = { tmp, pts, cum, &np, &xMin, &yMid, &scale, &startArc }; CallStatic("WarpText", __callArgs, 8); }
        void SampleSpine(void* pts, void* cum, int np, float d, void* p, void* tan) const { void* __callArgs[] = { pts, cum, &np, &d, &p, &tan }; CallStatic("SampleSpine", __callArgs, 6); }
        void ApplyAlpha(void* tmp, float a) const { void* __callArgs[] = { tmp, &a }; CallStatic("ApplyAlpha", __callArgs, 2); }
        void ApplyColor(void* tmp, void* c) const { void* __callArgs[] = { tmp, c }; CallStatic("ApplyColor", __callArgs, 2); }
    };
}
