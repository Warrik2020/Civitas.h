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
        bool LayoutName(void* fit, void* space, float curveStrength, float spineFillFraction, float heightMargin, float spillMultiple, float w0, float h0, void* pts, void* cum, int& np, float& scale, float& startArc) const { void* args[] = { fit, space, &curveStrength, &spineFillFraction, &heightMargin, &spillMultiple, &w0, &h0, &pts, &cum, &np, &scale, &startArc }; return CallStaticValue<bool>("LayoutName", args, 13); }
        void SimplifyToArc(void* pts, void* cum, void* room, int np, float curveStrength, void* roomAlt = nullptr) const { void* args[] = { pts, cum, room, &np, &curveStrength, roomAlt }; CallStatic("SimplifyToArc", args, 6); }
        float MinRoomOverSpan(void* cum, void* room, int np, float a0, float a1) const { void* args[] = { cum, room, &np, &a0, &a1 }; return CallStaticValue<float>("MinRoomOverSpan", args, 5); }
        bool MeasureGlyphs(void* tmp, float& xMin, float& xMax, float& yMin, float& yMax) const { void* args[] = { tmp, &xMin, &xMax, &yMin, &yMax }; return CallStaticValue<bool>("MeasureGlyphs", args, 5); }
        void WarpText(void* tmp, void* pts, void* cum, int np, float xMin, float yMid, float scale, float startArc) const { void* args[] = { tmp, pts, cum, &np, &xMin, &yMid, &scale, &startArc }; CallStatic("WarpText", args, 8); }
        void SampleSpine(void* pts, void* cum, int np, float d, void* p, void* tan) const { void* args[] = { pts, cum, &np, &d, &p, &tan }; CallStatic("SampleSpine", args, 6); }
        void ApplyAlpha(void* tmp, float a) const { void* args[] = { tmp, &a }; CallStatic("ApplyAlpha", args, 2); }
        void ApplyColor(void* tmp, void* c) const { void* args[] = { tmp, c }; CallStatic("ApplyColor", args, 2); }
    };
}
